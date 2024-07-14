// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:msg/CameraModel.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODEL__TRAITS_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtabmap_msgs/msg/detail/camera_model__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'camera_info'
#include "sensor_msgs/msg/detail/camera_info__traits.hpp"
// Member 'local_transform'
#include "geometry_msgs/msg/detail/transform__traits.hpp"

namespace rtabmap_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CameraModel & msg,
  std::ostream & out)
{
  out << "{";
  // member: camera_info
  {
    out << "camera_info: ";
    to_flow_style_yaml(msg.camera_info, out);
    out << ", ";
  }

  // member: local_transform
  {
    out << "local_transform: ";
    to_flow_style_yaml(msg.local_transform, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraModel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: camera_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_info:\n";
    to_block_style_yaml(msg.camera_info, out, indentation + 2);
  }

  // member: local_transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_transform:\n";
    to_block_style_yaml(msg.local_transform, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraModel & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::msg::CameraModel & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::msg::CameraModel & msg)
{
  return rtabmap_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::msg::CameraModel>()
{
  return "rtabmap_msgs::msg::CameraModel";
}

template<>
inline const char * name<rtabmap_msgs::msg::CameraModel>()
{
  return "rtabmap_msgs/msg/CameraModel";
}

template<>
struct has_fixed_size<rtabmap_msgs::msg::CameraModel>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Transform>::value && has_fixed_size<sensor_msgs::msg::CameraInfo>::value> {};

template<>
struct has_bounded_size<rtabmap_msgs::msg::CameraModel>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Transform>::value && has_bounded_size<sensor_msgs::msg::CameraInfo>::value> {};

template<>
struct is_message<rtabmap_msgs::msg::CameraModel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__MSG__DETAIL__CAMERA_MODEL__TRAITS_HPP_
