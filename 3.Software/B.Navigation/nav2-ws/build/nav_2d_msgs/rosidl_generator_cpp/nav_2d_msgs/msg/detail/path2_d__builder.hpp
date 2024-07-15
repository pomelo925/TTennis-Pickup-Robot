// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav_2d_msgs:msg/Path2D.idl
// generated code does not contain a copyright notice

#ifndef NAV_2D_MSGS__MSG__DETAIL__PATH2_D__BUILDER_HPP_
#define NAV_2D_MSGS__MSG__DETAIL__PATH2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav_2d_msgs/msg/detail/path2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav_2d_msgs
{

namespace msg
{

namespace builder
{

class Init_Path2D_poses
{
public:
  explicit Init_Path2D_poses(::nav_2d_msgs::msg::Path2D & msg)
  : msg_(msg)
  {}
  ::nav_2d_msgs::msg::Path2D poses(::nav_2d_msgs::msg::Path2D::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav_2d_msgs::msg::Path2D msg_;
};

class Init_Path2D_header
{
public:
  Init_Path2D_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path2D_poses header(::nav_2d_msgs::msg::Path2D::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Path2D_poses(msg_);
  }

private:
  ::nav_2d_msgs::msg::Path2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_2d_msgs::msg::Path2D>()
{
  return nav_2d_msgs::msg::builder::Init_Path2D_header();
}

}  // namespace nav_2d_msgs

#endif  // NAV_2D_MSGS__MSG__DETAIL__PATH2_D__BUILDER_HPP_
