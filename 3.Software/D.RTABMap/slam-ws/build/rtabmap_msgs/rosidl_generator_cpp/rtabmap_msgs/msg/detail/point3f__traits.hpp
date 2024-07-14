// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:msg/Point3f.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__POINT3F__TRAITS_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__POINT3F__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtabmap_msgs/msg/detail/point3f__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rtabmap_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Point3f & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Point3f & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Point3f & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::msg::Point3f & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::msg::Point3f & msg)
{
  return rtabmap_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::msg::Point3f>()
{
  return "rtabmap_msgs::msg::Point3f";
}

template<>
inline const char * name<rtabmap_msgs::msg::Point3f>()
{
  return "rtabmap_msgs/msg/Point3f";
}

template<>
struct has_fixed_size<rtabmap_msgs::msg::Point3f>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtabmap_msgs::msg::Point3f>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtabmap_msgs::msg::Point3f>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__MSG__DETAIL__POINT3F__TRAITS_HPP_
