#pragma once

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>
#include <chrono>
#include <thread>

class Basket{
public:
  static void init(const rclcpp::Node::SharedPtr &node);
  static void turn_on(bool is_on);

private:
  static rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr cmd_basket_pub_;
  static rclcpp::Node::SharedPtr node_;

  static void _publish_on(bool is_on, int duration_ms);

  constexpr static int _door_on_time_ms = 4000;
  constexpr static int _door_off_time_ms = 1200;
};