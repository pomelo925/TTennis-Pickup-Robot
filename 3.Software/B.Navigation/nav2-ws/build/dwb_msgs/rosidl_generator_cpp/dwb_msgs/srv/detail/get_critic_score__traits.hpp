// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dwb_msgs:srv/GetCriticScore.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__SRV__DETAIL__GET_CRITIC_SCORE__TRAITS_HPP_
#define DWB_MSGS__SRV__DETAIL__GET_CRITIC_SCORE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dwb_msgs/srv/detail/get_critic_score__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "nav_2d_msgs/msg/detail/pose2_d_stamped__traits.hpp"
// Member 'velocity'
#include "nav_2d_msgs/msg/detail/twist2_d__traits.hpp"
// Member 'global_plan'
#include "nav_2d_msgs/msg/detail/path2_d__traits.hpp"
// Member 'traj'
#include "dwb_msgs/msg/detail/trajectory2_d__traits.hpp"

namespace dwb_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetCriticScore_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: global_plan
  {
    out << "global_plan: ";
    to_flow_style_yaml(msg.global_plan, out);
    out << ", ";
  }

  // member: traj
  {
    out << "traj: ";
    to_flow_style_yaml(msg.traj, out);
    out << ", ";
  }

  // member: critic_name
  {
    out << "critic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.critic_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetCriticScore_Request & msg,
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

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: global_plan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_plan:\n";
    to_block_style_yaml(msg.global_plan, out, indentation + 2);
  }

  // member: traj
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traj:\n";
    to_block_style_yaml(msg.traj, out, indentation + 2);
  }

  // member: critic_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "critic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.critic_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetCriticScore_Request & msg, bool use_flow_style = false)
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
  const dwb_msgs::srv::GetCriticScore_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dwb_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dwb_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const dwb_msgs::srv::GetCriticScore_Request & msg)
{
  return dwb_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dwb_msgs::srv::GetCriticScore_Request>()
{
  return "dwb_msgs::srv::GetCriticScore_Request";
}

template<>
inline const char * name<dwb_msgs::srv::GetCriticScore_Request>()
{
  return "dwb_msgs/srv/GetCriticScore_Request";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GetCriticScore_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dwb_msgs::srv::GetCriticScore_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dwb_msgs::srv::GetCriticScore_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'score'
#include "dwb_msgs/msg/detail/critic_score__traits.hpp"

namespace dwb_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetCriticScore_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: score
  {
    out << "score: ";
    to_flow_style_yaml(msg.score, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetCriticScore_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "score:\n";
    to_block_style_yaml(msg.score, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetCriticScore_Response & msg, bool use_flow_style = false)
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
  const dwb_msgs::srv::GetCriticScore_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dwb_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dwb_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const dwb_msgs::srv::GetCriticScore_Response & msg)
{
  return dwb_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dwb_msgs::srv::GetCriticScore_Response>()
{
  return "dwb_msgs::srv::GetCriticScore_Response";
}

template<>
inline const char * name<dwb_msgs::srv::GetCriticScore_Response>()
{
  return "dwb_msgs/srv/GetCriticScore_Response";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GetCriticScore_Response>
  : std::integral_constant<bool, has_fixed_size<dwb_msgs::msg::CriticScore>::value> {};

template<>
struct has_bounded_size<dwb_msgs::srv::GetCriticScore_Response>
  : std::integral_constant<bool, has_bounded_size<dwb_msgs::msg::CriticScore>::value> {};

template<>
struct is_message<dwb_msgs::srv::GetCriticScore_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dwb_msgs::srv::GetCriticScore>()
{
  return "dwb_msgs::srv::GetCriticScore";
}

template<>
inline const char * name<dwb_msgs::srv::GetCriticScore>()
{
  return "dwb_msgs/srv/GetCriticScore";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GetCriticScore>
  : std::integral_constant<
    bool,
    has_fixed_size<dwb_msgs::srv::GetCriticScore_Request>::value &&
    has_fixed_size<dwb_msgs::srv::GetCriticScore_Response>::value
  >
{
};

template<>
struct has_bounded_size<dwb_msgs::srv::GetCriticScore>
  : std::integral_constant<
    bool,
    has_bounded_size<dwb_msgs::srv::GetCriticScore_Request>::value &&
    has_bounded_size<dwb_msgs::srv::GetCriticScore_Response>::value
  >
{
};

template<>
struct is_service<dwb_msgs::srv::GetCriticScore>
  : std::true_type
{
};

template<>
struct is_service_request<dwb_msgs::srv::GetCriticScore_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dwb_msgs::srv::GetCriticScore_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DWB_MSGS__SRV__DETAIL__GET_CRITIC_SCORE__TRAITS_HPP_
