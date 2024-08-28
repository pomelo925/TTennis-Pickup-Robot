// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:srv/IsPathValid.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__IS_PATH_VALID__TRAITS_HPP_
#define NAV2_MSGS__SRV__DETAIL__IS_PATH_VALID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav2_msgs/srv/detail/is_path_valid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__traits.hpp"

namespace nav2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const IsPathValid_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: path
  {
    out << "path: ";
    to_flow_style_yaml(msg.path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IsPathValid_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path:\n";
    to_block_style_yaml(msg.path, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IsPathValid_Request & msg, bool use_flow_style = false)
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
  const nav2_msgs::srv::IsPathValid_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::srv::IsPathValid_Request & msg)
{
  return nav2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::srv::IsPathValid_Request>()
{
  return "nav2_msgs::srv::IsPathValid_Request";
}

template<>
inline const char * name<nav2_msgs::srv::IsPathValid_Request>()
{
  return "nav2_msgs/srv/IsPathValid_Request";
}

template<>
struct has_fixed_size<nav2_msgs::srv::IsPathValid_Request>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::Path>::value> {};

template<>
struct has_bounded_size<nav2_msgs::srv::IsPathValid_Request>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::Path>::value> {};

template<>
struct is_message<nav2_msgs::srv::IsPathValid_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace nav2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const IsPathValid_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_valid
  {
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
    out << ", ";
  }

  // member: invalid_pose_indices
  {
    if (msg.invalid_pose_indices.size() == 0) {
      out << "invalid_pose_indices: []";
    } else {
      out << "invalid_pose_indices: [";
      size_t pending_items = msg.invalid_pose_indices.size();
      for (auto item : msg.invalid_pose_indices) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const IsPathValid_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
    out << "\n";
  }

  // member: invalid_pose_indices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.invalid_pose_indices.size() == 0) {
      out << "invalid_pose_indices: []\n";
    } else {
      out << "invalid_pose_indices:\n";
      for (auto item : msg.invalid_pose_indices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IsPathValid_Response & msg, bool use_flow_style = false)
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
  const nav2_msgs::srv::IsPathValid_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::srv::IsPathValid_Response & msg)
{
  return nav2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::srv::IsPathValid_Response>()
{
  return "nav2_msgs::srv::IsPathValid_Response";
}

template<>
inline const char * name<nav2_msgs::srv::IsPathValid_Response>()
{
  return "nav2_msgs/srv/IsPathValid_Response";
}

template<>
struct has_fixed_size<nav2_msgs::srv::IsPathValid_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav2_msgs::srv::IsPathValid_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav2_msgs::srv::IsPathValid_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::IsPathValid>()
{
  return "nav2_msgs::srv::IsPathValid";
}

template<>
inline const char * name<nav2_msgs::srv::IsPathValid>()
{
  return "nav2_msgs/srv/IsPathValid";
}

template<>
struct has_fixed_size<nav2_msgs::srv::IsPathValid>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::srv::IsPathValid_Request>::value &&
    has_fixed_size<nav2_msgs::srv::IsPathValid_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::srv::IsPathValid>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::srv::IsPathValid_Request>::value &&
    has_bounded_size<nav2_msgs::srv::IsPathValid_Response>::value
  >
{
};

template<>
struct is_service<nav2_msgs::srv::IsPathValid>
  : std::true_type
{
};

template<>
struct is_service_request<nav2_msgs::srv::IsPathValid_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nav2_msgs::srv::IsPathValid_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__SRV__DETAIL__IS_PATH_VALID__TRAITS_HPP_
