// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:srv/IsPathValid.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__IS_PATH_VALID__BUILDER_HPP_
#define NAV2_MSGS__SRV__DETAIL__IS_PATH_VALID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/srv/detail/is_path_valid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_IsPathValid_Request_path
{
public:
  Init_IsPathValid_Request_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::srv::IsPathValid_Request path(::nav2_msgs::srv::IsPathValid_Request::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::IsPathValid_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::IsPathValid_Request>()
{
  return nav2_msgs::srv::builder::Init_IsPathValid_Request_path();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_IsPathValid_Response_invalid_pose_indices
{
public:
  explicit Init_IsPathValid_Response_invalid_pose_indices(::nav2_msgs::srv::IsPathValid_Response & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::IsPathValid_Response invalid_pose_indices(::nav2_msgs::srv::IsPathValid_Response::_invalid_pose_indices_type arg)
  {
    msg_.invalid_pose_indices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::IsPathValid_Response msg_;
};

class Init_IsPathValid_Response_is_valid
{
public:
  Init_IsPathValid_Response_is_valid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IsPathValid_Response_invalid_pose_indices is_valid(::nav2_msgs::srv::IsPathValid_Response::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return Init_IsPathValid_Response_invalid_pose_indices(msg_);
  }

private:
  ::nav2_msgs::srv::IsPathValid_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::IsPathValid_Response>()
{
  return nav2_msgs::srv::builder::Init_IsPathValid_Response_is_valid();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__IS_PATH_VALID__BUILDER_HPP_
