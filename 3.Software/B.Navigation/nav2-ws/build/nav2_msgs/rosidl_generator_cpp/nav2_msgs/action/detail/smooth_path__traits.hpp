// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:action/SmoothPath.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__ACTION__DETAIL__SMOOTH_PATH__TRAITS_HPP_
#define NAV2_MSGS__ACTION__DETAIL__SMOOTH_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav2_msgs/action/detail/smooth_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__traits.hpp"
// Member 'max_smoothing_duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace nav2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SmoothPath_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: path
  {
    out << "path: ";
    to_flow_style_yaml(msg.path, out);
    out << ", ";
  }

  // member: smoother_id
  {
    out << "smoother_id: ";
    rosidl_generator_traits::value_to_yaml(msg.smoother_id, out);
    out << ", ";
  }

  // member: max_smoothing_duration
  {
    out << "max_smoothing_duration: ";
    to_flow_style_yaml(msg.max_smoothing_duration, out);
    out << ", ";
  }

  // member: check_for_collisions
  {
    out << "check_for_collisions: ";
    rosidl_generator_traits::value_to_yaml(msg.check_for_collisions, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SmoothPath_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path:\n";
    to_block_style_yaml(msg.path, out, indentation + 2);
  }

  // member: smoother_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "smoother_id: ";
    rosidl_generator_traits::value_to_yaml(msg.smoother_id, out);
    out << "\n";
  }

  // member: max_smoothing_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_smoothing_duration:\n";
    to_block_style_yaml(msg.max_smoothing_duration, out, indentation + 2);
  }

  // member: check_for_collisions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "check_for_collisions: ";
    rosidl_generator_traits::value_to_yaml(msg.check_for_collisions, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SmoothPath_Goal & msg, bool use_flow_style = false)
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
  const nav2_msgs::action::SmoothPath_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::action::SmoothPath_Goal & msg)
{
  return nav2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::action::SmoothPath_Goal>()
{
  return "nav2_msgs::action::SmoothPath_Goal";
}

template<>
inline const char * name<nav2_msgs::action::SmoothPath_Goal>()
{
  return "nav2_msgs/action/SmoothPath_Goal";
}

template<>
struct has_fixed_size<nav2_msgs::action::SmoothPath_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav2_msgs::action::SmoothPath_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav2_msgs::action::SmoothPath_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'path'
// already included above
// #include "nav_msgs/msg/detail/path__traits.hpp"
// Member 'smoothing_duration'
// already included above
// #include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace nav2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SmoothPath_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: path
  {
    out << "path: ";
    to_flow_style_yaml(msg.path, out);
    out << ", ";
  }

  // member: smoothing_duration
  {
    out << "smoothing_duration: ";
    to_flow_style_yaml(msg.smoothing_duration, out);
    out << ", ";
  }

  // member: was_completed
  {
    out << "was_completed: ";
    rosidl_generator_traits::value_to_yaml(msg.was_completed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SmoothPath_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path:\n";
    to_block_style_yaml(msg.path, out, indentation + 2);
  }

  // member: smoothing_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "smoothing_duration:\n";
    to_block_style_yaml(msg.smoothing_duration, out, indentation + 2);
  }

  // member: was_completed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "was_completed: ";
    rosidl_generator_traits::value_to_yaml(msg.was_completed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SmoothPath_Result & msg, bool use_flow_style = false)
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
  const nav2_msgs::action::SmoothPath_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::action::SmoothPath_Result & msg)
{
  return nav2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::action::SmoothPath_Result>()
{
  return "nav2_msgs::action::SmoothPath_Result";
}

template<>
inline const char * name<nav2_msgs::action::SmoothPath_Result>()
{
  return "nav2_msgs/action/SmoothPath_Result";
}

template<>
struct has_fixed_size<nav2_msgs::action::SmoothPath_Result>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<nav_msgs::msg::Path>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::SmoothPath_Result>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<nav_msgs::msg::Path>::value> {};

template<>
struct is_message<nav2_msgs::action::SmoothPath_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace nav2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SmoothPath_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SmoothPath_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SmoothPath_Feedback & msg, bool use_flow_style = false)
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
  const nav2_msgs::action::SmoothPath_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::action::SmoothPath_Feedback & msg)
{
  return nav2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::action::SmoothPath_Feedback>()
{
  return "nav2_msgs::action::SmoothPath_Feedback";
}

template<>
inline const char * name<nav2_msgs::action::SmoothPath_Feedback>()
{
  return "nav2_msgs/action/SmoothPath_Feedback";
}

template<>
struct has_fixed_size<nav2_msgs::action::SmoothPath_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nav2_msgs::action::SmoothPath_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nav2_msgs::action::SmoothPath_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "nav2_msgs/action/detail/smooth_path__traits.hpp"

namespace nav2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SmoothPath_SendGoal_Request & msg,
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
  const SmoothPath_SendGoal_Request & msg,
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

inline std::string to_yaml(const SmoothPath_SendGoal_Request & msg, bool use_flow_style = false)
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
  const nav2_msgs::action::SmoothPath_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::action::SmoothPath_SendGoal_Request & msg)
{
  return nav2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::action::SmoothPath_SendGoal_Request>()
{
  return "nav2_msgs::action::SmoothPath_SendGoal_Request";
}

template<>
inline const char * name<nav2_msgs::action::SmoothPath_SendGoal_Request>()
{
  return "nav2_msgs/action/SmoothPath_SendGoal_Request";
}

template<>
struct has_fixed_size<nav2_msgs::action::SmoothPath_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<nav2_msgs::action::SmoothPath_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::SmoothPath_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<nav2_msgs::action::SmoothPath_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<nav2_msgs::action::SmoothPath_SendGoal_Request>
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
  const SmoothPath_SendGoal_Response & msg,
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
  const SmoothPath_SendGoal_Response & msg,
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

inline std::string to_yaml(const SmoothPath_SendGoal_Response & msg, bool use_flow_style = false)
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
  const nav2_msgs::action::SmoothPath_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::action::SmoothPath_SendGoal_Response & msg)
{
  return nav2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::action::SmoothPath_SendGoal_Response>()
{
  return "nav2_msgs::action::SmoothPath_SendGoal_Response";
}

template<>
inline const char * name<nav2_msgs::action::SmoothPath_SendGoal_Response>()
{
  return "nav2_msgs/action/SmoothPath_SendGoal_Response";
}

template<>
struct has_fixed_size<nav2_msgs::action::SmoothPath_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::SmoothPath_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<nav2_msgs::action::SmoothPath_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::SmoothPath_SendGoal>()
{
  return "nav2_msgs::action::SmoothPath_SendGoal";
}

template<>
inline const char * name<nav2_msgs::action::SmoothPath_SendGoal>()
{
  return "nav2_msgs/action/SmoothPath_SendGoal";
}

template<>
struct has_fixed_size<nav2_msgs::action::SmoothPath_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::action::SmoothPath_SendGoal_Request>::value &&
    has_fixed_size<nav2_msgs::action::SmoothPath_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::action::SmoothPath_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::action::SmoothPath_SendGoal_Request>::value &&
    has_bounded_size<nav2_msgs::action::SmoothPath_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<nav2_msgs::action::SmoothPath_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<nav2_msgs::action::SmoothPath_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nav2_msgs::action::SmoothPath_SendGoal_Response>
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
  const SmoothPath_GetResult_Request & msg,
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
  const SmoothPath_GetResult_Request & msg,
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

inline std::string to_yaml(const SmoothPath_GetResult_Request & msg, bool use_flow_style = false)
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
  const nav2_msgs::action::SmoothPath_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::action::SmoothPath_GetResult_Request & msg)
{
  return nav2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::action::SmoothPath_GetResult_Request>()
{
  return "nav2_msgs::action::SmoothPath_GetResult_Request";
}

template<>
inline const char * name<nav2_msgs::action::SmoothPath_GetResult_Request>()
{
  return "nav2_msgs/action/SmoothPath_GetResult_Request";
}

template<>
struct has_fixed_size<nav2_msgs::action::SmoothPath_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::SmoothPath_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<nav2_msgs::action::SmoothPath_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_msgs/action/detail/smooth_path__traits.hpp"

namespace nav2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SmoothPath_GetResult_Response & msg,
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
  const SmoothPath_GetResult_Response & msg,
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

inline std::string to_yaml(const SmoothPath_GetResult_Response & msg, bool use_flow_style = false)
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
  const nav2_msgs::action::SmoothPath_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::action::SmoothPath_GetResult_Response & msg)
{
  return nav2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::action::SmoothPath_GetResult_Response>()
{
  return "nav2_msgs::action::SmoothPath_GetResult_Response";
}

template<>
inline const char * name<nav2_msgs::action::SmoothPath_GetResult_Response>()
{
  return "nav2_msgs/action/SmoothPath_GetResult_Response";
}

template<>
struct has_fixed_size<nav2_msgs::action::SmoothPath_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<nav2_msgs::action::SmoothPath_Result>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::SmoothPath_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<nav2_msgs::action::SmoothPath_Result>::value> {};

template<>
struct is_message<nav2_msgs::action::SmoothPath_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::SmoothPath_GetResult>()
{
  return "nav2_msgs::action::SmoothPath_GetResult";
}

template<>
inline const char * name<nav2_msgs::action::SmoothPath_GetResult>()
{
  return "nav2_msgs/action/SmoothPath_GetResult";
}

template<>
struct has_fixed_size<nav2_msgs::action::SmoothPath_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::action::SmoothPath_GetResult_Request>::value &&
    has_fixed_size<nav2_msgs::action::SmoothPath_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::action::SmoothPath_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::action::SmoothPath_GetResult_Request>::value &&
    has_bounded_size<nav2_msgs::action::SmoothPath_GetResult_Response>::value
  >
{
};

template<>
struct is_service<nav2_msgs::action::SmoothPath_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<nav2_msgs::action::SmoothPath_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nav2_msgs::action::SmoothPath_GetResult_Response>
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
// #include "nav2_msgs/action/detail/smooth_path__traits.hpp"

namespace nav2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const SmoothPath_FeedbackMessage & msg,
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
  const SmoothPath_FeedbackMessage & msg,
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

inline std::string to_yaml(const SmoothPath_FeedbackMessage & msg, bool use_flow_style = false)
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
  const nav2_msgs::action::SmoothPath_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const nav2_msgs::action::SmoothPath_FeedbackMessage & msg)
{
  return nav2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<nav2_msgs::action::SmoothPath_FeedbackMessage>()
{
  return "nav2_msgs::action::SmoothPath_FeedbackMessage";
}

template<>
inline const char * name<nav2_msgs::action::SmoothPath_FeedbackMessage>()
{
  return "nav2_msgs/action/SmoothPath_FeedbackMessage";
}

template<>
struct has_fixed_size<nav2_msgs::action::SmoothPath_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<nav2_msgs::action::SmoothPath_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::SmoothPath_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<nav2_msgs::action::SmoothPath_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<nav2_msgs::action::SmoothPath_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<nav2_msgs::action::SmoothPath>
  : std::true_type
{
};

template<>
struct is_action_goal<nav2_msgs::action::SmoothPath_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<nav2_msgs::action::SmoothPath_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<nav2_msgs::action::SmoothPath_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // NAV2_MSGS__ACTION__DETAIL__SMOOTH_PATH__TRAITS_HPP_
