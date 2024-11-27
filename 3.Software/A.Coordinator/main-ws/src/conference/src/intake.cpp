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
    cmd_intake_pub_ = node_->create_publisher<std_msgs::msg::Bool>("/cmd_intake", 10);
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
  _publish_on(is_on);
  return;
}


/**
 * @brief 發布開啟或關閉吸取
 * @param is_on 開啟(true) 或關閉(false)
 */
void Intake::_publish_on(bool is_on) {
  std_msgs::msg::Bool msg;
  msg.data = is_on ? 1 : 0;
  cmd_intake_pub_->publish(msg);
  return;
}