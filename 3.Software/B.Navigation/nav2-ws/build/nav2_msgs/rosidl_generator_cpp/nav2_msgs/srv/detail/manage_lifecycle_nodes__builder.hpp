// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:srv/ManageLifecycleNodes.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__BUILDER_HPP_
#define NAV2_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/srv/detail/manage_lifecycle_nodes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_ManageLifecycleNodes_Request_command
{
public:
  Init_ManageLifecycleNodes_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::srv::ManageLifecycleNodes_Request command(::nav2_msgs::srv::ManageLifecycleNodes_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::ManageLifecycleNodes_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::ManageLifecycleNodes_Request>()
{
  return nav2_msgs::srv::builder::Init_ManageLifecycleNodes_Request_command();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_ManageLifecycleNodes_Response_success
{
public:
  Init_ManageLifecycleNodes_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::srv::ManageLifecycleNodes_Response success(::nav2_msgs::srv::ManageLifecycleNodes_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::ManageLifecycleNodes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::ManageLifecycleNodes_Response>()
{
  return nav2_msgs::srv::builder::Init_ManageLifecycleNodes_Response_success();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__BUILDER_HPP_
