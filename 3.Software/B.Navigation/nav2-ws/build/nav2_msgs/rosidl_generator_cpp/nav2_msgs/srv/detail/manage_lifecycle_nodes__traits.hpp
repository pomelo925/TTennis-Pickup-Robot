// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:srv/ManageLifecycleNodes.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__TRAITS_HPP_
#define NAV2_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav2_msgs/srv/detail/manage_lifecycle_nodes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace nav2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ManageLifecycleNodes_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ManageLifecycleNodes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManageLifecycleNodes_Request & msg, bool use_flow_style = false)
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
  const nav2_msgs::srv::ManageLifecycleNodes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::srv::ManageLifecycleNodes_Request & msg)
{
  return nav2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::srv::ManageLifecycleNodes_Request>()
{
  return "nav2_msgs::srv::ManageLifecycleNodes_Request";
}

template<>
inline const char * name<nav2_msgs::srv::ManageLifecycleNodes_Request>()
{
  return "nav2_msgs/srv/ManageLifecycleNodes_Request";
}

template<>
struct has_fixed_size<nav2_msgs::srv::ManageLifecycleNodes_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nav2_msgs::srv::ManageLifecycleNodes_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nav2_msgs::srv::ManageLifecycleNodes_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace nav2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ManageLifecycleNodes_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ManageLifecycleNodes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManageLifecycleNodes_Response & msg, bool use_flow_style = false)
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
  const nav2_msgs::srv::ManageLifecycleNodes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::srv::ManageLifecycleNodes_Response & msg)
{
  return nav2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::srv::ManageLifecycleNodes_Response>()
{
  return "nav2_msgs::srv::ManageLifecycleNodes_Response";
}

template<>
inline const char * name<nav2_msgs::srv::ManageLifecycleNodes_Response>()
{
  return "nav2_msgs/srv/ManageLifecycleNodes_Response";
}

template<>
struct has_fixed_size<nav2_msgs::srv::ManageLifecycleNodes_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nav2_msgs::srv::ManageLifecycleNodes_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nav2_msgs::srv::ManageLifecycleNodes_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::ManageLifecycleNodes>()
{
  return "nav2_msgs::srv::ManageLifecycleNodes";
}

template<>
inline const char * name<nav2_msgs::srv::ManageLifecycleNodes>()
{
  return "nav2_msgs/srv/ManageLifecycleNodes";
}

template<>
struct has_fixed_size<nav2_msgs::srv::ManageLifecycleNodes>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::srv::ManageLifecycleNodes_Request>::value &&
    has_fixed_size<nav2_msgs::srv::ManageLifecycleNodes_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::srv::ManageLifecycleNodes>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::srv::ManageLifecycleNodes_Request>::value &&
    has_bounded_size<nav2_msgs::srv::ManageLifecycleNodes_Response>::value
  >
{
};

template<>
struct is_service<nav2_msgs::srv::ManageLifecycleNodes>
  : std::true_type
{
};

template<>
struct is_service_request<nav2_msgs::srv::ManageLifecycleNodes_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nav2_msgs::srv::ManageLifecycleNodes_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__TRAITS_HPP_
