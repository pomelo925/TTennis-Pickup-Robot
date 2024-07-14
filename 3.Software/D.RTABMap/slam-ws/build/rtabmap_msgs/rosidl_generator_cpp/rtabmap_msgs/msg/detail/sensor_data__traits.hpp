// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtabmap_msgs/msg/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'left'
// Member 'right'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'left_camera_info'
// Member 'right_camera_info'
#include "sensor_msgs/msg/detail/camera_info__traits.hpp"
// Member 'local_transform'
// Member 'laser_scan_local_transform'
// Member 'imu_local_transform'
#include "geometry_msgs/msg/detail/transform__traits.hpp"
// Member 'laser_scan'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"
// Member 'grid_view_point'
// Member 'points'
#include "rtabmap_msgs/msg/detail/point3f__traits.hpp"
// Member 'key_points'
#include "rtabmap_msgs/msg/detail/key_point__traits.hpp"
// Member 'global_descriptors'
#include "rtabmap_msgs/msg/detail/global_descriptor__traits.hpp"
// Member 'env_sensors'
#include "rtabmap_msgs/msg/detail/env_sensor__traits.hpp"
// Member 'imu'
#include "sensor_msgs/msg/detail/imu__traits.hpp"
// Member 'landmarks'
#include "rtabmap_msgs/msg/detail/landmark_detection__traits.hpp"
// Member 'ground_truth_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'gps'
#include "rtabmap_msgs/msg/detail/gps__traits.hpp"

namespace rtabmap_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: left
  {
    out << "left: ";
    to_flow_style_yaml(msg.left, out);
    out << ", ";
  }

  // member: right
  {
    out << "right: ";
    to_flow_style_yaml(msg.right, out);
    out << ", ";
  }

  // member: left_compressed
  {
    if (msg.left_compressed.size() == 0) {
      out << "left_compressed: []";
    } else {
      out << "left_compressed: [";
      size_t pending_items = msg.left_compressed.size();
      for (auto item : msg.left_compressed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_compressed
  {
    if (msg.right_compressed.size() == 0) {
      out << "right_compressed: []";
    } else {
      out << "right_compressed: [";
      size_t pending_items = msg.right_compressed.size();
      for (auto item : msg.right_compressed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_camera_info
  {
    if (msg.left_camera_info.size() == 0) {
      out << "left_camera_info: []";
    } else {
      out << "left_camera_info: [";
      size_t pending_items = msg.left_camera_info.size();
      for (auto item : msg.left_camera_info) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_camera_info
  {
    if (msg.right_camera_info.size() == 0) {
      out << "right_camera_info: []";
    } else {
      out << "right_camera_info: [";
      size_t pending_items = msg.right_camera_info.size();
      for (auto item : msg.right_camera_info) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: local_transform
  {
    if (msg.local_transform.size() == 0) {
      out << "local_transform: []";
    } else {
      out << "local_transform: [";
      size_t pending_items = msg.local_transform.size();
      for (auto item : msg.local_transform) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: laser_scan
  {
    out << "laser_scan: ";
    to_flow_style_yaml(msg.laser_scan, out);
    out << ", ";
  }

  // member: laser_scan_compressed
  {
    if (msg.laser_scan_compressed.size() == 0) {
      out << "laser_scan_compressed: []";
    } else {
      out << "laser_scan_compressed: [";
      size_t pending_items = msg.laser_scan_compressed.size();
      for (auto item : msg.laser_scan_compressed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: laser_scan_max_pts
  {
    out << "laser_scan_max_pts: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_scan_max_pts, out);
    out << ", ";
  }

  // member: laser_scan_max_range
  {
    out << "laser_scan_max_range: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_scan_max_range, out);
    out << ", ";
  }

  // member: laser_scan_format
  {
    out << "laser_scan_format: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_scan_format, out);
    out << ", ";
  }

  // member: laser_scan_local_transform
  {
    out << "laser_scan_local_transform: ";
    to_flow_style_yaml(msg.laser_scan_local_transform, out);
    out << ", ";
  }

  // member: user_data
  {
    if (msg.user_data.size() == 0) {
      out << "user_data: []";
    } else {
      out << "user_data: [";
      size_t pending_items = msg.user_data.size();
      for (auto item : msg.user_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: grid_ground
  {
    if (msg.grid_ground.size() == 0) {
      out << "grid_ground: []";
    } else {
      out << "grid_ground: [";
      size_t pending_items = msg.grid_ground.size();
      for (auto item : msg.grid_ground) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: grid_obstacles
  {
    if (msg.grid_obstacles.size() == 0) {
      out << "grid_obstacles: []";
    } else {
      out << "grid_obstacles: [";
      size_t pending_items = msg.grid_obstacles.size();
      for (auto item : msg.grid_obstacles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: grid_empty_cells
  {
    if (msg.grid_empty_cells.size() == 0) {
      out << "grid_empty_cells: []";
    } else {
      out << "grid_empty_cells: [";
      size_t pending_items = msg.grid_empty_cells.size();
      for (auto item : msg.grid_empty_cells) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: grid_cell_size
  {
    out << "grid_cell_size: ";
    rosidl_generator_traits::value_to_yaml(msg.grid_cell_size, out);
    out << ", ";
  }

  // member: grid_view_point
  {
    out << "grid_view_point: ";
    to_flow_style_yaml(msg.grid_view_point, out);
    out << ", ";
  }

  // member: key_points
  {
    if (msg.key_points.size() == 0) {
      out << "key_points: []";
    } else {
      out << "key_points: [";
      size_t pending_items = msg.key_points.size();
      for (auto item : msg.key_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: descriptors
  {
    if (msg.descriptors.size() == 0) {
      out << "descriptors: []";
    } else {
      out << "descriptors: [";
      size_t pending_items = msg.descriptors.size();
      for (auto item : msg.descriptors) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: global_descriptors
  {
    if (msg.global_descriptors.size() == 0) {
      out << "global_descriptors: []";
    } else {
      out << "global_descriptors: [";
      size_t pending_items = msg.global_descriptors.size();
      for (auto item : msg.global_descriptors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: env_sensors
  {
    if (msg.env_sensors.size() == 0) {
      out << "env_sensors: []";
    } else {
      out << "env_sensors: [";
      size_t pending_items = msg.env_sensors.size();
      for (auto item : msg.env_sensors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: imu
  {
    out << "imu: ";
    to_flow_style_yaml(msg.imu, out);
    out << ", ";
  }

  // member: imu_local_transform
  {
    out << "imu_local_transform: ";
    to_flow_style_yaml(msg.imu_local_transform, out);
    out << ", ";
  }

  // member: landmarks
  {
    if (msg.landmarks.size() == 0) {
      out << "landmarks: []";
    } else {
      out << "landmarks: [";
      size_t pending_items = msg.landmarks.size();
      for (auto item : msg.landmarks) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ground_truth_pose
  {
    out << "ground_truth_pose: ";
    to_flow_style_yaml(msg.ground_truth_pose, out);
    out << ", ";
  }

  // member: gps
  {
    out << "gps: ";
    to_flow_style_yaml(msg.gps, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorData & msg,
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

  // member: left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left:\n";
    to_block_style_yaml(msg.left, out, indentation + 2);
  }

  // member: right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right:\n";
    to_block_style_yaml(msg.right, out, indentation + 2);
  }

  // member: left_compressed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_compressed.size() == 0) {
      out << "left_compressed: []\n";
    } else {
      out << "left_compressed:\n";
      for (auto item : msg.left_compressed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_compressed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_compressed.size() == 0) {
      out << "right_compressed: []\n";
    } else {
      out << "right_compressed:\n";
      for (auto item : msg.right_compressed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: left_camera_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_camera_info.size() == 0) {
      out << "left_camera_info: []\n";
    } else {
      out << "left_camera_info:\n";
      for (auto item : msg.left_camera_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: right_camera_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_camera_info.size() == 0) {
      out << "right_camera_info: []\n";
    } else {
      out << "right_camera_info:\n";
      for (auto item : msg.right_camera_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: local_transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.local_transform.size() == 0) {
      out << "local_transform: []\n";
    } else {
      out << "local_transform:\n";
      for (auto item : msg.local_transform) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: laser_scan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laser_scan:\n";
    to_block_style_yaml(msg.laser_scan, out, indentation + 2);
  }

  // member: laser_scan_compressed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.laser_scan_compressed.size() == 0) {
      out << "laser_scan_compressed: []\n";
    } else {
      out << "laser_scan_compressed:\n";
      for (auto item : msg.laser_scan_compressed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: laser_scan_max_pts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laser_scan_max_pts: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_scan_max_pts, out);
    out << "\n";
  }

  // member: laser_scan_max_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laser_scan_max_range: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_scan_max_range, out);
    out << "\n";
  }

  // member: laser_scan_format
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laser_scan_format: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_scan_format, out);
    out << "\n";
  }

  // member: laser_scan_local_transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laser_scan_local_transform:\n";
    to_block_style_yaml(msg.laser_scan_local_transform, out, indentation + 2);
  }

  // member: user_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.user_data.size() == 0) {
      out << "user_data: []\n";
    } else {
      out << "user_data:\n";
      for (auto item : msg.user_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: grid_ground
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.grid_ground.size() == 0) {
      out << "grid_ground: []\n";
    } else {
      out << "grid_ground:\n";
      for (auto item : msg.grid_ground) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: grid_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.grid_obstacles.size() == 0) {
      out << "grid_obstacles: []\n";
    } else {
      out << "grid_obstacles:\n";
      for (auto item : msg.grid_obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: grid_empty_cells
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.grid_empty_cells.size() == 0) {
      out << "grid_empty_cells: []\n";
    } else {
      out << "grid_empty_cells:\n";
      for (auto item : msg.grid_empty_cells) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: grid_cell_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grid_cell_size: ";
    rosidl_generator_traits::value_to_yaml(msg.grid_cell_size, out);
    out << "\n";
  }

  // member: grid_view_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grid_view_point:\n";
    to_block_style_yaml(msg.grid_view_point, out, indentation + 2);
  }

  // member: key_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.key_points.size() == 0) {
      out << "key_points: []\n";
    } else {
      out << "key_points:\n";
      for (auto item : msg.key_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: descriptors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.descriptors.size() == 0) {
      out << "descriptors: []\n";
    } else {
      out << "descriptors:\n";
      for (auto item : msg.descriptors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: global_descriptors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.global_descriptors.size() == 0) {
      out << "global_descriptors: []\n";
    } else {
      out << "global_descriptors:\n";
      for (auto item : msg.global_descriptors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: env_sensors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.env_sensors.size() == 0) {
      out << "env_sensors: []\n";
    } else {
      out << "env_sensors:\n";
      for (auto item : msg.env_sensors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: imu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu:\n";
    to_block_style_yaml(msg.imu, out, indentation + 2);
  }

  // member: imu_local_transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_local_transform:\n";
    to_block_style_yaml(msg.imu_local_transform, out, indentation + 2);
  }

  // member: landmarks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.landmarks.size() == 0) {
      out << "landmarks: []\n";
    } else {
      out << "landmarks:\n";
      for (auto item : msg.landmarks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: ground_truth_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground_truth_pose:\n";
    to_block_style_yaml(msg.ground_truth_pose, out, indentation + 2);
  }

  // member: gps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps:\n";
    to_block_style_yaml(msg.gps, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorData & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::msg::SensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::msg::SensorData & msg)
{
  return rtabmap_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::msg::SensorData>()
{
  return "rtabmap_msgs::msg::SensorData";
}

template<>
inline const char * name<rtabmap_msgs::msg::SensorData>()
{
  return "rtabmap_msgs/msg/SensorData";
}

template<>
struct has_fixed_size<rtabmap_msgs::msg::SensorData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_msgs::msg::SensorData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtabmap_msgs::msg::SensorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_
