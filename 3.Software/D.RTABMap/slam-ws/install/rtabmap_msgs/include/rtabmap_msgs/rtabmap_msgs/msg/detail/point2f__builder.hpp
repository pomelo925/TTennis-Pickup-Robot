// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/Point2f.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__POINT2F__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__POINT2F__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/msg/detail/point2f__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_Point2f_y
{
public:
  explicit Init_Point2f_y(::rtabmap_msgs::msg::Point2f & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::Point2f y(::rtabmap_msgs::msg::Point2f::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::Point2f msg_;
};

class Init_Point2f_x
{
public:
  Init_Point2f_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Point2f_y x(::rtabmap_msgs::msg::Point2f::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Point2f_y(msg_);
  }

private:
  ::rtabmap_msgs::msg::Point2f msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::Point2f>()
{
  return rtabmap_msgs::msg::builder::Init_Point2f_x();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__POINT2F__BUILDER_HPP_
