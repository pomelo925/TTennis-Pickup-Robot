#include "conference/nav.hpp"

rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr Nav::cmd_vel_pub_ = nullptr;
rclcpp::Node::SharedPtr Nav::node_ = nullptr;


/**
 * @brief 初始化 Nav，提供共享節點指標
 * @param node ROS2 節點
 */
void Nav::init(const rclcpp::Node::SharedPtr &node) {
  if (!cmd_vel_pub_) {
    node_ = node;
    cmd_vel_pub_ = node_->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);
    RCLCPP_INFO(node_->get_logger(), "Nav initialized with shared publisher.");
  } else {
    RCLCPP_WARN(node_->get_logger(), "Nav already initialized.");
  }
  
  return;
}


/**
 * @brief 直走，時間
 * @param time_ms 行走時間（毫秒）
 */
void Nav::move_straight(int time_ms) {
  // 只有加速和減速階段
  if (time_ms <= _linear_acclearation_time_ms + _linear_deceleration_time_ms) {
    int half_time = time_ms / 2;
    _publish_acceleration(_linear_max_speed, 0.0, half_time, true);
    _publish_acceleration(_linear_max_speed, 0.0, time_ms - half_time, false);
  } // 完整的加速、穩定、減速階段
  else {
    int steady_time = time_ms - _linear_acclearation_time_ms - _linear_deceleration_time_ms;
    _publish_acceleration(_linear_max_speed, 0.0, _linear_acclearation_time_ms, true);
    _publish_speed(_linear_max_speed, 0.0, steady_time);
    _publish_acceleration(_linear_max_speed, 0.0, _linear_deceleration_time_ms, false);
  }

  return;
}


/**
 * @brief 順時鐘轉，時間
 * @param time_ms 行走時間（毫秒）
 */
void Nav::clockwise(int time_ms) {
  if (time_ms <= _angular_acclearation_time_ms + _angular_deceleration_time_ms) {
  // 只有加速和減速階段
    int half_time = time_ms / 2;
    _publish_acceleration(0.0, -_angular_max_speed, half_time, true);  
    _publish_acceleration(0.0, -_angular_max_speed, time_ms - half_time, false);  
  } // 完整的加速、穩定、減速階段
  else {
    int steady_time = time_ms - _angular_acclearation_time_ms - _angular_deceleration_time_ms;
    _publish_acceleration(0.0, -_angular_max_speed, _angular_acclearation_time_ms, true);
    _publish_speed(0.0, -_angular_max_speed, steady_time);
    _publish_acceleration(0.0, -_angular_max_speed, _angular_deceleration_time_ms, false);
  }

  return;
}


/**
 * @brief 逆時鐘轉，時間
 * @param time_ms 行走時間（毫秒）
 */
void Nav::counter_clockwise(int time_ms) {
  if (time_ms <= _angular_acclearation_time_ms + _angular_deceleration_time_ms) {
  // 只有加速和減速階段
    int half_time = time_ms / 2;
    _publish_acceleration(0.0, _angular_max_speed, half_time, true);  
    _publish_acceleration(0.0, _angular_max_speed, time_ms - half_time, false);  
  } // 完整的加速、穩定、減速階段
  else {
    int steady_time = time_ms - _angular_acclearation_time_ms - _angular_deceleration_time_ms;
    _publish_acceleration(0.0, _angular_max_speed, _angular_acclearation_time_ms, true);
    _publish_speed(0.0, _angular_max_speed, steady_time);
    _publish_acceleration(0.0, _angular_max_speed, _angular_deceleration_time_ms, false);
  }

  return;
}

/**
 * @brief 發布加速或減速速度
 * @param max_linear 目標線速度
 * @param max_angular 目標角速度
 * @param duration_ms 時間
 * @param is_acceleration 加速(true) 或減速(false)
 */
void Nav::_publish_acceleration(double max_linear, double max_angular, int duration_ms, bool is_acceleration) {
  geometry_msgs::msg::Twist twist;

  int steps = duration_ms / 100;  // 每 0.1 秒更新一次速度
  double linear_step = max_linear / steps;
  double angular_step = max_angular / steps;

  for (int i = 0; i <= steps; ++i) {
    double factor = is_acceleration ? i : (steps - i);
    twist.linear.x = factor * linear_step;
    twist.angular.z = factor * angular_step;
    cmd_vel_pub_->publish(twist);
    rclcpp::sleep_for(std::chrono::milliseconds(100));
  }

  // 確保最後速度為 0（減速階段結束時）
  if (!is_acceleration) {
    twist.linear.x = 0.0;
    twist.angular.z = 0.0;
    cmd_vel_pub_->publish(twist);
  }

  return;
}

/**
 * @brief 發布恆定速度
 * @param linear 線速度
 * @param angular 角速度
 * @param duration_ms 時間
 */
void Nav::_publish_speed(double linear, double angular, int duration_ms) {
  geometry_msgs::msg::Twist twist;
  twist.linear.x = linear;
  twist.angular.z = angular;

  auto start_time = std::chrono::steady_clock::now();
  auto end_time = start_time + std::chrono::milliseconds(duration_ms);

  while (std::chrono::steady_clock::now() < end_time) {
    cmd_vel_pub_->publish(twist);
    rclcpp::sleep_for(std::chrono::milliseconds(100));
  }

  return;
}
