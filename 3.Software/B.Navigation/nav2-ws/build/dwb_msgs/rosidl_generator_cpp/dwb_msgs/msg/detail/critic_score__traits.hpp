// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dwb_msgs:msg/CriticScore.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__MSG__DETAIL__CRITIC_SCORE__TRAITS_HPP_
#define DWB_MSGS__MSG__DETAIL__CRITIC_SCORE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dwb_msgs/msg/detail/critic_score__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dwb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CriticScore & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: raw_score
  {
    out << "raw_score: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_score, out);
    out << ", ";
  }

  // member: scale
  {
    out << "scale: ";
    rosidl_generator_traits::value_to_yaml(msg.scale, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CriticScore & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: raw_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raw_score: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_score, out);
    out << "\n";
  }

  // member: scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale: ";
    rosidl_generator_traits::value_to_yaml(msg.scale, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CriticScore & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace dwb_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dwb_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dwb_msgs::msg::CriticScore & msg,
  std::ostream & out, size_t indentation = 0)
{
  dwb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dwb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dwb_msgs::msg::CriticScore & msg)
{
  return dwb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dwb_msgs::msg::CriticScore>()
{
  return "dwb_msgs::msg::CriticScore";
}

template<>
inline const char * name<dwb_msgs::msg::CriticScore>()
{
  return "dwb_msgs/msg/CriticScore";
}

template<>
struct has_fixed_size<dwb_msgs::msg::CriticScore>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dwb_msgs::msg::CriticScore>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dwb_msgs::msg::CriticScore>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DWB_MSGS__MSG__DETAIL__CRITIC_SCORE__TRAITS_HPP_
