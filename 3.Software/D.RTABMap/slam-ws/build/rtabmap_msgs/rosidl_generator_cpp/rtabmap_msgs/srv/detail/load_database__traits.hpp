// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:srv/LoadDatabase.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__LOAD_DATABASE__TRAITS_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__LOAD_DATABASE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtabmap_msgs/srv/detail/load_database__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rtabmap_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadDatabase_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: database_path
  {
    out << "database_path: ";
    rosidl_generator_traits::value_to_yaml(msg.database_path, out);
    out << ", ";
  }

  // member: clear
  {
    out << "clear: ";
    rosidl_generator_traits::value_to_yaml(msg.clear, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadDatabase_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: database_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "database_path: ";
    rosidl_generator_traits::value_to_yaml(msg.database_path, out);
    out << "\n";
  }

  // member: clear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clear: ";
    rosidl_generator_traits::value_to_yaml(msg.clear, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadDatabase_Request & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::srv::LoadDatabase_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::LoadDatabase_Request & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::LoadDatabase_Request>()
{
  return "rtabmap_msgs::srv::LoadDatabase_Request";
}

template<>
inline const char * name<rtabmap_msgs::srv::LoadDatabase_Request>()
{
  return "rtabmap_msgs/srv/LoadDatabase_Request";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::LoadDatabase_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::LoadDatabase_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtabmap_msgs::srv::LoadDatabase_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rtabmap_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadDatabase_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadDatabase_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadDatabase_Response & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::srv::LoadDatabase_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::LoadDatabase_Response & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::LoadDatabase_Response>()
{
  return "rtabmap_msgs::srv::LoadDatabase_Response";
}

template<>
inline const char * name<rtabmap_msgs::srv::LoadDatabase_Response>()
{
  return "rtabmap_msgs/srv/LoadDatabase_Response";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::LoadDatabase_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::LoadDatabase_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtabmap_msgs::srv::LoadDatabase_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::srv::LoadDatabase>()
{
  return "rtabmap_msgs::srv::LoadDatabase";
}

template<>
inline const char * name<rtabmap_msgs::srv::LoadDatabase>()
{
  return "rtabmap_msgs/srv/LoadDatabase";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::LoadDatabase>
  : std::integral_constant<
    bool,
    has_fixed_size<rtabmap_msgs::srv::LoadDatabase_Request>::value &&
    has_fixed_size<rtabmap_msgs::srv::LoadDatabase_Response>::value
  >
{
};

template<>
struct has_bounded_size<rtabmap_msgs::srv::LoadDatabase>
  : std::integral_constant<
    bool,
    has_bounded_size<rtabmap_msgs::srv::LoadDatabase_Request>::value &&
    has_bounded_size<rtabmap_msgs::srv::LoadDatabase_Response>::value
  >
{
};

template<>
struct is_service<rtabmap_msgs::srv::LoadDatabase>
  : std::true_type
{
};

template<>
struct is_service_request<rtabmap_msgs::srv::LoadDatabase_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rtabmap_msgs::srv::LoadDatabase_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__SRV__DETAIL__LOAD_DATABASE__TRAITS_HPP_
