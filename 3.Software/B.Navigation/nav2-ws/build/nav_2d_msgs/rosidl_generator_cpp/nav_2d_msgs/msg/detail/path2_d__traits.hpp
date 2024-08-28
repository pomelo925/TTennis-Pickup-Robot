// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_2d_msgs:msg/Path2D.idl
// generated code does not contain a copyright notice

#ifndef NAV_2D_MSGS__MSG__DETAIL__PATH2_D__TRAITS_HPP_
#define NAV_2D_MSGS__MSG__DETAIL__PATH2_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav_2d_msgs/msg/detail/path2_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace nav_2d_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Path2D & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: poses
  {
    if (msg.poses.size() == 0) {
      out << "poses: []";
    } else {
      out << "poses: [";
      size_t pending_items = msg.poses.size();
      for (auto item : msg.poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Path2D & msg,
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

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Path2D & msg, bool use_flow_style = false)
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
  const nav_2d_msgs::msg::Path2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav_2d_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav_2d_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const nav_2d_msgs::msg::Path2D & msg)
{
  return nav_2d_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nav_2d_msgs::msg::Path2D>()
{
  return "nav_2d_msgs::msg::Path2D";
}

template<>
inline const char * name<nav_2d_msgs::msg::Path2D>()
{
  return "nav_2d_msgs/msg/Path2D";
}

template<>
struct has_fixed_size<nav_2d_msgs::msg::Path2D>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav_2d_msgs::msg::Path2D>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav_2d_msgs::msg::Path2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV_2D_MSGS__MSG__DETAIL__PATH2_D__TRAITS_HPP_
