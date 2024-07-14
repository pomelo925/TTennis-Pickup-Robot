// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:msg/RGBDImage.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGE__TRAITS_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtabmap_msgs/msg/detail/rgbd_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'rgb_camera_info'
// Member 'depth_camera_info'
#include "sensor_msgs/msg/detail/camera_info__traits.hpp"
// Member 'rgb'
// Member 'depth'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'rgb_compressed'
// Member 'depth_compressed'
#include "sensor_msgs/msg/detail/compressed_image__traits.hpp"
// Member 'key_points'
#include "rtabmap_msgs/msg/detail/key_point__traits.hpp"
// Member 'points'
#include "rtabmap_msgs/msg/detail/point3f__traits.hpp"
// Member 'global_descriptor'
#include "rtabmap_msgs/msg/detail/global_descriptor__traits.hpp"

namespace rtabmap_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RGBDImage & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: rgb_camera_info
  {
    out << "rgb_camera_info: ";
    to_flow_style_yaml(msg.rgb_camera_info, out);
    out << ", ";
  }

  // member: depth_camera_info
  {
    out << "depth_camera_info: ";
    to_flow_style_yaml(msg.depth_camera_info, out);
    out << ", ";
  }

  // member: rgb
  {
    out << "rgb: ";
    to_flow_style_yaml(msg.rgb, out);
    out << ", ";
  }

  // member: depth
  {
    out << "depth: ";
    to_flow_style_yaml(msg.depth, out);
    out << ", ";
  }

  // member: rgb_compressed
  {
    out << "rgb_compressed: ";
    to_flow_style_yaml(msg.rgb_compressed, out);
    out << ", ";
  }

  // member: depth_compressed
  {
    out << "depth_compressed: ";
    to_flow_style_yaml(msg.depth_compressed, out);
    out << ", ";
  }

  // member: key_points
  {
    if (msg.key_points.size() == 0) {
      out << "key_points: []";
    } else {
      out << "key_points: [";
      size_t pending_items = msg.key_points.size();
      for (auto item : msg.key_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: descriptors
  {
    if (msg.descriptors.size() == 0) {
      out << "descriptors: []";
    } else {
      out << "descriptors: [";
      size_t pending_items = msg.descriptors.size();
      for (auto item : msg.descriptors) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: global_descriptor
  {
    out << "global_descriptor: ";
    to_flow_style_yaml(msg.global_descriptor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RGBDImage & msg,
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

  // member: rgb_camera_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rgb_camera_info:\n";
    to_block_style_yaml(msg.rgb_camera_info, out, indentation + 2);
  }

  // member: depth_camera_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth_camera_info:\n";
    to_block_style_yaml(msg.depth_camera_info, out, indentation + 2);
  }

  // member: rgb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rgb:\n";
    to_block_style_yaml(msg.rgb, out, indentation + 2);
  }

  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth:\n";
    to_block_style_yaml(msg.depth, out, indentation + 2);
  }

  // member: rgb_compressed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rgb_compressed:\n";
    to_block_style_yaml(msg.rgb_compressed, out, indentation + 2);
  }

  // member: depth_compressed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth_compressed:\n";
    to_block_style_yaml(msg.depth_compressed, out, indentation + 2);
  }

  // member: key_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.key_points.size() == 0) {
      out << "key_points: []\n";
    } else {
      out << "key_points:\n";
      for (auto item : msg.key_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: descriptors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.descriptors.size() == 0) {
      out << "descriptors: []\n";
    } else {
      out << "descriptors:\n";
      for (auto item : msg.descriptors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: global_descriptor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_descriptor:\n";
    to_block_style_yaml(msg.global_descriptor, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RGBDImage & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::msg::RGBDImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::msg::RGBDImage & msg)
{
  return rtabmap_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::msg::RGBDImage>()
{
  return "rtabmap_msgs::msg::RGBDImage";
}

template<>
inline const char * name<rtabmap_msgs::msg::RGBDImage>()
{
  return "rtabmap_msgs/msg/RGBDImage";
}

template<>
struct has_fixed_size<rtabmap_msgs::msg::RGBDImage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_msgs::msg::RGBDImage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtabmap_msgs::msg::RGBDImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGE__TRAITS_HPP_
