// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:srv/ResetPose.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__RESET_POSE__BUILDER_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__RESET_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/srv/detail/reset_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_ResetPose_Request_yaw
{
public:
  explicit Init_ResetPose_Request_yaw(::rtabmap_msgs::srv::ResetPose_Request & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::srv::ResetPose_Request yaw(::rtabmap_msgs::srv::ResetPose_Request::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::ResetPose_Request msg_;
};

class Init_ResetPose_Request_pitch
{
public:
  explicit Init_ResetPose_Request_pitch(::rtabmap_msgs::srv::ResetPose_Request & msg)
  : msg_(msg)
  {}
  Init_ResetPose_Request_yaw pitch(::rtabmap_msgs::srv::ResetPose_Request::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_ResetPose_Request_yaw(msg_);
  }

private:
  ::rtabmap_msgs::srv::ResetPose_Request msg_;
};

class Init_ResetPose_Request_roll
{
public:
  explicit Init_ResetPose_Request_roll(::rtabmap_msgs::srv::ResetPose_Request & msg)
  : msg_(msg)
  {}
  Init_ResetPose_Request_pitch roll(::rtabmap_msgs::srv::ResetPose_Request::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_ResetPose_Request_pitch(msg_);
  }

private:
  ::rtabmap_msgs::srv::ResetPose_Request msg_;
};

class Init_ResetPose_Request_z
{
public:
  explicit Init_ResetPose_Request_z(::rtabmap_msgs::srv::ResetPose_Request & msg)
  : msg_(msg)
  {}
  Init_ResetPose_Request_roll z(::rtabmap_msgs::srv::ResetPose_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_ResetPose_Request_roll(msg_);
  }

private:
  ::rtabmap_msgs::srv::ResetPose_Request msg_;
};

class Init_ResetPose_Request_y
{
public:
  explicit Init_ResetPose_Request_y(::rtabmap_msgs::srv::ResetPose_Request & msg)
  : msg_(msg)
  {}
  Init_ResetPose_Request_z y(::rtabmap_msgs::srv::ResetPose_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ResetPose_Request_z(msg_);
  }

private:
  ::rtabmap_msgs::srv::ResetPose_Request msg_;
};

class Init_ResetPose_Request_x
{
public:
  Init_ResetPose_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetPose_Request_y x(::rtabmap_msgs::srv::ResetPose_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ResetPose_Request_y(msg_);
  }

private:
  ::rtabmap_msgs::srv::ResetPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::ResetPose_Request>()
{
  return rtabmap_msgs::srv::builder::Init_ResetPose_Request_x();
}

}  // namespace rtabmap_msgs


namespace rtabmap_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::ResetPose_Response>()
{
  return ::rtabmap_msgs::srv::ResetPose_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__RESET_POSE__BUILDER_HPP_
