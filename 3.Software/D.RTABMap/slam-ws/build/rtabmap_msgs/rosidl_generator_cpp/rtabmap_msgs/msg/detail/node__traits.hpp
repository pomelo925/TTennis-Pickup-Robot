// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__NODE__TRAITS_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__NODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtabmap_msgs/msg/detail/node__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'word_kpts'
#include "rtabmap_msgs/msg/detail/key_point__traits.hpp"
// Member 'word_pts'
#include "rtabmap_msgs/msg/detail/point3f__traits.hpp"
// Member 'data'
#include "rtabmap_msgs/msg/detail/sensor_data__traits.hpp"

namespace rtabmap_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Node & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: map_id
  {
    out << "map_id: ";
    rosidl_generator_traits::value_to_yaml(msg.map_id, out);
    out << ", ";
  }

  // member: weight
  {
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: word_id_keys
  {
    if (msg.word_id_keys.size() == 0) {
      out << "word_id_keys: []";
    } else {
      out << "word_id_keys: [";
      size_t pending_items = msg.word_id_keys.size();
      for (auto item : msg.word_id_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: word_id_values
  {
    if (msg.word_id_values.size() == 0) {
      out << "word_id_values: []";
    } else {
      out << "word_id_values: [";
      size_t pending_items = msg.word_id_values.size();
      for (auto item : msg.word_id_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: word_kpts
  {
    if (msg.word_kpts.size() == 0) {
      out << "word_kpts: []";
    } else {
      out << "word_kpts: [";
      size_t pending_items = msg.word_kpts.size();
      for (auto item : msg.word_kpts) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: word_pts
  {
    if (msg.word_pts.size() == 0) {
      out << "word_pts: []";
    } else {
      out << "word_pts: [";
      size_t pending_items = msg.word_pts.size();
      for (auto item : msg.word_pts) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: word_descriptors
  {
    if (msg.word_descriptors.size() == 0) {
      out << "word_descriptors: []";
    } else {
      out << "word_descriptors: [";
      size_t pending_items = msg.word_descriptors.size();
      for (auto item : msg.word_descriptors) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Node & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: map_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_id: ";
    rosidl_generator_traits::value_to_yaml(msg.map_id, out);
    out << "\n";
  }

  // member: weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.stamp, out);
    out << "\n";
  }

  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: word_id_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.word_id_keys.size() == 0) {
      out << "word_id_keys: []\n";
    } else {
      out << "word_id_keys:\n";
      for (auto item : msg.word_id_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: word_id_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.word_id_values.size() == 0) {
      out << "word_id_values: []\n";
    } else {
      out << "word_id_values:\n";
      for (auto item : msg.word_id_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: word_kpts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.word_kpts.size() == 0) {
      out << "word_kpts: []\n";
    } else {
      out << "word_kpts:\n";
      for (auto item : msg.word_kpts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: word_pts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.word_pts.size() == 0) {
      out << "word_pts: []\n";
    } else {
      out << "word_pts:\n";
      for (auto item : msg.word_pts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: word_descriptors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.word_descriptors.size() == 0) {
      out << "word_descriptors: []\n";
    } else {
      out << "word_descriptors:\n";
      for (auto item : msg.word_descriptors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Node & msg, bool use_flow_style = false)
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

}  // namespace rtabmap_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rtabmap_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rtabmap_msgs::msg::Node & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::msg::Node & msg)
{
  return rtabmap_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::msg::Node>()
{
  return "rtabmap_msgs::msg::Node";
}

template<>
inline const char * name<rtabmap_msgs::msg::Node>()
{
  return "rtabmap_msgs/msg/Node";
}

template<>
struct has_fixed_size<rtabmap_msgs::msg::Node>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_msgs::msg::Node>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtabmap_msgs::msg::Node>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__MSG__DETAIL__NODE__TRAITS_HPP_
