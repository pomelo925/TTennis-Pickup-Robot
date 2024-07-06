// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dwb_msgs:srv/GenerateTwists.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__SRV__DETAIL__GENERATE_TWISTS__BUILDER_HPP_
#define DWB_MSGS__SRV__DETAIL__GENERATE_TWISTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dwb_msgs/srv/detail/generate_twists__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dwb_msgs
{

namespace srv
{

namespace builder
{

class Init_GenerateTwists_Request_current_vel
{
public:
  Init_GenerateTwists_Request_current_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dwb_msgs::srv::GenerateTwists_Request current_vel(::dwb_msgs::srv::GenerateTwists_Request::_current_vel_type arg)
  {
    msg_.current_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::srv::GenerateTwists_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::srv::GenerateTwists_Request>()
{
  return dwb_msgs::srv::builder::Init_GenerateTwists_Request_current_vel();
}

}  // namespace dwb_msgs


namespace dwb_msgs
{

namespace srv
{

namespace builder
{

class Init_GenerateTwists_Response_twists
{
public:
  Init_GenerateTwists_Response_twists()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dwb_msgs::srv::GenerateTwists_Response twists(::dwb_msgs::srv::GenerateTwists_Response::_twists_type arg)
  {
    msg_.twists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::srv::GenerateTwists_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::srv::GenerateTwists_Response>()
{
  return dwb_msgs::srv::builder::Init_GenerateTwists_Response_twists();
}

}  // namespace dwb_msgs

#endif  // DWB_MSGS__SRV__DETAIL__GENERATE_TWISTS__BUILDER_HPP_
