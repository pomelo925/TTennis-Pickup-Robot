// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_2d_msgs:msg/Twist2D32.idl
// generated code does not contain a copyright notice

#ifndef NAV_2D_MSGS__MSG__DETAIL__TWIST2_D32__TRAITS_HPP_
#define NAV_2D_MSGS__MSG__DETAIL__TWIST2_D32__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav_2d_msgs/msg/detail/twist2_d32__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace nav_2d_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Twist2D32 & msg,
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

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Twist2D32 & msg,
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

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Twist2D32 & msg, bool use_flow_style = false)
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

}  // namespace nav_2d_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav_2d_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav_2d_msgs::msg::Twist2D32 & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav_2d_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav_2d_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const nav_2d_msgs::msg::Twist2D32 & msg)
{
  return nav_2d_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nav_2d_msgs::msg::Twist2D32>()
{
  return "nav_2d_msgs::msg::Twist2D32";
}

template<>
inline const char * name<nav_2d_msgs::msg::Twist2D32>()
{
  return "nav_2d_msgs/msg/Twist2D32";
}

template<>
struct has_fixed_size<nav_2d_msgs::msg::Twist2D32>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nav_2d_msgs::msg::Twist2D32>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nav_2d_msgs::msg::Twist2D32>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV_2D_MSGS__MSG__DETAIL__TWIST2_D32__TRAITS_HPP_
