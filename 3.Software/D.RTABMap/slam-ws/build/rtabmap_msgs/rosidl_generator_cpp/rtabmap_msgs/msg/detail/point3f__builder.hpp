// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/Point3f.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__POINT3F__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__POINT3F__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/msg/detail/point3f__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_Point3f_z
{
public:
  explicit Init_Point3f_z(::rtabmap_msgs::msg::Point3f & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::Point3f z(::rtabmap_msgs::msg::Point3f::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::Point3f msg_;
};

class Init_Point3f_y
{
public:
  explicit Init_Point3f_y(::rtabmap_msgs::msg::Point3f & msg)
  : msg_(msg)
  {}
  Init_Point3f_z y(::rtabmap_msgs::msg::Point3f::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Point3f_z(msg_);
  }

private:
  ::rtabmap_msgs::msg::Point3f msg_;
};

class Init_Point3f_x
{
public:
  Init_Point3f_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Point3f_y x(::rtabmap_msgs::msg::Point3f::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Point3f_y(msg_);
  }

private:
  ::rtabmap_msgs::msg::Point3f msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::Point3f>()
{
  return rtabmap_msgs::msg::builder::Init_Point3f_x();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__POINT3F__BUILDER_HPP_
