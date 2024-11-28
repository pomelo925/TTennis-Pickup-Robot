#include "conference/elevator.hpp"

rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr Elevator::cmd_elevator_pub_;
rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr Elevator::cmd_elevatorDoor_pub_;

rclcpp::Node::SharedPtr Elevator::node_ = nullptr;


/**
 * @brief 初始化 Elevator，提供共享節點指標
 * @param node ROS2 節點
 */
void Elevator::init(const rclcpp::Node::SharedPtr &node) {
  if (!cmd_elevator_pub_ || !cmd_elevatorDoor_pub_) {
    node_ = node;
    cmd_elevator_pub_ = node_->create_publisher<std_msgs::msg::Int32>("/cmd_elevator", 10);
    cmd_elevatorDoor_pub_ = node_->create_publisher<std_msgs::msg::Bool>("/cmd_elevatorDoor", 10);
    RCLCPP_INFO(node_->get_logger(), "Elevator initialized with shared publisher.");
  } else {
    RCLCPP_WARN(node_->get_logger(), "Elevator already initialized.");
  }
  
  return;
}


/**
 * @brief 發布開啟或關閉吸取
 * @param is_on 開啟(true) 或關閉(false)
 */
void Elevator::_publish_on(bool is_on) {
  std_msgs::msg::Bool msg;
  msg.data = is_on ? 1 : 0;
  cmd_elevatorDoor_pub_->publish(msg);
  return;
}


/**
 * @brief 開啟或關閉吸取
 * @param is_on 開啟(true) 或關閉(false)
 */
void Elevator::door_on(bool is_on) {
  _publish_on(is_on);
  return;
}


/**
 * @brief 發布整數
 * @param mode 整數
 */
void Elevator::_publish_int(int mode) {
  std_msgs::msg::Int32 msg;
  msg.data = mode;
  cmd_elevator_pub_->publish(msg);
  return;
}


/**
 * @brief 設定模式
 * @param mode 模式
 */
void Elevator::set_mode(int mode) {
  _publish_int(mode);
  return;
}

