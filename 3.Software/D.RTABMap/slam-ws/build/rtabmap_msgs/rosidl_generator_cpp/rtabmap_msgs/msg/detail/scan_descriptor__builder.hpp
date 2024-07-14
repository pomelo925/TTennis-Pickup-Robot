// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/ScanDescriptor.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__SCAN_DESCRIPTOR__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__SCAN_DESCRIPTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/msg/detail/scan_descriptor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_ScanDescriptor_global_descriptor
{
public:
  explicit Init_ScanDescriptor_global_descriptor(::rtabmap_msgs::msg::ScanDescriptor & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::ScanDescriptor global_descriptor(::rtabmap_msgs::msg::ScanDescriptor::_global_descriptor_type arg)
  {
    msg_.global_descriptor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::ScanDescriptor msg_;
};

class Init_ScanDescriptor_scan_cloud
{
public:
  explicit Init_ScanDescriptor_scan_cloud(::rtabmap_msgs::msg::ScanDescriptor & msg)
  : msg_(msg)
  {}
  Init_ScanDescriptor_global_descriptor scan_cloud(::rtabmap_msgs::msg::ScanDescriptor::_scan_cloud_type arg)
  {
    msg_.scan_cloud = std::move(arg);
    return Init_ScanDescriptor_global_descriptor(msg_);
  }

private:
  ::rtabmap_msgs::msg::ScanDescriptor msg_;
};

class Init_ScanDescriptor_scan
{
public:
  explicit Init_ScanDescriptor_scan(::rtabmap_msgs::msg::ScanDescriptor & msg)
  : msg_(msg)
  {}
  Init_ScanDescriptor_scan_cloud scan(::rtabmap_msgs::msg::ScanDescriptor::_scan_type arg)
  {
    msg_.scan = std::move(arg);
    return Init_ScanDescriptor_scan_cloud(msg_);
  }

private:
  ::rtabmap_msgs::msg::ScanDescriptor msg_;
};

class Init_ScanDescriptor_header
{
public:
  Init_ScanDescriptor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScanDescriptor_scan header(::rtabmap_msgs::msg::ScanDescriptor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ScanDescriptor_scan(msg_);
  }

private:
  ::rtabmap_msgs::msg::ScanDescriptor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::ScanDescriptor>()
{
  return rtabmap_msgs::msg::builder::Init_ScanDescriptor_header();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__SCAN_DESCRIPTOR__BUILDER_HPP_
