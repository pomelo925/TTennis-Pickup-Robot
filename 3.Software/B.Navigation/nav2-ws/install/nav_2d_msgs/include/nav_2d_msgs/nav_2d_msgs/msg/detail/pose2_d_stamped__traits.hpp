// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_2d_msgs:msg/Pose2DStamped.idl
// generated code does not contain a copyright notice

#ifndef NAV_2D_MSGS__MSG__DETAIL__POSE2_D_STAMPED__TRAITS_HPP_
#define NAV_2D_MSGS__MSG__DETAIL__POSE2_D_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav_2d_msgs/msg/detail/pose2_d_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace nav_2d_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pose2DStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pose2DStamped & msg,
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

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pose2DStamped & msg, bool use_flow_style = false)
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
  const nav_2d_msgs::msg::Pose2DStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav_2d_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav_2d_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const nav_2d_msgs::msg::Pose2DStamped & msg)
{
  return nav_2d_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nav_2d_msgs::msg::Pose2DStamped>()
{
  return "nav_2d_msgs::msg::Pose2DStamped";
}

template<>
inline const char * name<nav_2d_msgs::msg::Pose2DStamped>()
{
  return "nav_2d_msgs/msg/Pose2DStamped";
}

template<>
struct has_fixed_size<nav_2d_msgs::msg::Pose2DStamped>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose2D>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<nav_2d_msgs::msg::Pose2DStamped>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose2D>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<nav_2d_msgs::msg::Pose2DStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV_2D_MSGS__MSG__DETAIL__POSE2_D_STAMPED__TRAITS_HPP_
