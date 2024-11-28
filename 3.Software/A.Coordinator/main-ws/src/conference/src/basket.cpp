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
    cmd_basket_pub_ = node_->create_publisher<std_msgs::msg::Bool>("/cmd_basket", 10);
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
  _publish_on(is_on);
  return;
}


/**
 * @brief 發布開啟或關閉吸取
 * @param is_on 開啟(true) 或關閉(false)
 */
void Basket::_publish_on(bool is_on) {
  std_msgs::msg::Bool msg;
  msg.data = is_on ? 1 : 0;
  cmd_basket_pub_->publish(msg);
  return;
}