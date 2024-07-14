// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:srv/GetNodeData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__GET_NODE_DATA__TRAITS_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__GET_NODE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtabmap_msgs/srv/detail/get_node_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rtabmap_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetNodeData_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: ids
  {
    if (msg.ids.size() == 0) {
      out << "ids: []";
    } else {
      out << "ids: [";
      size_t pending_items = msg.ids.size();
      for (auto item : msg.ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: images
  {
    out << "images: ";
    rosidl_generator_traits::value_to_yaml(msg.images, out);
    out << ", ";
  }

  // member: scan
  {
    out << "scan: ";
    rosidl_generator_traits::value_to_yaml(msg.scan, out);
    out << ", ";
  }

  // member: grid
  {
    out << "grid: ";
    rosidl_generator_traits::value_to_yaml(msg.grid, out);
    out << ", ";
  }

  // member: user_data
  {
    out << "user_data: ";
    rosidl_generator_traits::value_to_yaml(msg.user_data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetNodeData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ids.size() == 0) {
      out << "ids: []\n";
    } else {
      out << "ids:\n";
      for (auto item : msg.ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: images
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "images: ";
    rosidl_generator_traits::value_to_yaml(msg.images, out);
    out << "\n";
  }

  // member: scan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan: ";
    rosidl_generator_traits::value_to_yaml(msg.scan, out);
    out << "\n";
  }

  // member: grid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grid: ";
    rosidl_generator_traits::value_to_yaml(msg.grid, out);
    out << "\n";
  }

  // member: user_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_data: ";
    rosidl_generator_traits::value_to_yaml(msg.user_data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetNodeData_Request & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::srv::GetNodeData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::GetNodeData_Request & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::GetNodeData_Request>()
{
  return "rtabmap_msgs::srv::GetNodeData_Request";
}

template<>
inline const char * name<rtabmap_msgs::srv::GetNodeData_Request>()
{
  return "rtabmap_msgs/srv/GetNodeData_Request";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::GetNodeData_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::GetNodeData_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtabmap_msgs::srv::GetNodeData_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'data'
#include "rtabmap_msgs/msg/detail/node__traits.hpp"

namespace rtabmap_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetNodeData_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
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
  const GetNodeData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetNodeData_Response & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::srv::GetNodeData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::GetNodeData_Response & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::GetNodeData_Response>()
{
  return "rtabmap_msgs::srv::GetNodeData_Response";
}

template<>
inline const char * name<rtabmap_msgs::srv::GetNodeData_Response>()
{
  return "rtabmap_msgs/srv/GetNodeData_Response";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::GetNodeData_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::GetNodeData_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtabmap_msgs::srv::GetNodeData_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::srv::GetNodeData>()
{
  return "rtabmap_msgs::srv::GetNodeData";
}

template<>
inline const char * name<rtabmap_msgs::srv::GetNodeData>()
{
  return "rtabmap_msgs/srv/GetNodeData";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::GetNodeData>
  : std::integral_constant<
    bool,
    has_fixed_size<rtabmap_msgs::srv::GetNodeData_Request>::value &&
    has_fixed_size<rtabmap_msgs::srv::GetNodeData_Response>::value
  >
{
};

template<>
struct has_bounded_size<rtabmap_msgs::srv::GetNodeData>
  : std::integral_constant<
    bool,
    has_bounded_size<rtabmap_msgs::srv::GetNodeData_Request>::value &&
    has_bounded_size<rtabmap_msgs::srv::GetNodeData_Response>::value
  >
{
};

template<>
struct is_service<rtabmap_msgs::srv::GetNodeData>
  : std::true_type
{
};

template<>
struct is_service_request<rtabmap_msgs::srv::GetNodeData_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rtabmap_msgs::srv::GetNodeData_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__SRV__DETAIL__GET_NODE_DATA__TRAITS_HPP_
