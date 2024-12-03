#include "conference/intake.hpp"

rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr Intake::cmd_intake_pub_ = nullptr;
rclcpp::Node::SharedPtr Intake::node_ = nullptr;


/**
 * @brief 初始化 Intake，提供共享節點指標
 * @param node ROS2 節點
 */
void Intake::init(const rclcpp::Node::SharedPtr &node) {
  if (!cmd_intake_pub_) {
    node_ = node;
    cmd_intake_pub_ = node_->create_publisher<std_msgs::msg::Bool>("/cmd_intake", rclcpp::QoS(10).reliable());
    RCLCPP_INFO(node_->get_logger(), "Intake initialized with shared publisher.");
  } else {
    RCLCPP_WARN(node_->get_logger(), "Intake already initialized.");
  }
  
  return;
}


/**
 * @brief 開啟或關閉吸取
 * @param is_on 開啟(true) 或關閉(false)
 */
void Intake::turn_on(bool is_on) {
  _publish_on(is_on, _intake_on_time_ms);
  return;
}


/**
 * @brief 發布開啟或關閉吸取
 * @param is_on 開啟(true) 或關閉(false)
 * @param duration_ms 時間
 */
void Intake::_publish_on(bool is_on, int duration_ms) {
  std_msgs::msg::Bool msg;
  msg.data = is_on ? 1 : 0;

  auto start_time = std::chrono::steady_clock::now();
  auto end_time = start_time + std::chrono::milliseconds(duration_ms);

  while (std::chrono::steady_clock::now() < end_time) {
    cmd_intake_pub_->publish(msg);
    rclcpp::sleep_for(std::chrono::milliseconds(10));
  }

  return;
}