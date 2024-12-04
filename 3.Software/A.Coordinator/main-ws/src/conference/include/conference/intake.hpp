#pragma once

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/int32.hpp>
#include <chrono>
#include <thread>

class Intake{
public:
  static void init(const rclcpp::Node::SharedPtr &node);
  static void turn_on(int target_pwm, int duration_ms = 0);

private:
  static rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr cmd_intake_pub_;
  static rclcpp::Node::SharedPtr node_;

  static void _publish_on(int target_pwm, int duration_ms);

  constexpr static int _intake_on_time_ms = 1000;
};