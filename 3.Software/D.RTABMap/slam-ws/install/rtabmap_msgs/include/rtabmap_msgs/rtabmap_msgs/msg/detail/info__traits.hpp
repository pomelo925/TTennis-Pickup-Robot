// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:msg/Info.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__INFO__TRAITS_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtabmap_msgs/msg/detail/info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'loop_closure_transform'
#include "geometry_msgs/msg/detail/transform__traits.hpp"
// Member 'odom_cache'
#include "rtabmap_msgs/msg/detail/map_graph__traits.hpp"

namespace rtabmap_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Info & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ref_id
  {
    out << "ref_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_id, out);
    out << ", ";
  }

  // member: loop_closure_id
  {
    out << "loop_closure_id: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_closure_id, out);
    out << ", ";
  }

  // member: proximity_detection_id
  {
    out << "proximity_detection_id: ";
    rosidl_generator_traits::value_to_yaml(msg.proximity_detection_id, out);
    out << ", ";
  }

  // member: landmark_id
  {
    out << "landmark_id: ";
    rosidl_generator_traits::value_to_yaml(msg.landmark_id, out);
    out << ", ";
  }

  // member: loop_closure_transform
  {
    out << "loop_closure_transform: ";
    to_flow_style_yaml(msg.loop_closure_transform, out);
    out << ", ";
  }

  // member: wm_state
  {
    if (msg.wm_state.size() == 0) {
      out << "wm_state: []";
    } else {
      out << "wm_state: [";
      size_t pending_items = msg.wm_state.size();
      for (auto item : msg.wm_state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: posterior_keys
  {
    if (msg.posterior_keys.size() == 0) {
      out << "posterior_keys: []";
    } else {
      out << "posterior_keys: [";
      size_t pending_items = msg.posterior_keys.size();
      for (auto item : msg.posterior_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: posterior_values
  {
    if (msg.posterior_values.size() == 0) {
      out << "posterior_values: []";
    } else {
      out << "posterior_values: [";
      size_t pending_items = msg.posterior_values.size();
      for (auto item : msg.posterior_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: likelihood_keys
  {
    if (msg.likelihood_keys.size() == 0) {
      out << "likelihood_keys: []";
    } else {
      out << "likelihood_keys: [";
      size_t pending_items = msg.likelihood_keys.size();
      for (auto item : msg.likelihood_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: likelihood_values
  {
    if (msg.likelihood_values.size() == 0) {
      out << "likelihood_values: []";
    } else {
      out << "likelihood_values: [";
      size_t pending_items = msg.likelihood_values.size();
      for (auto item : msg.likelihood_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: raw_likelihood_keys
  {
    if (msg.raw_likelihood_keys.size() == 0) {
      out << "raw_likelihood_keys: []";
    } else {
      out << "raw_likelihood_keys: [";
      size_t pending_items = msg.raw_likelihood_keys.size();
      for (auto item : msg.raw_likelihood_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: raw_likelihood_values
  {
    if (msg.raw_likelihood_values.size() == 0) {
      out << "raw_likelihood_values: []";
    } else {
      out << "raw_likelihood_values: [";
      size_t pending_items = msg.raw_likelihood_values.size();
      for (auto item : msg.raw_likelihood_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: weights_keys
  {
    if (msg.weights_keys.size() == 0) {
      out << "weights_keys: []";
    } else {
      out << "weights_keys: [";
      size_t pending_items = msg.weights_keys.size();
      for (auto item : msg.weights_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: weights_values
  {
    if (msg.weights_values.size() == 0) {
      out << "weights_values: []";
    } else {
      out << "weights_values: [";
      size_t pending_items = msg.weights_values.size();
      for (auto item : msg.weights_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: labels_keys
  {
    if (msg.labels_keys.size() == 0) {
      out << "labels_keys: []";
    } else {
      out << "labels_keys: [";
      size_t pending_items = msg.labels_keys.size();
      for (auto item : msg.labels_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: labels_values
  {
    if (msg.labels_values.size() == 0) {
      out << "labels_values: []";
    } else {
      out << "labels_values: [";
      size_t pending_items = msg.labels_values.size();
      for (auto item : msg.labels_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: stats_keys
  {
    if (msg.stats_keys.size() == 0) {
      out << "stats_keys: []";
    } else {
      out << "stats_keys: [";
      size_t pending_items = msg.stats_keys.size();
      for (auto item : msg.stats_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: stats_values
  {
    if (msg.stats_values.size() == 0) {
      out << "stats_values: []";
    } else {
      out << "stats_values: [";
      size_t pending_items = msg.stats_values.size();
      for (auto item : msg.stats_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: local_path
  {
    if (msg.local_path.size() == 0) {
      out << "local_path: []";
    } else {
      out << "local_path: [";
      size_t pending_items = msg.local_path.size();
      for (auto item : msg.local_path) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_goal_id
  {
    out << "current_goal_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_goal_id, out);
    out << ", ";
  }

  // member: odom_cache
  {
    out << "odom_cache: ";
    to_flow_style_yaml(msg.odom_cache, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Info & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: ref_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_id, out);
    out << "\n";
  }

  // member: loop_closure_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_closure_id: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_closure_id, out);
    out << "\n";
  }

  // member: proximity_detection_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "proximity_detection_id: ";
    rosidl_generator_traits::value_to_yaml(msg.proximity_detection_id, out);
    out << "\n";
  }

  // member: landmark_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "landmark_id: ";
    rosidl_generator_traits::value_to_yaml(msg.landmark_id, out);
    out << "\n";
  }

  // member: loop_closure_transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_closure_transform:\n";
    to_block_style_yaml(msg.loop_closure_transform, out, indentation + 2);
  }

  // member: wm_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wm_state.size() == 0) {
      out << "wm_state: []\n";
    } else {
      out << "wm_state:\n";
      for (auto item : msg.wm_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: posterior_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.posterior_keys.size() == 0) {
      out << "posterior_keys: []\n";
    } else {
      out << "posterior_keys:\n";
      for (auto item : msg.posterior_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: posterior_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.posterior_values.size() == 0) {
      out << "posterior_values: []\n";
    } else {
      out << "posterior_values:\n";
      for (auto item : msg.posterior_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: likelihood_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.likelihood_keys.size() == 0) {
      out << "likelihood_keys: []\n";
    } else {
      out << "likelihood_keys:\n";
      for (auto item : msg.likelihood_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: likelihood_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.likelihood_values.size() == 0) {
      out << "likelihood_values: []\n";
    } else {
      out << "likelihood_values:\n";
      for (auto item : msg.likelihood_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: raw_likelihood_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.raw_likelihood_keys.size() == 0) {
      out << "raw_likelihood_keys: []\n";
    } else {
      out << "raw_likelihood_keys:\n";
      for (auto item : msg.raw_likelihood_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: raw_likelihood_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.raw_likelihood_values.size() == 0) {
      out << "raw_likelihood_values: []\n";
    } else {
      out << "raw_likelihood_values:\n";
      for (auto item : msg.raw_likelihood_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: weights_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.weights_keys.size() == 0) {
      out << "weights_keys: []\n";
    } else {
      out << "weights_keys:\n";
      for (auto item : msg.weights_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: weights_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.weights_values.size() == 0) {
      out << "weights_values: []\n";
    } else {
      out << "weights_values:\n";
      for (auto item : msg.weights_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: labels_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.labels_keys.size() == 0) {
      out << "labels_keys: []\n";
    } else {
      out << "labels_keys:\n";
      for (auto item : msg.labels_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: labels_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.labels_values.size() == 0) {
      out << "labels_values: []\n";
    } else {
      out << "labels_values:\n";
      for (auto item : msg.labels_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: stats_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stats_keys.size() == 0) {
      out << "stats_keys: []\n";
    } else {
      out << "stats_keys:\n";
      for (auto item : msg.stats_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: stats_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stats_values.size() == 0) {
      out << "stats_values: []\n";
    } else {
      out << "stats_values:\n";
      for (auto item : msg.stats_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: local_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.local_path.size() == 0) {
      out << "local_path: []\n";
    } else {
      out << "local_path:\n";
      for (auto item : msg.local_path) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current_goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_goal_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_goal_id, out);
    out << "\n";
  }

  // member: odom_cache
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_cache:\n";
    to_block_style_yaml(msg.odom_cache, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Info & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::msg::Info & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::msg::Info & msg)
{
  return rtabmap_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::msg::Info>()
{
  return "rtabmap_msgs::msg::Info";
}

template<>
inline const char * name<rtabmap_msgs::msg::Info>()
{
  return "rtabmap_msgs/msg/Info";
}

template<>
struct has_fixed_size<rtabmap_msgs::msg::Info>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_msgs::msg::Info>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtabmap_msgs::msg::Info>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__MSG__DETAIL__INFO__TRAITS_HPP_
