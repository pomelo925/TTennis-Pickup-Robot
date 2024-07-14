// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:srv/SetLabel.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__SET_LABEL__TRAITS_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__SET_LABEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtabmap_msgs/srv/detail/set_label__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rtabmap_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLabel_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_id
  {
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << ", ";
  }

  // member: node_label
  {
    out << "node_label: ";
    rosidl_generator_traits::value_to_yaml(msg.node_label, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLabel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << "\n";
  }

  // member: node_label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_label: ";
    rosidl_generator_traits::value_to_yaml(msg.node_label, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLabel_Request & msg, bool use_flow_style = false)
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

}  // namespace rtabmap_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rtabmap_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rtabmap_msgs::srv::SetLabel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::SetLabel_Request & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::SetLabel_Request>()
{
  return "rtabmap_msgs::srv::SetLabel_Request";
}

template<>
inline const char * name<rtabmap_msgs::srv::SetLabel_Request>()
{
  return "rtabmap_msgs/srv/SetLabel_Request";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::SetLabel_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::SetLabel_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtabmap_msgs::srv::SetLabel_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rtabmap_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLabel_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLabel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLabel_Response & msg, bool use_flow_style = false)
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

}  // namespace rtabmap_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rtabmap_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rtabmap_msgs::srv::SetLabel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::SetLabel_Response & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::SetLabel_Response>()
{
  return "rtabmap_msgs::srv::SetLabel_Response";
}

template<>
inline const char * name<rtabmap_msgs::srv::SetLabel_Response>()
{
  return "rtabmap_msgs/srv/SetLabel_Response";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::SetLabel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::SetLabel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtabmap_msgs::srv::SetLabel_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::srv::SetLabel>()
{
  return "rtabmap_msgs::srv::SetLabel";
}

template<>
inline const char * name<rtabmap_msgs::srv::SetLabel>()
{
  return "rtabmap_msgs/srv/SetLabel";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::SetLabel>
  : std::integral_constant<
    bool,
    has_fixed_size<rtabmap_msgs::srv::SetLabel_Request>::value &&
    has_fixed_size<rtabmap_msgs::srv::SetLabel_Response>::value
  >
{
};

template<>
struct has_bounded_size<rtabmap_msgs::srv::SetLabel>
  : std::integral_constant<
    bool,
    has_bounded_size<rtabmap_msgs::srv::SetLabel_Request>::value &&
    has_bounded_size<rtabmap_msgs::srv::SetLabel_Response>::value
  >
{
};

template<>
struct is_service<rtabmap_msgs::srv::SetLabel>
  : std::true_type
{
};

template<>
struct is_service_request<rtabmap_msgs::srv::SetLabel_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rtabmap_msgs::srv::SetLabel_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__SRV__DETAIL__SET_LABEL__TRAITS_HPP_
