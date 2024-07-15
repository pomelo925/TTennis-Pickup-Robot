// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:action/DriveOnHeading.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__ACTION__DETAIL__DRIVE_ON_HEADING__TRAITS_HPP_
#define NAV2_MSGS__ACTION__DETAIL__DRIVE_ON_HEADING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav2_msgs/action/detail/drive_on_heading__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'time_allowance'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace nav2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveOnHeading_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: target
  {
    out << "target: ";
    to_flow_style_yaml(msg.target, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: time_allowance
  {
    out << "time_allowance: ";
    to_flow_style_yaml(msg.time_allowance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveOnHeading_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_block_style_yaml(msg.target, out, indentation + 2);
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: time_allowance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_allowance:\n";
    to_block_style_yaml(msg.time_allowance, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveOnHeading_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav2_msgs::action::DriveOnHeading_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::action::DriveOnHeading_Goal & msg)
{
  return nav2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::action::DriveOnHeading_Goal>()
{
  return "nav2_msgs::action::DriveOnHeading_Goal";
}

template<>
inline const char * name<nav2_msgs::action::DriveOnHeading_Goal>()
{
  return "nav2_msgs/action/DriveOnHeading_Goal";
}

template<>
struct has_fixed_size<nav2_msgs::action::DriveOnHeading_Goal>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::DriveOnHeading_Goal>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<nav2_msgs::action::DriveOnHeading_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'total_elapsed_time'
// already included above
// #include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace nav2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveOnHeading_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: total_elapsed_time
  {
    out << "total_elapsed_time: ";
    to_flow_style_yaml(msg.total_elapsed_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveOnHeading_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: total_elapsed_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_elapsed_time:\n";
    to_block_style_yaml(msg.total_elapsed_time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveOnHeading_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav2_msgs::action::DriveOnHeading_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::action::DriveOnHeading_Result & msg)
{
  return nav2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::action::DriveOnHeading_Result>()
{
  return "nav2_msgs::action::DriveOnHeading_Result";
}

template<>
inline const char * name<nav2_msgs::action::DriveOnHeading_Result>()
{
  return "nav2_msgs/action/DriveOnHeading_Result";
}

template<>
struct has_fixed_size<nav2_msgs::action::DriveOnHeading_Result>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::DriveOnHeading_Result>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<nav2_msgs::action::DriveOnHeading_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace nav2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveOnHeading_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance_traveled
  {
    out << "distance_traveled: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_traveled, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveOnHeading_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance_traveled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_traveled: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_traveled, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveOnHeading_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav2_msgs::action::DriveOnHeading_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::action::DriveOnHeading_Feedback & msg)
{
  return nav2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::action::DriveOnHeading_Feedback>()
{
  return "nav2_msgs::action::DriveOnHeading_Feedback";
}

template<>
inline const char * name<nav2_msgs::action::DriveOnHeading_Feedback>()
{
  return "nav2_msgs/action/DriveOnHeading_Feedback";
}

template<>
struct has_fixed_size<nav2_msgs::action::DriveOnHeading_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nav2_msgs::action::DriveOnHeading_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nav2_msgs::action::DriveOnHeading_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "nav2_msgs/action/detail/drive_on_heading__traits.hpp"

namespace nav2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveOnHeading_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveOnHeading_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveOnHeading_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav2_msgs::action::DriveOnHeading_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::action::DriveOnHeading_SendGoal_Request & msg)
{
  return nav2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::action::DriveOnHeading_SendGoal_Request>()
{
  return "nav2_msgs::action::DriveOnHeading_SendGoal_Request";
}

template<>
inline const char * name<nav2_msgs::action::DriveOnHeading_SendGoal_Request>()
{
  return "nav2_msgs/action/DriveOnHeading_SendGoal_Request";
}

template<>
struct has_fixed_size<nav2_msgs::action::DriveOnHeading_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<nav2_msgs::action::DriveOnHeading_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::DriveOnHeading_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<nav2_msgs::action::DriveOnHeading_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<nav2_msgs::action::DriveOnHeading_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace nav2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveOnHeading_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveOnHeading_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveOnHeading_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav2_msgs::action::DriveOnHeading_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::action::DriveOnHeading_SendGoal_Response & msg)
{
  return nav2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::action::DriveOnHeading_SendGoal_Response>()
{
  return "nav2_msgs::action::DriveOnHeading_SendGoal_Response";
}

template<>
inline const char * name<nav2_msgs::action::DriveOnHeading_SendGoal_Response>()
{
  return "nav2_msgs/action/DriveOnHeading_SendGoal_Response";
}

template<>
struct has_fixed_size<nav2_msgs::action::DriveOnHeading_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::DriveOnHeading_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<nav2_msgs::action::DriveOnHeading_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::DriveOnHeading_SendGoal>()
{
  return "nav2_msgs::action::DriveOnHeading_SendGoal";
}

template<>
inline const char * name<nav2_msgs::action::DriveOnHeading_SendGoal>()
{
  return "nav2_msgs/action/DriveOnHeading_SendGoal";
}

template<>
struct has_fixed_size<nav2_msgs::action::DriveOnHeading_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::action::DriveOnHeading_SendGoal_Request>::value &&
    has_fixed_size<nav2_msgs::action::DriveOnHeading_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::action::DriveOnHeading_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::action::DriveOnHeading_SendGoal_Request>::value &&
    has_bounded_size<nav2_msgs::action::DriveOnHeading_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<nav2_msgs::action::DriveOnHeading_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<nav2_msgs::action::DriveOnHeading_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nav2_msgs::action::DriveOnHeading_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace nav2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveOnHeading_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveOnHeading_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveOnHeading_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav2_msgs::action::DriveOnHeading_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::action::DriveOnHeading_GetResult_Request & msg)
{
  return nav2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::action::DriveOnHeading_GetResult_Request>()
{
  return "nav2_msgs::action::DriveOnHeading_GetResult_Request";
}

template<>
inline const char * name<nav2_msgs::action::DriveOnHeading_GetResult_Request>()
{
  return "nav2_msgs/action/DriveOnHeading_GetResult_Request";
}

template<>
struct has_fixed_size<nav2_msgs::action::DriveOnHeading_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::DriveOnHeading_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<nav2_msgs::action::DriveOnHeading_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_msgs/action/detail/drive_on_heading__traits.hpp"

namespace nav2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveOnHeading_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveOnHeading_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveOnHeading_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav2_msgs::action::DriveOnHeading_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::action::DriveOnHeading_GetResult_Response & msg)
{
  return nav2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::action::DriveOnHeading_GetResult_Response>()
{
  return "nav2_msgs::action::DriveOnHeading_GetResult_Response";
}

template<>
inline const char * name<nav2_msgs::action::DriveOnHeading_GetResult_Response>()
{
  return "nav2_msgs/action/DriveOnHeading_GetResult_Response";
}

template<>
struct has_fixed_size<nav2_msgs::action::DriveOnHeading_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<nav2_msgs::action::DriveOnHeading_Result>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::DriveOnHeading_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<nav2_msgs::action::DriveOnHeading_Result>::value> {};

template<>
struct is_message<nav2_msgs::action::DriveOnHeading_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::DriveOnHeading_GetResult>()
{
  return "nav2_msgs::action::DriveOnHeading_GetResult";
}

template<>
inline const char * name<nav2_msgs::action::DriveOnHeading_GetResult>()
{
  return "nav2_msgs/action/DriveOnHeading_GetResult";
}

template<>
struct has_fixed_size<nav2_msgs::action::DriveOnHeading_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::action::DriveOnHeading_GetResult_Request>::value &&
    has_fixed_size<nav2_msgs::action::DriveOnHeading_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::action::DriveOnHeading_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::action::DriveOnHeading_GetResult_Request>::value &&
    has_bounded_size<nav2_msgs::action::DriveOnHeading_GetResult_Response>::value
  >
{
};

template<>
struct is_service<nav2_msgs::action::DriveOnHeading_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<nav2_msgs::action::DriveOnHeading_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nav2_msgs::action::DriveOnHeading_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "nav2_msgs/action/detail/drive_on_heading__traits.hpp"

namespace nav2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveOnHeading_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveOnHeading_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveOnHeading_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace nav2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use nav2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav2_msgs::action::DriveOnHeading_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::action::DriveOnHeading_FeedbackMessage & msg)
{
  return nav2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::action::DriveOnHeading_FeedbackMessage>()
{
  return "nav2_msgs::action::DriveOnHeading_FeedbackMessage";
}

template<>
inline const char * name<nav2_msgs::action::DriveOnHeading_FeedbackMessage>()
{
  return "nav2_msgs/action/DriveOnHeading_FeedbackMessage";
}

template<>
struct has_fixed_size<nav2_msgs::action::DriveOnHeading_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<nav2_msgs::action::DriveOnHeading_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::DriveOnHeading_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<nav2_msgs::action::DriveOnHeading_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<nav2_msgs::action::DriveOnHeading_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<nav2_msgs::action::DriveOnHeading>
  : std::true_type
{
};

template<>
struct is_action_goal<nav2_msgs::action::DriveOnHeading_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<nav2_msgs::action::DriveOnHeading_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<nav2_msgs::action::DriveOnHeading_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // NAV2_MSGS__ACTION__DETAIL__DRIVE_ON_HEADING__TRAITS_HPP_
