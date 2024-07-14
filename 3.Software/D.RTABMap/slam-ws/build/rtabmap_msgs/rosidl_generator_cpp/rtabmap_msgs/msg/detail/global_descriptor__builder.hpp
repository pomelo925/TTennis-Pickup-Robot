// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/GlobalDescriptor.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__GLOBAL_DESCRIPTOR__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__GLOBAL_DESCRIPTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/msg/detail/global_descriptor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_GlobalDescriptor_data
{
public:
  explicit Init_GlobalDescriptor_data(::rtabmap_msgs::msg::GlobalDescriptor & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::GlobalDescriptor data(::rtabmap_msgs::msg::GlobalDescriptor::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::GlobalDescriptor msg_;
};

class Init_GlobalDescriptor_info
{
public:
  explicit Init_GlobalDescriptor_info(::rtabmap_msgs::msg::GlobalDescriptor & msg)
  : msg_(msg)
  {}
  Init_GlobalDescriptor_data info(::rtabmap_msgs::msg::GlobalDescriptor::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GlobalDescriptor_data(msg_);
  }

private:
  ::rtabmap_msgs::msg::GlobalDescriptor msg_;
};

class Init_GlobalDescriptor_type
{
public:
  explicit Init_GlobalDescriptor_type(::rtabmap_msgs::msg::GlobalDescriptor & msg)
  : msg_(msg)
  {}
  Init_GlobalDescriptor_info type(::rtabmap_msgs::msg::GlobalDescriptor::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_GlobalDescriptor_info(msg_);
  }

private:
  ::rtabmap_msgs::msg::GlobalDescriptor msg_;
};

class Init_GlobalDescriptor_header
{
public:
  Init_GlobalDescriptor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GlobalDescriptor_type header(::rtabmap_msgs::msg::GlobalDescriptor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GlobalDescriptor_type(msg_);
  }

private:
  ::rtabmap_msgs::msg::GlobalDescriptor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::GlobalDescriptor>()
{
  return rtabmap_msgs::msg::builder::Init_GlobalDescriptor_header();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__GLOBAL_DESCRIPTOR__BUILDER_HPP_
