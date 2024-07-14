// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:srv/SetGoal.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__SET_GOAL__TRAITS_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__SET_GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtabmap_msgs/srv/detail/set_goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rtabmap_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetGoal_Request & msg,
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
    out << ", ";
  }

  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetGoal_Request & msg,
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

  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetGoal_Request & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::srv::SetGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::SetGoal_Request & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::SetGoal_Request>()
{
  return "rtabmap_msgs::srv::SetGoal_Request";
}

template<>
inline const char * name<rtabmap_msgs::srv::SetGoal_Request>()
{
  return "rtabmap_msgs/srv/SetGoal_Request";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::SetGoal_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::SetGoal_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtabmap_msgs::srv::SetGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'path_poses'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rtabmap_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: path_ids
  {
    if (msg.path_ids.size() == 0) {
      out << "path_ids: []";
    } else {
      out << "path_ids: [";
      size_t pending_items = msg.path_ids.size();
      for (auto item : msg.path_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: path_poses
  {
    if (msg.path_poses.size() == 0) {
      out << "path_poses: []";
    } else {
      out << "path_poses: [";
      size_t pending_items = msg.path_poses.size();
      for (auto item : msg.path_poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: planning_time
  {
    out << "planning_time: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path_ids.size() == 0) {
      out << "path_ids: []\n";
    } else {
      out << "path_ids:\n";
      for (auto item : msg.path_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: path_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path_poses.size() == 0) {
      out << "path_poses: []\n";
    } else {
      out << "path_poses:\n";
      for (auto item : msg.path_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: planning_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_time: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetGoal_Response & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::srv::SetGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::SetGoal_Response & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::SetGoal_Response>()
{
  return "rtabmap_msgs::srv::SetGoal_Response";
}

template<>
inline const char * name<rtabmap_msgs::srv::SetGoal_Response>()
{
  return "rtabmap_msgs/srv/SetGoal_Response";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::SetGoal_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::SetGoal_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtabmap_msgs::srv::SetGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::srv::SetGoal>()
{
  return "rtabmap_msgs::srv::SetGoal";
}

template<>
inline const char * name<rtabmap_msgs::srv::SetGoal>()
{
  return "rtabmap_msgs/srv/SetGoal";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::SetGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<rtabmap_msgs::srv::SetGoal_Request>::value &&
    has_fixed_size<rtabmap_msgs::srv::SetGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<rtabmap_msgs::srv::SetGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<rtabmap_msgs::srv::SetGoal_Request>::value &&
    has_bounded_size<rtabmap_msgs::srv::SetGoal_Response>::value
  >
{
};

template<>
struct is_service<rtabmap_msgs::srv::SetGoal>
  : std::true_type
{
};

template<>
struct is_service_request<rtabmap_msgs::srv::SetGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rtabmap_msgs::srv::SetGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__SRV__DETAIL__SET_GOAL__TRAITS_HPP_
