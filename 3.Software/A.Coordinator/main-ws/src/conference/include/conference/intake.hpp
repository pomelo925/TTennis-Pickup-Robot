#pragma once

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>
#include <chrono>
#include <thread>

class Intake{
public:
  static void init(const rclcpp::Node::SharedPtr &node);
  static void turn_on(bool is_on);

private:
  static rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr cmd_intake_pub_;
  static rclcpp::Node::SharedPtr node_;

  static void _publish_on(bool is_on, int duration_ms);

  constexpr static int _intake_on_time_ms = 800;
};