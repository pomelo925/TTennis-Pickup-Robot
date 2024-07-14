// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:msg/KeyPoint.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__KEY_POINT__TRAITS_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__KEY_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtabmap_msgs/msg/detail/key_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pt'
#include "rtabmap_msgs/msg/detail/point2f__traits.hpp"

namespace rtabmap_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KeyPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: pt
  {
    out << "pt: ";
    to_flow_style_yaml(msg.pt, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: response
  {
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << ", ";
  }

  // member: octave
  {
    out << "octave: ";
    rosidl_generator_traits::value_to_yaml(msg.octave, out);
    out << ", ";
  }

  // member: class_id
  {
    out << "class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.class_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KeyPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pt:\n";
    to_block_style_yaml(msg.pt, out, indentation + 2);
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << "\n";
  }

  // member: octave
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "octave: ";
    rosidl_generator_traits::value_to_yaml(msg.octave, out);
    out << "\n";
  }

  // member: class_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_id: ";
    rosidl_generator_traits::value_to_yaml(msg.class_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KeyPoint & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::msg::KeyPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::msg::KeyPoint & msg)
{
  return rtabmap_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::msg::KeyPoint>()
{
  return "rtabmap_msgs::msg::KeyPoint";
}

template<>
inline const char * name<rtabmap_msgs::msg::KeyPoint>()
{
  return "rtabmap_msgs/msg/KeyPoint";
}

template<>
struct has_fixed_size<rtabmap_msgs::msg::KeyPoint>
  : std::integral_constant<bool, has_fixed_size<rtabmap_msgs::msg::Point2f>::value> {};

template<>
struct has_bounded_size<rtabmap_msgs::msg::KeyPoint>
  : std::integral_constant<bool, has_bounded_size<rtabmap_msgs::msg::Point2f>::value> {};

template<>
struct is_message<rtabmap_msgs::msg::KeyPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__MSG__DETAIL__KEY_POINT__TRAITS_HPP_
