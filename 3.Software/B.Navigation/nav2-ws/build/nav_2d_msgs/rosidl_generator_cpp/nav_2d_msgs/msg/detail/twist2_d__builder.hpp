// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav_2d_msgs:msg/Twist2D.idl
// generated code does not contain a copyright notice

#ifndef NAV_2D_MSGS__MSG__DETAIL__TWIST2_D__BUILDER_HPP_
#define NAV_2D_MSGS__MSG__DETAIL__TWIST2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav_2d_msgs/msg/detail/twist2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav_2d_msgs
{

namespace msg
{

namespace builder
{

class Init_Twist2D_theta
{
public:
  explicit Init_Twist2D_theta(::nav_2d_msgs::msg::Twist2D & msg)
  : msg_(msg)
  {}
  ::nav_2d_msgs::msg::Twist2D theta(::nav_2d_msgs::msg::Twist2D::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav_2d_msgs::msg::Twist2D msg_;
};

class Init_Twist2D_y
{
public:
  explicit Init_Twist2D_y(::nav_2d_msgs::msg::Twist2D & msg)
  : msg_(msg)
  {}
  Init_Twist2D_theta y(::nav_2d_msgs::msg::Twist2D::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Twist2D_theta(msg_);
  }

private:
  ::nav_2d_msgs::msg::Twist2D msg_;
};

class Init_Twist2D_x
{
public:
  Init_Twist2D_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Twist2D_y x(::nav_2d_msgs::msg::Twist2D::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Twist2D_y(msg_);
  }

private:
  ::nav_2d_msgs::msg::Twist2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_2d_msgs::msg::Twist2D>()
{
  return nav_2d_msgs::msg::builder::Init_Twist2D_x();
}

}  // namespace nav_2d_msgs

#endif  // NAV_2D_MSGS__MSG__DETAIL__TWIST2_D__BUILDER_HPP_
