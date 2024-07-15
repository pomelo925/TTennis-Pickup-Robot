// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:srv/SetInitialPose.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__SET_INITIAL_POSE__TRAITS_HPP_
#define NAV2_MSGS__SRV__DETAIL__SET_INITIAL_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav2_msgs/srv/detail/set_initial_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__traits.hpp"

namespace nav2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetInitialPose_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetInitialPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetInitialPose_Request & msg, bool use_flow_style = false)
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
  const nav2_msgs::srv::SetInitialPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::srv::SetInitialPose_Request & msg)
{
  return nav2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::srv::SetInitialPose_Request>()
{
  return "nav2_msgs::srv::SetInitialPose_Request";
}

template<>
inline const char * name<nav2_msgs::srv::SetInitialPose_Request>()
{
  return "nav2_msgs/srv/SetInitialPose_Request";
}

template<>
struct has_fixed_size<nav2_msgs::srv::SetInitialPose_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseWithCovarianceStamped>::value> {};

template<>
struct has_bounded_size<nav2_msgs::srv::SetInitialPose_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseWithCovarianceStamped>::value> {};

template<>
struct is_message<nav2_msgs::srv::SetInitialPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace nav2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetInitialPose_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetInitialPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetInitialPose_Response & msg, bool use_flow_style = false)
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
  const nav2_msgs::srv::SetInitialPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::srv::SetInitialPose_Response & msg)
{
  return nav2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::srv::SetInitialPose_Response>()
{
  return "nav2_msgs::srv::SetInitialPose_Response";
}

template<>
inline const char * name<nav2_msgs::srv::SetInitialPose_Response>()
{
  return "nav2_msgs/srv/SetInitialPose_Response";
}

template<>
struct has_fixed_size<nav2_msgs::srv::SetInitialPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nav2_msgs::srv::SetInitialPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nav2_msgs::srv::SetInitialPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::SetInitialPose>()
{
  return "nav2_msgs::srv::SetInitialPose";
}

template<>
inline const char * name<nav2_msgs::srv::SetInitialPose>()
{
  return "nav2_msgs/srv/SetInitialPose";
}

template<>
struct has_fixed_size<nav2_msgs::srv::SetInitialPose>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::srv::SetInitialPose_Request>::value &&
    has_fixed_size<nav2_msgs::srv::SetInitialPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::srv::SetInitialPose>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::srv::SetInitialPose_Request>::value &&
    has_bounded_size<nav2_msgs::srv::SetInitialPose_Response>::value
  >
{
};

template<>
struct is_service<nav2_msgs::srv::SetInitialPose>
  : std::true_type
{
};

template<>
struct is_service_request<nav2_msgs::srv::SetInitialPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nav2_msgs::srv::SetInitialPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__SRV__DETAIL__SET_INITIAL_POSE__TRAITS_HPP_
