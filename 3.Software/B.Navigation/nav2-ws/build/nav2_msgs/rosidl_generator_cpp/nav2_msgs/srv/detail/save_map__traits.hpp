// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:srv/SaveMap.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__SAVE_MAP__TRAITS_HPP_
#define NAV2_MSGS__SRV__DETAIL__SAVE_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav2_msgs/srv/detail/save_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace nav2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveMap_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: map_topic
  {
    out << "map_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.map_topic, out);
    out << ", ";
  }

  // member: map_url
  {
    out << "map_url: ";
    rosidl_generator_traits::value_to_yaml(msg.map_url, out);
    out << ", ";
  }

  // member: image_format
  {
    out << "image_format: ";
    rosidl_generator_traits::value_to_yaml(msg.image_format, out);
    out << ", ";
  }

  // member: map_mode
  {
    out << "map_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.map_mode, out);
    out << ", ";
  }

  // member: free_thresh
  {
    out << "free_thresh: ";
    rosidl_generator_traits::value_to_yaml(msg.free_thresh, out);
    out << ", ";
  }

  // member: occupied_thresh
  {
    out << "occupied_thresh: ";
    rosidl_generator_traits::value_to_yaml(msg.occupied_thresh, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.map_topic, out);
    out << "\n";
  }

  // member: map_url
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_url: ";
    rosidl_generator_traits::value_to_yaml(msg.map_url, out);
    out << "\n";
  }

  // member: image_format
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_format: ";
    rosidl_generator_traits::value_to_yaml(msg.image_format, out);
    out << "\n";
  }

  // member: map_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.map_mode, out);
    out << "\n";
  }

  // member: free_thresh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "free_thresh: ";
    rosidl_generator_traits::value_to_yaml(msg.free_thresh, out);
    out << "\n";
  }

  // member: occupied_thresh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "occupied_thresh: ";
    rosidl_generator_traits::value_to_yaml(msg.occupied_thresh, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveMap_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace nav2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav2_msgs::srv::SaveMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::srv::SaveMap_Request & msg)
{
  return nav2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::srv::SaveMap_Request>()
{
  return "nav2_msgs::srv::SaveMap_Request";
}

template<>
inline const char * name<nav2_msgs::srv::SaveMap_Request>()
{
  return "nav2_msgs/srv/SaveMap_Request";
}

template<>
struct has_fixed_size<nav2_msgs::srv::SaveMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav2_msgs::srv::SaveMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav2_msgs::srv::SaveMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace nav2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveMap_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveMap_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace nav2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav2_msgs::srv::SaveMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::srv::SaveMap_Response & msg)
{
  return nav2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::srv::SaveMap_Response>()
{
  return "nav2_msgs::srv::SaveMap_Response";
}

template<>
inline const char * name<nav2_msgs::srv::SaveMap_Response>()
{
  return "nav2_msgs/srv/SaveMap_Response";
}

template<>
struct has_fixed_size<nav2_msgs::srv::SaveMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nav2_msgs::srv::SaveMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nav2_msgs::srv::SaveMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::SaveMap>()
{
  return "nav2_msgs::srv::SaveMap";
}

template<>
inline const char * name<nav2_msgs::srv::SaveMap>()
{
  return "nav2_msgs/srv/SaveMap";
}

template<>
struct has_fixed_size<nav2_msgs::srv::SaveMap>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::srv::SaveMap_Request>::value &&
    has_fixed_size<nav2_msgs::srv::SaveMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::srv::SaveMap>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::srv::SaveMap_Request>::value &&
    has_bounded_size<nav2_msgs::srv::SaveMap_Response>::value
  >
{
};

template<>
struct is_service<nav2_msgs::srv::SaveMap>
  : std::true_type
{
};

template<>
struct is_service_request<nav2_msgs::srv::SaveMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nav2_msgs::srv::SaveMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__SRV__DETAIL__SAVE_MAP__TRAITS_HPP_
