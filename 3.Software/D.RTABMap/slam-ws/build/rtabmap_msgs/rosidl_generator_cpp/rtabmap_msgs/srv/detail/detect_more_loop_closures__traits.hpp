// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:srv/DetectMoreLoopClosures.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__DETECT_MORE_LOOP_CLOSURES__TRAITS_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__DETECT_MORE_LOOP_CLOSURES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtabmap_msgs/srv/detail/detect_more_loop_closures__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rtabmap_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectMoreLoopClosures_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: cluster_radius_max
  {
    out << "cluster_radius_max: ";
    rosidl_generator_traits::value_to_yaml(msg.cluster_radius_max, out);
    out << ", ";
  }

  // member: cluster_radius_min
  {
    out << "cluster_radius_min: ";
    rosidl_generator_traits::value_to_yaml(msg.cluster_radius_min, out);
    out << ", ";
  }

  // member: cluster_angle
  {
    out << "cluster_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.cluster_angle, out);
    out << ", ";
  }

  // member: iterations
  {
    out << "iterations: ";
    rosidl_generator_traits::value_to_yaml(msg.iterations, out);
    out << ", ";
  }

  // member: intra_only
  {
    out << "intra_only: ";
    rosidl_generator_traits::value_to_yaml(msg.intra_only, out);
    out << ", ";
  }

  // member: inter_only
  {
    out << "inter_only: ";
    rosidl_generator_traits::value_to_yaml(msg.inter_only, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectMoreLoopClosures_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cluster_radius_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_radius_max: ";
    rosidl_generator_traits::value_to_yaml(msg.cluster_radius_max, out);
    out << "\n";
  }

  // member: cluster_radius_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_radius_min: ";
    rosidl_generator_traits::value_to_yaml(msg.cluster_radius_min, out);
    out << "\n";
  }

  // member: cluster_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.cluster_angle, out);
    out << "\n";
  }

  // member: iterations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iterations: ";
    rosidl_generator_traits::value_to_yaml(msg.iterations, out);
    out << "\n";
  }

  // member: intra_only
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intra_only: ";
    rosidl_generator_traits::value_to_yaml(msg.intra_only, out);
    out << "\n";
  }

  // member: inter_only
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inter_only: ";
    rosidl_generator_traits::value_to_yaml(msg.inter_only, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectMoreLoopClosures_Request & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::srv::DetectMoreLoopClosures_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::DetectMoreLoopClosures_Request & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::DetectMoreLoopClosures_Request>()
{
  return "rtabmap_msgs::srv::DetectMoreLoopClosures_Request";
}

template<>
inline const char * name<rtabmap_msgs::srv::DetectMoreLoopClosures_Request>()
{
  return "rtabmap_msgs/srv/DetectMoreLoopClosures_Request";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::DetectMoreLoopClosures_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::DetectMoreLoopClosures_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtabmap_msgs::srv::DetectMoreLoopClosures_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rtabmap_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectMoreLoopClosures_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: detected
  {
    out << "detected: ";
    rosidl_generator_traits::value_to_yaml(msg.detected, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectMoreLoopClosures_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detected: ";
    rosidl_generator_traits::value_to_yaml(msg.detected, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectMoreLoopClosures_Response & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::srv::DetectMoreLoopClosures_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::DetectMoreLoopClosures_Response & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::DetectMoreLoopClosures_Response>()
{
  return "rtabmap_msgs::srv::DetectMoreLoopClosures_Response";
}

template<>
inline const char * name<rtabmap_msgs::srv::DetectMoreLoopClosures_Response>()
{
  return "rtabmap_msgs/srv/DetectMoreLoopClosures_Response";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::DetectMoreLoopClosures_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::DetectMoreLoopClosures_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtabmap_msgs::srv::DetectMoreLoopClosures_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::srv::DetectMoreLoopClosures>()
{
  return "rtabmap_msgs::srv::DetectMoreLoopClosures";
}

template<>
inline const char * name<rtabmap_msgs::srv::DetectMoreLoopClosures>()
{
  return "rtabmap_msgs/srv/DetectMoreLoopClosures";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::DetectMoreLoopClosures>
  : std::integral_constant<
    bool,
    has_fixed_size<rtabmap_msgs::srv::DetectMoreLoopClosures_Request>::value &&
    has_fixed_size<rtabmap_msgs::srv::DetectMoreLoopClosures_Response>::value
  >
{
};

template<>
struct has_bounded_size<rtabmap_msgs::srv::DetectMoreLoopClosures>
  : std::integral_constant<
    bool,
    has_bounded_size<rtabmap_msgs::srv::DetectMoreLoopClosures_Request>::value &&
    has_bounded_size<rtabmap_msgs::srv::DetectMoreLoopClosures_Response>::value
  >
{
};

template<>
struct is_service<rtabmap_msgs::srv::DetectMoreLoopClosures>
  : std::true_type
{
};

template<>
struct is_service_request<rtabmap_msgs::srv::DetectMoreLoopClosures_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rtabmap_msgs::srv::DetectMoreLoopClosures_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__SRV__DETAIL__DETECT_MORE_LOOP_CLOSURES__TRAITS_HPP_
