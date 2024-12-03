#pragma once

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/int32.hpp>
#include <std_msgs/msg/bool.hpp>
#include <chrono>
#include <thread>

class Elevator{
public:
  static void init(const rclcpp::Node::SharedPtr &node);

  static void set_mode(int mode, int duration_ms = 0);
  static void door_on(bool is_on);

private:
  static rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr cmd_elevator_pub_;
  static rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr cmd_elevatorDoor_pub_;

  static rclcpp::Node::SharedPtr node_;

  static void _publish_int(int mode, int duration_ms);
  static void _publish_on(bool is_on, int duration_ms);

  constexpr static int _elevator_rise_time_ms = 8500;
  constexpr static int _elevator_decline_time_ms = 10000;
  constexpr static int _elevator_stop_time_ms = 3000;

  constexpr static int _door_on_time_ms = 2000;
  constexpr static int _door_off_time_ms = 2000;
};