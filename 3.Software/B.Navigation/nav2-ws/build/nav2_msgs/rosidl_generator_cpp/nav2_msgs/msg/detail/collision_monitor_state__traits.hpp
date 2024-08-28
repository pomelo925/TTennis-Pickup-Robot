// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:msg/CollisionMonitorState.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__COLLISION_MONITOR_STATE__TRAITS_HPP_
#define NAV2_MSGS__MSG__DETAIL__COLLISION_MONITOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav2_msgs/msg/detail/collision_monitor_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace nav2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CollisionMonitorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: action_type
  {
    out << "action_type: ";
    rosidl_generator_traits::value_to_yaml(msg.action_type, out);
    out << ", ";
  }

  // member: polygon_name
  {
    out << "polygon_name: ";
    rosidl_generator_traits::value_to_yaml(msg.polygon_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollisionMonitorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_type: ";
    rosidl_generator_traits::value_to_yaml(msg.action_type, out);
    out << "\n";
  }

  // member: polygon_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "polygon_name: ";
    rosidl_generator_traits::value_to_yaml(msg.polygon_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollisionMonitorState & msg, bool use_flow_style = false)
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

}  // namespace nav2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav2_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav2_msgs::msg::CollisionMonitorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::msg::CollisionMonitorState & msg)
{
  return nav2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::msg::CollisionMonitorState>()
{
  return "nav2_msgs::msg::CollisionMonitorState";
}

template<>
inline const char * name<nav2_msgs::msg::CollisionMonitorState>()
{
  return "nav2_msgs/msg/CollisionMonitorState";
}

template<>
struct has_fixed_size<nav2_msgs::msg::CollisionMonitorState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav2_msgs::msg::CollisionMonitorState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav2_msgs::msg::CollisionMonitorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__MSG__DETAIL__COLLISION_MONITOR_STATE__TRAITS_HPP_
