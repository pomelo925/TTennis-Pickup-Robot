#pragma once

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <chrono>
#include <thread>

class Nav{
public:
  static void init(const rclcpp::Node::SharedPtr &node);

  static void move_straight(int time_ms);
  static void clockwise(int time_ms);
  static void counter_clockwise(int time_ms);

private:
  static rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_pub_;
  static rclcpp::Node::SharedPtr node_;

  static void _publish_speed(double linear, double angular, int duration_ms);
  static void _publish_acceleration(double max_linear, double max_angular, int duration_ms, bool is_acceleration);

  constexpr static int _linear_acclearation_time_ms = 500;
  constexpr static int _linear_deceleration_time_ms = 500;
  constexpr static double _linear_max_speed = 1.5;
  constexpr static double _linear_speed = 1.5;

  constexpr static int _angular_acclearation_time_ms = 500;
  constexpr static int _angular_deceleration_time_ms = 500;
  constexpr static double _angular_max_speed = 1.5;
  constexpr static double _angular_speed = 1.5;
};