#include "conference/basket.hpp"

rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr Basket::cmd_basket_pub_ = nullptr;
rclcpp::Node::SharedPtr Basket::node_ = nullptr;


/**
 * @brief 初始化 basket，提供共享節點指標
 * @param node ROS2 節點
 */
void Basket::init(const rclcpp::Node::SharedPtr &node) {
  if (!cmd_basket_pub_) {
    node_ = node;
    cmd_basket_pub_ = node_->create_publisher<std_msgs::msg::Bool>("/cmd_basketDoor", rclcpp::QoS(10).reliable());
    RCLCPP_INFO(node_->get_logger(), "Basket initialized with shared publisher.");
  } else {
    RCLCPP_WARN(node_->get_logger(), "Basket already initialized.");
  }
  
  return;
}


/**
 * @brief 開啟或關閉吸取
 * @param is_on 開啟(true) 或關閉(false)
 */
void Basket::turn_on(bool is_on) {
  if (is_on) {
    _publish_on(is_on, _door_on_time_ms);
  }
  else {
    _publish_on(is_on, _door_off_time_ms);
  }
  return;
}


/**
 * @brief 發布開啟或關閉吸取
 * @param is_on 開啟(true) 或關閉(false)
 * @param duration_ms 時間
 */
void Basket::_publish_on(bool is_on, int duration_ms) {
  std_msgs::msg::Bool msg;
  msg.data = is_on ? 1 : 0;

  auto start_time = std::chrono::steady_clock::now();
  auto end_time = start_time + std::chrono::milliseconds(duration_ms);

  while (std::chrono::steady_clock::now() < end_time) {
    cmd_basket_pub_->publish(msg);
    rclcpp::sleep_for(std::chrono::milliseconds(10));
  }
  
  return;
}