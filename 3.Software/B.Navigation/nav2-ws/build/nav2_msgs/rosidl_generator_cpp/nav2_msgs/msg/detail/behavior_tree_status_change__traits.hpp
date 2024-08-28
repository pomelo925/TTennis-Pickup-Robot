// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:msg/BehaviorTreeStatusChange.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__BEHAVIOR_TREE_STATUS_CHANGE__TRAITS_HPP_
#define NAV2_MSGS__MSG__DETAIL__BEHAVIOR_TREE_STATUS_CHANGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav2_msgs/msg/detail/behavior_tree_status_change__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace nav2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BehaviorTreeStatusChange & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: node_name
  {
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << ", ";
  }

  // member: previous_status
  {
    out << "previous_status: ";
    rosidl_generator_traits::value_to_yaml(msg.previous_status, out);
    out << ", ";
  }

  // member: current_status
  {
    out << "current_status: ";
    rosidl_generator_traits::value_to_yaml(msg.current_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BehaviorTreeStatusChange & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: node_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << "\n";
  }

  // member: previous_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "previous_status: ";
    rosidl_generator_traits::value_to_yaml(msg.previous_status, out);
    out << "\n";
  }

  // member: current_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_status: ";
    rosidl_generator_traits::value_to_yaml(msg.current_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BehaviorTreeStatusChange & msg, bool use_flow_style = false)
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
  const nav2_msgs::msg::BehaviorTreeStatusChange & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::msg::BehaviorTreeStatusChange & msg)
{
  return nav2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::msg::BehaviorTreeStatusChange>()
{
  return "nav2_msgs::msg::BehaviorTreeStatusChange";
}

template<>
inline const char * name<nav2_msgs::msg::BehaviorTreeStatusChange>()
{
  return "nav2_msgs/msg/BehaviorTreeStatusChange";
}

template<>
struct has_fixed_size<nav2_msgs::msg::BehaviorTreeStatusChange>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav2_msgs::msg::BehaviorTreeStatusChange>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav2_msgs::msg::BehaviorTreeStatusChange>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__MSG__DETAIL__BEHAVIOR_TREE_STATUS_CHANGE__TRAITS_HPP_
