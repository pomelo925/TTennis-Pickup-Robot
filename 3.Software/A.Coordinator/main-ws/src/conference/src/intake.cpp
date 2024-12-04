#include "conference/intake.hpp"

rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr Intake::cmd_intake_pub_;
rclcpp::Node::SharedPtr Intake::node_ = nullptr;


/**
 * @brief 初始化 Intake，提供共享節點指標
 * @param node ROS2 節點
 */
void Intake::init(const rclcpp::Node::SharedPtr &node) {
  if (!cmd_intake_pub_) {
    node_ = node;
    cmd_intake_pub_ = node_->create_publisher<std_msgs::msg::Int32>("/cmd_intake", rclcpp::QoS(10).reliable());
    RCLCPP_INFO(node_->get_logger(), "Intake initialized with shared publisher.");
  } else {
    RCLCPP_WARN(node_->get_logger(), "Intake already initialized.");
  }
  
  return;
}


/**
 * @brief 開啟或關閉吸取
 * @param target_pwm Pwm數值
 */
void Intake::turn_on(int target_pwm, int duration_ms) {
  int duration_to_use = 0; // 實際使用的持續時間

  if (duration_ms > 0) {
    // 若有指定 duration_ms，則優先使用
    duration_to_use = duration_ms;
  } else {
    // 否則使用預設時間
    duration_to_use = _intake_on_time_ms;
  }

  // 發佈消息
  _publish_on(target_pwm, duration_to_use);
  return;
}


/**
 * @brief 發布開啟或關閉吸取
 * @param target_pwm Pwm數值
 * @param duration_ms 時間
 */
void Intake::_publish_on(int target_pwm, int duration_ms) {
  std_msgs::msg::Int32 msg;
  msg.data = target_pwm;

  auto start_time = std::chrono::steady_clock::now();
  auto end_time = start_time + std::chrono::milliseconds(duration_ms);

  while (std::chrono::steady_clock::now() < end_time) {
    cmd_intake_pub_->publish(msg);
    rclcpp::sleep_for(std::chrono::milliseconds(10));
  }

  return;
}