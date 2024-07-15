// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dwb_msgs:msg/Trajectory2D.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__MSG__DETAIL__TRAJECTORY2_D__BUILDER_HPP_
#define DWB_MSGS__MSG__DETAIL__TRAJECTORY2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dwb_msgs/msg/detail/trajectory2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dwb_msgs
{

namespace msg
{

namespace builder
{

class Init_Trajectory2D_poses
{
public:
  explicit Init_Trajectory2D_poses(::dwb_msgs::msg::Trajectory2D & msg)
  : msg_(msg)
  {}
  ::dwb_msgs::msg::Trajectory2D poses(::dwb_msgs::msg::Trajectory2D::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dwb_msgs::msg::Trajectory2D msg_;
};

class Init_Trajectory2D_time_offsets
{
public:
  explicit Init_Trajectory2D_time_offsets(::dwb_msgs::msg::Trajectory2D & msg)
  : msg_(msg)
  {}
  Init_Trajectory2D_poses time_offsets(::dwb_msgs::msg::Trajectory2D::_time_offsets_type arg)
  {
    msg_.time_offsets = std::move(arg);
    return Init_Trajectory2D_poses(msg_);
  }

private:
  ::dwb_msgs::msg::Trajectory2D msg_;
};

class Init_Trajectory2D_velocity
{
public:
  Init_Trajectory2D_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectory2D_time_offsets velocity(::dwb_msgs::msg::Trajectory2D::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_Trajectory2D_time_offsets(msg_);
  }

private:
  ::dwb_msgs::msg::Trajectory2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dwb_msgs::msg::Trajectory2D>()
{
  return dwb_msgs::msg::builder::Init_Trajectory2D_velocity();
}

}  // namespace dwb_msgs

#endif  // DWB_MSGS__MSG__DETAIL__TRAJECTORY2_D__BUILDER_HPP_
