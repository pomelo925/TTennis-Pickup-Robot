// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav_2d_msgs:msg/Twist2DStamped.idl
// generated code does not contain a copyright notice

#ifndef NAV_2D_MSGS__MSG__DETAIL__TWIST2_D_STAMPED__BUILDER_HPP_
#define NAV_2D_MSGS__MSG__DETAIL__TWIST2_D_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav_2d_msgs/msg/detail/twist2_d_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav_2d_msgs
{

namespace msg
{

namespace builder
{

class Init_Twist2DStamped_velocity
{
public:
  explicit Init_Twist2DStamped_velocity(::nav_2d_msgs::msg::Twist2DStamped & msg)
  : msg_(msg)
  {}
  ::nav_2d_msgs::msg::Twist2DStamped velocity(::nav_2d_msgs::msg::Twist2DStamped::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav_2d_msgs::msg::Twist2DStamped msg_;
};

class Init_Twist2DStamped_header
{
public:
  Init_Twist2DStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Twist2DStamped_velocity header(::nav_2d_msgs::msg::Twist2DStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Twist2DStamped_velocity(msg_);
  }

private:
  ::nav_2d_msgs::msg::Twist2DStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_2d_msgs::msg::Twist2DStamped>()
{
  return nav_2d_msgs::msg::builder::Init_Twist2DStamped_header();
}

}  // namespace nav_2d_msgs

#endif  // NAV_2D_MSGS__MSG__DETAIL__TWIST2_D_STAMPED__BUILDER_HPP_
