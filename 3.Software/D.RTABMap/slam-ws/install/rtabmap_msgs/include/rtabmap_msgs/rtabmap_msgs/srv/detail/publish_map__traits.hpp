// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:srv/PublishMap.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__PUBLISH_MAP__TRAITS_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__PUBLISH_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtabmap_msgs/srv/detail/publish_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rtabmap_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PublishMap_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: global_map
  {
    out << "global_map: ";
    rosidl_generator_traits::value_to_yaml(msg.global_map, out);
    out << ", ";
  }

  // member: optimized
  {
    out << "optimized: ";
    rosidl_generator_traits::value_to_yaml(msg.optimized, out);
    out << ", ";
  }

  // member: graph_only
  {
    out << "graph_only: ";
    rosidl_generator_traits::value_to_yaml(msg.graph_only, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PublishMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: global_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_map: ";
    rosidl_generator_traits::value_to_yaml(msg.global_map, out);
    out << "\n";
  }

  // member: optimized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optimized: ";
    rosidl_generator_traits::value_to_yaml(msg.optimized, out);
    out << "\n";
  }

  // member: graph_only
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "graph_only: ";
    rosidl_generator_traits::value_to_yaml(msg.graph_only, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PublishMap_Request & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::srv::PublishMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::PublishMap_Request & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::PublishMap_Request>()
{
  return "rtabmap_msgs::srv::PublishMap_Request";
}

template<>
inline const char * name<rtabmap_msgs::srv::PublishMap_Request>()
{
  return "rtabmap_msgs/srv/PublishMap_Request";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::PublishMap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::PublishMap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtabmap_msgs::srv::PublishMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rtabmap_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PublishMap_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PublishMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PublishMap_Response & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::srv::PublishMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::PublishMap_Response & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::PublishMap_Response>()
{
  return "rtabmap_msgs::srv::PublishMap_Response";
}

template<>
inline const char * name<rtabmap_msgs::srv::PublishMap_Response>()
{
  return "rtabmap_msgs/srv/PublishMap_Response";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::PublishMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::PublishMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtabmap_msgs::srv::PublishMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::srv::PublishMap>()
{
  return "rtabmap_msgs::srv::PublishMap";
}

template<>
inline const char * name<rtabmap_msgs::srv::PublishMap>()
{
  return "rtabmap_msgs/srv/PublishMap";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::PublishMap>
  : std::integral_constant<
    bool,
    has_fixed_size<rtabmap_msgs::srv::PublishMap_Request>::value &&
    has_fixed_size<rtabmap_msgs::srv::PublishMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<rtabmap_msgs::srv::PublishMap>
  : std::integral_constant<
    bool,
    has_bounded_size<rtabmap_msgs::srv::PublishMap_Request>::value &&
    has_bounded_size<rtabmap_msgs::srv::PublishMap_Response>::value
  >
{
};

template<>
struct is_service<rtabmap_msgs::srv::PublishMap>
  : std::true_type
{
};

template<>
struct is_service_request<rtabmap_msgs::srv::PublishMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rtabmap_msgs::srv::PublishMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__SRV__DETAIL__PUBLISH_MAP__TRAITS_HPP_
