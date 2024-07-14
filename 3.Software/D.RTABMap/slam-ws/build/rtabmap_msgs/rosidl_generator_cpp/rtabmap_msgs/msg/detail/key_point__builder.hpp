// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/KeyPoint.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__KEY_POINT__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__KEY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/msg/detail/key_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyPoint_class_id
{
public:
  explicit Init_KeyPoint_class_id(::rtabmap_msgs::msg::KeyPoint & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::KeyPoint class_id(::rtabmap_msgs::msg::KeyPoint::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::KeyPoint msg_;
};

class Init_KeyPoint_octave
{
public:
  explicit Init_KeyPoint_octave(::rtabmap_msgs::msg::KeyPoint & msg)
  : msg_(msg)
  {}
  Init_KeyPoint_class_id octave(::rtabmap_msgs::msg::KeyPoint::_octave_type arg)
  {
    msg_.octave = std::move(arg);
    return Init_KeyPoint_class_id(msg_);
  }

private:
  ::rtabmap_msgs::msg::KeyPoint msg_;
};

class Init_KeyPoint_response
{
public:
  explicit Init_KeyPoint_response(::rtabmap_msgs::msg::KeyPoint & msg)
  : msg_(msg)
  {}
  Init_KeyPoint_octave response(::rtabmap_msgs::msg::KeyPoint::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_KeyPoint_octave(msg_);
  }

private:
  ::rtabmap_msgs::msg::KeyPoint msg_;
};

class Init_KeyPoint_angle
{
public:
  explicit Init_KeyPoint_angle(::rtabmap_msgs::msg::KeyPoint & msg)
  : msg_(msg)
  {}
  Init_KeyPoint_response angle(::rtabmap_msgs::msg::KeyPoint::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_KeyPoint_response(msg_);
  }

private:
  ::rtabmap_msgs::msg::KeyPoint msg_;
};

class Init_KeyPoint_size
{
public:
  explicit Init_KeyPoint_size(::rtabmap_msgs::msg::KeyPoint & msg)
  : msg_(msg)
  {}
  Init_KeyPoint_angle size(::rtabmap_msgs::msg::KeyPoint::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_KeyPoint_angle(msg_);
  }

private:
  ::rtabmap_msgs::msg::KeyPoint msg_;
};

class Init_KeyPoint_pt
{
public:
  Init_KeyPoint_pt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyPoint_size pt(::rtabmap_msgs::msg::KeyPoint::_pt_type arg)
  {
    msg_.pt = std::move(arg);
    return Init_KeyPoint_size(msg_);
  }

private:
  ::rtabmap_msgs::msg::KeyPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::KeyPoint>()
{
  return rtabmap_msgs::msg::builder::Init_KeyPoint_pt();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__KEY_POINT__BUILDER_HPP_
