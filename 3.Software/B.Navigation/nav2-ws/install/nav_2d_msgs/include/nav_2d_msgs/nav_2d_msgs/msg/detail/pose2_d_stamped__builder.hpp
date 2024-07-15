// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav_2d_msgs:msg/Pose2DStamped.idl
// generated code does not contain a copyright notice

#ifndef NAV_2D_MSGS__MSG__DETAIL__POSE2_D_STAMPED__BUILDER_HPP_
#define NAV_2D_MSGS__MSG__DETAIL__POSE2_D_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav_2d_msgs/msg/detail/pose2_d_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav_2d_msgs
{

namespace msg
{

namespace builder
{

class Init_Pose2DStamped_pose
{
public:
  explicit Init_Pose2DStamped_pose(::nav_2d_msgs::msg::Pose2DStamped & msg)
  : msg_(msg)
  {}
  ::nav_2d_msgs::msg::Pose2DStamped pose(::nav_2d_msgs::msg::Pose2DStamped::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav_2d_msgs::msg::Pose2DStamped msg_;
};

class Init_Pose2DStamped_header
{
public:
  Init_Pose2DStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose2DStamped_pose header(::nav_2d_msgs::msg::Pose2DStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Pose2DStamped_pose(msg_);
  }

private:
  ::nav_2d_msgs::msg::Pose2DStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_2d_msgs::msg::Pose2DStamped>()
{
  return nav_2d_msgs::msg::builder::Init_Pose2DStamped_header();
}

}  // namespace nav_2d_msgs

#endif  // NAV_2D_MSGS__MSG__DETAIL__POSE2_D_STAMPED__BUILDER_HPP_
