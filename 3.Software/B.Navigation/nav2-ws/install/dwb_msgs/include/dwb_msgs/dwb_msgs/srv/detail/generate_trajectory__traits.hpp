// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dwb_msgs:srv/GenerateTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__SRV__DETAIL__GENERATE_TRAJECTORY__TRAITS_HPP_
#define DWB_MSGS__SRV__DETAIL__GENERATE_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dwb_msgs/srv/detail/generate_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start_pose'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"
// Member 'start_vel'
// Member 'cmd_vel'
#include "nav_2d_msgs/msg/detail/twist2_d__traits.hpp"

namespace dwb_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateTrajectory_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_pose
  {
    out << "start_pose: ";
    to_flow_style_yaml(msg.start_pose, out);
    out << ", ";
  }

  // member: start_vel
  {
    out << "start_vel: ";
    to_flow_style_yaml(msg.start_vel, out);
    out << ", ";
  }

  // member: cmd_vel
  {
    out << "cmd_vel: ";
    to_flow_style_yaml(msg.cmd_vel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_pose:\n";
    to_block_style_yaml(msg.start_pose, out, indentation + 2);
  }

  // member: start_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_vel:\n";
    to_block_style_yaml(msg.start_vel, out, indentation + 2);
  }

  // member: cmd_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_vel:\n";
    to_block_style_yaml(msg.cmd_vel, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateTrajectory_Request & msg, bool use_flow_style = false)
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

}  // namespace dwb_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dwb_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dwb_msgs::srv::GenerateTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dwb_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dwb_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const dwb_msgs::srv::GenerateTrajectory_Request & msg)
{
  return dwb_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dwb_msgs::srv::GenerateTrajectory_Request>()
{
  return "dwb_msgs::srv::GenerateTrajectory_Request";
}

template<>
inline const char * name<dwb_msgs::srv::GenerateTrajectory_Request>()
{
  return "dwb_msgs/srv/GenerateTrajectory_Request";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GenerateTrajectory_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose2D>::value && has_fixed_size<nav_2d_msgs::msg::Twist2D>::value> {};

template<>
struct has_bounded_size<dwb_msgs::srv::GenerateTrajectory_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose2D>::value && has_bounded_size<nav_2d_msgs::msg::Twist2D>::value> {};

template<>
struct is_message<dwb_msgs::srv::GenerateTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'traj'
#include "dwb_msgs/msg/detail/trajectory2_d__traits.hpp"

namespace dwb_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateTrajectory_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: traj
  {
    out << "traj: ";
    to_flow_style_yaml(msg.traj, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: traj
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traj:\n";
    to_block_style_yaml(msg.traj, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateTrajectory_Response & msg, bool use_flow_style = false)
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

}  // namespace dwb_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dwb_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dwb_msgs::srv::GenerateTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dwb_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dwb_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const dwb_msgs::srv::GenerateTrajectory_Response & msg)
{
  return dwb_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dwb_msgs::srv::GenerateTrajectory_Response>()
{
  return "dwb_msgs::srv::GenerateTrajectory_Response";
}

template<>
inline const char * name<dwb_msgs::srv::GenerateTrajectory_Response>()
{
  return "dwb_msgs/srv/GenerateTrajectory_Response";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GenerateTrajectory_Response>
  : std::integral_constant<bool, has_fixed_size<dwb_msgs::msg::Trajectory2D>::value> {};

template<>
struct has_bounded_size<dwb_msgs::srv::GenerateTrajectory_Response>
  : std::integral_constant<bool, has_bounded_size<dwb_msgs::msg::Trajectory2D>::value> {};

template<>
struct is_message<dwb_msgs::srv::GenerateTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dwb_msgs::srv::GenerateTrajectory>()
{
  return "dwb_msgs::srv::GenerateTrajectory";
}

template<>
inline const char * name<dwb_msgs::srv::GenerateTrajectory>()
{
  return "dwb_msgs/srv/GenerateTrajectory";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GenerateTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<dwb_msgs::srv::GenerateTrajectory_Request>::value &&
    has_fixed_size<dwb_msgs::srv::GenerateTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<dwb_msgs::srv::GenerateTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<dwb_msgs::srv::GenerateTrajectory_Request>::value &&
    has_bounded_size<dwb_msgs::srv::GenerateTrajectory_Response>::value
  >
{
};

template<>
struct is_service<dwb_msgs::srv::GenerateTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<dwb_msgs::srv::GenerateTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dwb_msgs::srv::GenerateTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DWB_MSGS__SRV__DETAIL__GENERATE_TRAJECTORY__TRAITS_HPP_
