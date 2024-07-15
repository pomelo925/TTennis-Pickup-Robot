// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:msg/Costmap.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__COSTMAP__BUILDER_HPP_
#define NAV2_MSGS__MSG__DETAIL__COSTMAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/msg/detail/costmap__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace msg
{

namespace builder
{

class Init_Costmap_data
{
public:
  explicit Init_Costmap_data(::nav2_msgs::msg::Costmap & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::msg::Costmap data(::nav2_msgs::msg::Costmap::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::msg::Costmap msg_;
};

class Init_Costmap_metadata
{
public:
  explicit Init_Costmap_metadata(::nav2_msgs::msg::Costmap & msg)
  : msg_(msg)
  {}
  Init_Costmap_data metadata(::nav2_msgs::msg::Costmap::_metadata_type arg)
  {
    msg_.metadata = std::move(arg);
    return Init_Costmap_data(msg_);
  }

private:
  ::nav2_msgs::msg::Costmap msg_;
};

class Init_Costmap_header
{
public:
  Init_Costmap_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Costmap_metadata header(::nav2_msgs::msg::Costmap::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Costmap_metadata(msg_);
  }

private:
  ::nav2_msgs::msg::Costmap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::msg::Costmap>()
{
  return nav2_msgs::msg::builder::Init_Costmap_header();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__COSTMAP__BUILDER_HPP_
