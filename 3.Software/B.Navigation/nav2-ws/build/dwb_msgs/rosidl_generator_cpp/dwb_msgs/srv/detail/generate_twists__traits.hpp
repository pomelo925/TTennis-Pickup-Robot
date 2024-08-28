// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dwb_msgs:srv/GenerateTwists.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__SRV__DETAIL__GENERATE_TWISTS__TRAITS_HPP_
#define DWB_MSGS__SRV__DETAIL__GENERATE_TWISTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dwb_msgs/srv/detail/generate_twists__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'current_vel'
#include "nav_2d_msgs/msg/detail/twist2_d__traits.hpp"

namespace dwb_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateTwists_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_vel
  {
    out << "current_vel: ";
    to_flow_style_yaml(msg.current_vel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenerateTwists_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_vel:\n";
    to_block_style_yaml(msg.current_vel, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateTwists_Request & msg, bool use_flow_style = false)
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
  const dwb_msgs::srv::GenerateTwists_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dwb_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dwb_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const dwb_msgs::srv::GenerateTwists_Request & msg)
{
  return dwb_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dwb_msgs::srv::GenerateTwists_Request>()
{
  return "dwb_msgs::srv::GenerateTwists_Request";
}

template<>
inline const char * name<dwb_msgs::srv::GenerateTwists_Request>()
{
  return "dwb_msgs/srv/GenerateTwists_Request";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GenerateTwists_Request>
  : std::integral_constant<bool, has_fixed_size<nav_2d_msgs::msg::Twist2D>::value> {};

template<>
struct has_bounded_size<dwb_msgs::srv::GenerateTwists_Request>
  : std::integral_constant<bool, has_bounded_size<nav_2d_msgs::msg::Twist2D>::value> {};

template<>
struct is_message<dwb_msgs::srv::GenerateTwists_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'twists'
// already included above
// #include "nav_2d_msgs/msg/detail/twist2_d__traits.hpp"

namespace dwb_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GenerateTwists_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: twists
  {
    if (msg.twists.size() == 0) {
      out << "twists: []";
    } else {
      out << "twists: [";
      size_t pending_items = msg.twists.size();
      for (auto item : msg.twists) {
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
  const GenerateTwists_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: twists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.twists.size() == 0) {
      out << "twists: []\n";
    } else {
      out << "twists:\n";
      for (auto item : msg.twists) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenerateTwists_Response & msg, bool use_flow_style = false)
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
  const dwb_msgs::srv::GenerateTwists_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dwb_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dwb_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const dwb_msgs::srv::GenerateTwists_Response & msg)
{
  return dwb_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dwb_msgs::srv::GenerateTwists_Response>()
{
  return "dwb_msgs::srv::GenerateTwists_Response";
}

template<>
inline const char * name<dwb_msgs::srv::GenerateTwists_Response>()
{
  return "dwb_msgs/srv/GenerateTwists_Response";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GenerateTwists_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dwb_msgs::srv::GenerateTwists_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dwb_msgs::srv::GenerateTwists_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dwb_msgs::srv::GenerateTwists>()
{
  return "dwb_msgs::srv::GenerateTwists";
}

template<>
inline const char * name<dwb_msgs::srv::GenerateTwists>()
{
  return "dwb_msgs/srv/GenerateTwists";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GenerateTwists>
  : std::integral_constant<
    bool,
    has_fixed_size<dwb_msgs::srv::GenerateTwists_Request>::value &&
    has_fixed_size<dwb_msgs::srv::GenerateTwists_Response>::value
  >
{
};

template<>
struct has_bounded_size<dwb_msgs::srv::GenerateTwists>
  : std::integral_constant<
    bool,
    has_bounded_size<dwb_msgs::srv::GenerateTwists_Request>::value &&
    has_bounded_size<dwb_msgs::srv::GenerateTwists_Response>::value
  >
{
};

template<>
struct is_service<dwb_msgs::srv::GenerateTwists>
  : std::true_type
{
};

template<>
struct is_service_request<dwb_msgs::srv::GenerateTwists_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dwb_msgs::srv::GenerateTwists_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DWB_MSGS__SRV__DETAIL__GENERATE_TWISTS__TRAITS_HPP_
