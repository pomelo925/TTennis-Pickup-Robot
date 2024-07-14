// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:msg/ScanDescriptor.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__SCAN_DESCRIPTOR__TRAITS_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__SCAN_DESCRIPTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtabmap_msgs/msg/detail/scan_descriptor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'scan'
#include "sensor_msgs/msg/detail/laser_scan__traits.hpp"
// Member 'scan_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"
// Member 'global_descriptor'
#include "rtabmap_msgs/msg/detail/global_descriptor__traits.hpp"

namespace rtabmap_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ScanDescriptor & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: scan
  {
    out << "scan: ";
    to_flow_style_yaml(msg.scan, out);
    out << ", ";
  }

  // member: scan_cloud
  {
    out << "scan_cloud: ";
    to_flow_style_yaml(msg.scan_cloud, out);
    out << ", ";
  }

  // member: global_descriptor
  {
    out << "global_descriptor: ";
    to_flow_style_yaml(msg.global_descriptor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ScanDescriptor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: scan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan:\n";
    to_block_style_yaml(msg.scan, out, indentation + 2);
  }

  // member: scan_cloud
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_cloud:\n";
    to_block_style_yaml(msg.scan_cloud, out, indentation + 2);
  }

  // member: global_descriptor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_descriptor:\n";
    to_block_style_yaml(msg.global_descriptor, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScanDescriptor & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rtabmap_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rtabmap_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rtabmap_msgs::msg::ScanDescriptor & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::msg::ScanDescriptor & msg)
{
  return rtabmap_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::msg::ScanDescriptor>()
{
  return "rtabmap_msgs::msg::ScanDescriptor";
}

template<>
inline const char * name<rtabmap_msgs::msg::ScanDescriptor>()
{
  return "rtabmap_msgs/msg/ScanDescriptor";
}

template<>
struct has_fixed_size<rtabmap_msgs::msg::ScanDescriptor>
  : std::integral_constant<bool, has_fixed_size<rtabmap_msgs::msg::GlobalDescriptor>::value && has_fixed_size<sensor_msgs::msg::LaserScan>::value && has_fixed_size<sensor_msgs::msg::PointCloud2>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rtabmap_msgs::msg::ScanDescriptor>
  : std::integral_constant<bool, has_bounded_size<rtabmap_msgs::msg::GlobalDescriptor>::value && has_bounded_size<sensor_msgs::msg::LaserScan>::value && has_bounded_size<sensor_msgs::msg::PointCloud2>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rtabmap_msgs::msg::ScanDescriptor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__MSG__DETAIL__SCAN_DESCRIPTOR__TRAITS_HPP_
