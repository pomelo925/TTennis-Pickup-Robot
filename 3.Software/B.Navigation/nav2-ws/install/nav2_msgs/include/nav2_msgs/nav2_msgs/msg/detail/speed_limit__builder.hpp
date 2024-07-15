// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:msg/SpeedLimit.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__SPEED_LIMIT__BUILDER_HPP_
#define NAV2_MSGS__MSG__DETAIL__SPEED_LIMIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/msg/detail/speed_limit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace msg
{

namespace builder
{

class Init_SpeedLimit_speed_limit
{
public:
  explicit Init_SpeedLimit_speed_limit(::nav2_msgs::msg::SpeedLimit & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::msg::SpeedLimit speed_limit(::nav2_msgs::msg::SpeedLimit::_speed_limit_type arg)
  {
    msg_.speed_limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::msg::SpeedLimit msg_;
};

class Init_SpeedLimit_percentage
{
public:
  explicit Init_SpeedLimit_percentage(::nav2_msgs::msg::SpeedLimit & msg)
  : msg_(msg)
  {}
  Init_SpeedLimit_speed_limit percentage(::nav2_msgs::msg::SpeedLimit::_percentage_type arg)
  {
    msg_.percentage = std::move(arg);
    return Init_SpeedLimit_speed_limit(msg_);
  }

private:
  ::nav2_msgs::msg::SpeedLimit msg_;
};

class Init_SpeedLimit_header
{
public:
  Init_SpeedLimit_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeedLimit_percentage header(::nav2_msgs::msg::SpeedLimit::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SpeedLimit_percentage(msg_);
  }

private:
  ::nav2_msgs::msg::SpeedLimit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::msg::SpeedLimit>()
{
  return nav2_msgs::msg::builder::Init_SpeedLimit_header();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__SPEED_LIMIT__BUILDER_HPP_
