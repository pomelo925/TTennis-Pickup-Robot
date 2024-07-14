// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:msg/RGBDImages.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGES__TRAITS_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtabmap_msgs/msg/detail/rgbd_images__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'rgbd_images'
#include "rtabmap_msgs/msg/detail/rgbd_image__traits.hpp"

namespace rtabmap_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RGBDImages & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: rgbd_images
  {
    if (msg.rgbd_images.size() == 0) {
      out << "rgbd_images: []";
    } else {
      out << "rgbd_images: [";
      size_t pending_items = msg.rgbd_images.size();
      for (auto item : msg.rgbd_images) {
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
  const RGBDImages & msg,
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

  // member: rgbd_images
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rgbd_images.size() == 0) {
      out << "rgbd_images: []\n";
    } else {
      out << "rgbd_images:\n";
      for (auto item : msg.rgbd_images) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RGBDImages & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::msg::RGBDImages & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::msg::RGBDImages & msg)
{
  return rtabmap_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::msg::RGBDImages>()
{
  return "rtabmap_msgs::msg::RGBDImages";
}

template<>
inline const char * name<rtabmap_msgs::msg::RGBDImages>()
{
  return "rtabmap_msgs/msg/RGBDImages";
}

template<>
struct has_fixed_size<rtabmap_msgs::msg::RGBDImages>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_msgs::msg::RGBDImages>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtabmap_msgs::msg::RGBDImages>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__MSG__DETAIL__RGBD_IMAGES__TRAITS_HPP_
