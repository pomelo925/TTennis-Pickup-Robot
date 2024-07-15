// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dwb_msgs:msg/Trajectory2D.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__MSG__DETAIL__TRAJECTORY2_D__TRAITS_HPP_
#define DWB_MSGS__MSG__DETAIL__TRAJECTORY2_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dwb_msgs/msg/detail/trajectory2_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'velocity'
#include "nav_2d_msgs/msg/detail/twist2_d__traits.hpp"
// Member 'time_offsets'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace dwb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Trajectory2D & msg,
  std::ostream & out)
{
  out << "{";
  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: time_offsets
  {
    if (msg.time_offsets.size() == 0) {
      out << "time_offsets: []";
    } else {
      out << "time_offsets: [";
      size_t pending_items = msg.time_offsets.size();
      for (auto item : msg.time_offsets) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const Trajectory2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: time_offsets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.time_offsets.size() == 0) {
      out << "time_offsets: []\n";
    } else {
      out << "time_offsets:\n";
      for (auto item : msg.time_offsets) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

inline std::string to_yaml(const Trajectory2D & msg, bool use_flow_style = false)
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

}  // namespace dwb_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dwb_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dwb_msgs::msg::Trajectory2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  dwb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dwb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dwb_msgs::msg::Trajectory2D & msg)
{
  return dwb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dwb_msgs::msg::Trajectory2D>()
{
  return "dwb_msgs::msg::Trajectory2D";
}

template<>
inline const char * name<dwb_msgs::msg::Trajectory2D>()
{
  return "dwb_msgs/msg/Trajectory2D";
}

template<>
struct has_fixed_size<dwb_msgs::msg::Trajectory2D>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dwb_msgs::msg::Trajectory2D>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dwb_msgs::msg::Trajectory2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DWB_MSGS__MSG__DETAIL__TRAJECTORY2_D__TRAITS_HPP_
