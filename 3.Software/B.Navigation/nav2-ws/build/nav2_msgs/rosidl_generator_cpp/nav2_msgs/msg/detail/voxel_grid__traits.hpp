// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:msg/VoxelGrid.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__VOXEL_GRID__TRAITS_HPP_
#define NAV2_MSGS__MSG__DETAIL__VOXEL_GRID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav2_msgs/msg/detail/voxel_grid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'origin'
#include "geometry_msgs/msg/detail/point32__traits.hpp"
// Member 'resolutions'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace nav2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VoxelGrid & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: origin
  {
    out << "origin: ";
    to_flow_style_yaml(msg.origin, out);
    out << ", ";
  }

  // member: resolutions
  {
    out << "resolutions: ";
    to_flow_style_yaml(msg.resolutions, out);
    out << ", ";
  }

  // member: size_x
  {
    out << "size_x: ";
    rosidl_generator_traits::value_to_yaml(msg.size_x, out);
    out << ", ";
  }

  // member: size_y
  {
    out << "size_y: ";
    rosidl_generator_traits::value_to_yaml(msg.size_y, out);
    out << ", ";
  }

  // member: size_z
  {
    out << "size_z: ";
    rosidl_generator_traits::value_to_yaml(msg.size_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VoxelGrid & msg,
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

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: origin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin:\n";
    to_block_style_yaml(msg.origin, out, indentation + 2);
  }

  // member: resolutions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolutions:\n";
    to_block_style_yaml(msg.resolutions, out, indentation + 2);
  }

  // member: size_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size_x: ";
    rosidl_generator_traits::value_to_yaml(msg.size_x, out);
    out << "\n";
  }

  // member: size_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size_y: ";
    rosidl_generator_traits::value_to_yaml(msg.size_y, out);
    out << "\n";
  }

  // member: size_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size_z: ";
    rosidl_generator_traits::value_to_yaml(msg.size_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VoxelGrid & msg, bool use_flow_style = false)
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
  const nav2_msgs::msg::VoxelGrid & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::msg::VoxelGrid & msg)
{
  return nav2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::msg::VoxelGrid>()
{
  return "nav2_msgs::msg::VoxelGrid";
}

template<>
inline const char * name<nav2_msgs::msg::VoxelGrid>()
{
  return "nav2_msgs/msg/VoxelGrid";
}

template<>
struct has_fixed_size<nav2_msgs::msg::VoxelGrid>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav2_msgs::msg::VoxelGrid>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav2_msgs::msg::VoxelGrid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__MSG__DETAIL__VOXEL_GRID__TRAITS_HPP_
