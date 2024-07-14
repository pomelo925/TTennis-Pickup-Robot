// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:msg/OdomInfo.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__ODOM_INFO__TRAITS_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__ODOM_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtabmap_msgs/msg/detail/odom_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'local_bundle_models'
#include "rtabmap_msgs/msg/detail/camera_models__traits.hpp"
// Member 'local_bundle_poses'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'transform'
// Member 'transform_filtered'
// Member 'transform_ground_truth'
// Member 'guess'
#include "geometry_msgs/msg/detail/transform__traits.hpp"
// Member 'words_values'
#include "rtabmap_msgs/msg/detail/key_point__traits.hpp"
// Member 'local_map_values'
#include "rtabmap_msgs/msg/detail/point3f__traits.hpp"
// Member 'local_scan_map'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"
// Member 'ref_corners'
// Member 'new_corners'
#include "rtabmap_msgs/msg/detail/point2f__traits.hpp"

namespace rtabmap_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OdomInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: lost
  {
    out << "lost: ";
    rosidl_generator_traits::value_to_yaml(msg.lost, out);
    out << ", ";
  }

  // member: matches
  {
    out << "matches: ";
    rosidl_generator_traits::value_to_yaml(msg.matches, out);
    out << ", ";
  }

  // member: inliers
  {
    out << "inliers: ";
    rosidl_generator_traits::value_to_yaml(msg.inliers, out);
    out << ", ";
  }

  // member: icp_inliers_ratio
  {
    out << "icp_inliers_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_inliers_ratio, out);
    out << ", ";
  }

  // member: icp_rotation
  {
    out << "icp_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_rotation, out);
    out << ", ";
  }

  // member: icp_translation
  {
    out << "icp_translation: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_translation, out);
    out << ", ";
  }

  // member: icp_structural_complexity
  {
    out << "icp_structural_complexity: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_structural_complexity, out);
    out << ", ";
  }

  // member: icp_structural_distribution
  {
    out << "icp_structural_distribution: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_structural_distribution, out);
    out << ", ";
  }

  // member: icp_correspondences
  {
    out << "icp_correspondences: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_correspondences, out);
    out << ", ";
  }

  // member: covariance
  {
    if (msg.covariance.size() == 0) {
      out << "covariance: []";
    } else {
      out << "covariance: [";
      size_t pending_items = msg.covariance.size();
      for (auto item : msg.covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: features
  {
    out << "features: ";
    rosidl_generator_traits::value_to_yaml(msg.features, out);
    out << ", ";
  }

  // member: local_map_size
  {
    out << "local_map_size: ";
    rosidl_generator_traits::value_to_yaml(msg.local_map_size, out);
    out << ", ";
  }

  // member: local_scan_map_size
  {
    out << "local_scan_map_size: ";
    rosidl_generator_traits::value_to_yaml(msg.local_scan_map_size, out);
    out << ", ";
  }

  // member: local_key_frames
  {
    out << "local_key_frames: ";
    rosidl_generator_traits::value_to_yaml(msg.local_key_frames, out);
    out << ", ";
  }

  // member: local_bundle_outliers
  {
    out << "local_bundle_outliers: ";
    rosidl_generator_traits::value_to_yaml(msg.local_bundle_outliers, out);
    out << ", ";
  }

  // member: local_bundle_constraints
  {
    out << "local_bundle_constraints: ";
    rosidl_generator_traits::value_to_yaml(msg.local_bundle_constraints, out);
    out << ", ";
  }

  // member: local_bundle_time
  {
    out << "local_bundle_time: ";
    rosidl_generator_traits::value_to_yaml(msg.local_bundle_time, out);
    out << ", ";
  }

  // member: key_frame_added
  {
    out << "key_frame_added: ";
    rosidl_generator_traits::value_to_yaml(msg.key_frame_added, out);
    out << ", ";
  }

  // member: time_estimation
  {
    out << "time_estimation: ";
    rosidl_generator_traits::value_to_yaml(msg.time_estimation, out);
    out << ", ";
  }

  // member: time_particle_filtering
  {
    out << "time_particle_filtering: ";
    rosidl_generator_traits::value_to_yaml(msg.time_particle_filtering, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: interval
  {
    out << "interval: ";
    rosidl_generator_traits::value_to_yaml(msg.interval, out);
    out << ", ";
  }

  // member: distance_travelled
  {
    out << "distance_travelled: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_travelled, out);
    out << ", ";
  }

  // member: memory_usage
  {
    out << "memory_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.memory_usage, out);
    out << ", ";
  }

  // member: gravity_roll_error
  {
    out << "gravity_roll_error: ";
    rosidl_generator_traits::value_to_yaml(msg.gravity_roll_error, out);
    out << ", ";
  }

  // member: gravity_pitch_error
  {
    out << "gravity_pitch_error: ";
    rosidl_generator_traits::value_to_yaml(msg.gravity_pitch_error, out);
    out << ", ";
  }

  // member: local_bundle_ids
  {
    if (msg.local_bundle_ids.size() == 0) {
      out << "local_bundle_ids: []";
    } else {
      out << "local_bundle_ids: [";
      size_t pending_items = msg.local_bundle_ids.size();
      for (auto item : msg.local_bundle_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: local_bundle_models
  {
    if (msg.local_bundle_models.size() == 0) {
      out << "local_bundle_models: []";
    } else {
      out << "local_bundle_models: [";
      size_t pending_items = msg.local_bundle_models.size();
      for (auto item : msg.local_bundle_models) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: local_bundle_poses
  {
    if (msg.local_bundle_poses.size() == 0) {
      out << "local_bundle_poses: []";
    } else {
      out << "local_bundle_poses: [";
      size_t pending_items = msg.local_bundle_poses.size();
      for (auto item : msg.local_bundle_poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: transform
  {
    out << "transform: ";
    to_flow_style_yaml(msg.transform, out);
    out << ", ";
  }

  // member: transform_filtered
  {
    out << "transform_filtered: ";
    to_flow_style_yaml(msg.transform_filtered, out);
    out << ", ";
  }

  // member: transform_ground_truth
  {
    out << "transform_ground_truth: ";
    to_flow_style_yaml(msg.transform_ground_truth, out);
    out << ", ";
  }

  // member: guess
  {
    out << "guess: ";
    to_flow_style_yaml(msg.guess, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: words_keys
  {
    if (msg.words_keys.size() == 0) {
      out << "words_keys: []";
    } else {
      out << "words_keys: [";
      size_t pending_items = msg.words_keys.size();
      for (auto item : msg.words_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: words_values
  {
    if (msg.words_values.size() == 0) {
      out << "words_values: []";
    } else {
      out << "words_values: [";
      size_t pending_items = msg.words_values.size();
      for (auto item : msg.words_values) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: word_matches
  {
    if (msg.word_matches.size() == 0) {
      out << "word_matches: []";
    } else {
      out << "word_matches: [";
      size_t pending_items = msg.word_matches.size();
      for (auto item : msg.word_matches) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: word_inliers
  {
    if (msg.word_inliers.size() == 0) {
      out << "word_inliers: []";
    } else {
      out << "word_inliers: [";
      size_t pending_items = msg.word_inliers.size();
      for (auto item : msg.word_inliers) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: local_map_keys
  {
    if (msg.local_map_keys.size() == 0) {
      out << "local_map_keys: []";
    } else {
      out << "local_map_keys: [";
      size_t pending_items = msg.local_map_keys.size();
      for (auto item : msg.local_map_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: local_map_values
  {
    if (msg.local_map_values.size() == 0) {
      out << "local_map_values: []";
    } else {
      out << "local_map_values: [";
      size_t pending_items = msg.local_map_values.size();
      for (auto item : msg.local_map_values) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: local_scan_map
  {
    out << "local_scan_map: ";
    to_flow_style_yaml(msg.local_scan_map, out);
    out << ", ";
  }

  // member: ref_corners
  {
    if (msg.ref_corners.size() == 0) {
      out << "ref_corners: []";
    } else {
      out << "ref_corners: [";
      size_t pending_items = msg.ref_corners.size();
      for (auto item : msg.ref_corners) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: new_corners
  {
    if (msg.new_corners.size() == 0) {
      out << "new_corners: []";
    } else {
      out << "new_corners: [";
      size_t pending_items = msg.new_corners.size();
      for (auto item : msg.new_corners) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: corner_inliers
  {
    if (msg.corner_inliers.size() == 0) {
      out << "corner_inliers: []";
    } else {
      out << "corner_inliers: [";
      size_t pending_items = msg.corner_inliers.size();
      for (auto item : msg.corner_inliers) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const OdomInfo & msg,
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

  // member: lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lost: ";
    rosidl_generator_traits::value_to_yaml(msg.lost, out);
    out << "\n";
  }

  // member: matches
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matches: ";
    rosidl_generator_traits::value_to_yaml(msg.matches, out);
    out << "\n";
  }

  // member: inliers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inliers: ";
    rosidl_generator_traits::value_to_yaml(msg.inliers, out);
    out << "\n";
  }

  // member: icp_inliers_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "icp_inliers_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_inliers_ratio, out);
    out << "\n";
  }

  // member: icp_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "icp_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_rotation, out);
    out << "\n";
  }

  // member: icp_translation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "icp_translation: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_translation, out);
    out << "\n";
  }

  // member: icp_structural_complexity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "icp_structural_complexity: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_structural_complexity, out);
    out << "\n";
  }

  // member: icp_structural_distribution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "icp_structural_distribution: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_structural_distribution, out);
    out << "\n";
  }

  // member: icp_correspondences
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "icp_correspondences: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_correspondences, out);
    out << "\n";
  }

  // member: covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.covariance.size() == 0) {
      out << "covariance: []\n";
    } else {
      out << "covariance:\n";
      for (auto item : msg.covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: features
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "features: ";
    rosidl_generator_traits::value_to_yaml(msg.features, out);
    out << "\n";
  }

  // member: local_map_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_map_size: ";
    rosidl_generator_traits::value_to_yaml(msg.local_map_size, out);
    out << "\n";
  }

  // member: local_scan_map_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_scan_map_size: ";
    rosidl_generator_traits::value_to_yaml(msg.local_scan_map_size, out);
    out << "\n";
  }

  // member: local_key_frames
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_key_frames: ";
    rosidl_generator_traits::value_to_yaml(msg.local_key_frames, out);
    out << "\n";
  }

  // member: local_bundle_outliers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_bundle_outliers: ";
    rosidl_generator_traits::value_to_yaml(msg.local_bundle_outliers, out);
    out << "\n";
  }

  // member: local_bundle_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_bundle_constraints: ";
    rosidl_generator_traits::value_to_yaml(msg.local_bundle_constraints, out);
    out << "\n";
  }

  // member: local_bundle_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_bundle_time: ";
    rosidl_generator_traits::value_to_yaml(msg.local_bundle_time, out);
    out << "\n";
  }

  // member: key_frame_added
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_frame_added: ";
    rosidl_generator_traits::value_to_yaml(msg.key_frame_added, out);
    out << "\n";
  }

  // member: time_estimation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_estimation: ";
    rosidl_generator_traits::value_to_yaml(msg.time_estimation, out);
    out << "\n";
  }

  // member: time_particle_filtering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_particle_filtering: ";
    rosidl_generator_traits::value_to_yaml(msg.time_particle_filtering, out);
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

  // member: interval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interval: ";
    rosidl_generator_traits::value_to_yaml(msg.interval, out);
    out << "\n";
  }

  // member: distance_travelled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_travelled: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_travelled, out);
    out << "\n";
  }

  // member: memory_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "memory_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.memory_usage, out);
    out << "\n";
  }

  // member: gravity_roll_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gravity_roll_error: ";
    rosidl_generator_traits::value_to_yaml(msg.gravity_roll_error, out);
    out << "\n";
  }

  // member: gravity_pitch_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gravity_pitch_error: ";
    rosidl_generator_traits::value_to_yaml(msg.gravity_pitch_error, out);
    out << "\n";
  }

  // member: local_bundle_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.local_bundle_ids.size() == 0) {
      out << "local_bundle_ids: []\n";
    } else {
      out << "local_bundle_ids:\n";
      for (auto item : msg.local_bundle_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: local_bundle_models
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.local_bundle_models.size() == 0) {
      out << "local_bundle_models: []\n";
    } else {
      out << "local_bundle_models:\n";
      for (auto item : msg.local_bundle_models) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: local_bundle_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.local_bundle_poses.size() == 0) {
      out << "local_bundle_poses: []\n";
    } else {
      out << "local_bundle_poses:\n";
      for (auto item : msg.local_bundle_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transform:\n";
    to_block_style_yaml(msg.transform, out, indentation + 2);
  }

  // member: transform_filtered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transform_filtered:\n";
    to_block_style_yaml(msg.transform_filtered, out, indentation + 2);
  }

  // member: transform_ground_truth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transform_ground_truth:\n";
    to_block_style_yaml(msg.transform_ground_truth, out, indentation + 2);
  }

  // member: guess
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "guess:\n";
    to_block_style_yaml(msg.guess, out, indentation + 2);
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: words_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.words_keys.size() == 0) {
      out << "words_keys: []\n";
    } else {
      out << "words_keys:\n";
      for (auto item : msg.words_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: words_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.words_values.size() == 0) {
      out << "words_values: []\n";
    } else {
      out << "words_values:\n";
      for (auto item : msg.words_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: word_matches
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.word_matches.size() == 0) {
      out << "word_matches: []\n";
    } else {
      out << "word_matches:\n";
      for (auto item : msg.word_matches) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: word_inliers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.word_inliers.size() == 0) {
      out << "word_inliers: []\n";
    } else {
      out << "word_inliers:\n";
      for (auto item : msg.word_inliers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: local_map_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.local_map_keys.size() == 0) {
      out << "local_map_keys: []\n";
    } else {
      out << "local_map_keys:\n";
      for (auto item : msg.local_map_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: local_map_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.local_map_values.size() == 0) {
      out << "local_map_values: []\n";
    } else {
      out << "local_map_values:\n";
      for (auto item : msg.local_map_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: local_scan_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_scan_map:\n";
    to_block_style_yaml(msg.local_scan_map, out, indentation + 2);
  }

  // member: ref_corners
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ref_corners.size() == 0) {
      out << "ref_corners: []\n";
    } else {
      out << "ref_corners:\n";
      for (auto item : msg.ref_corners) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: new_corners
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.new_corners.size() == 0) {
      out << "new_corners: []\n";
    } else {
      out << "new_corners:\n";
      for (auto item : msg.new_corners) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: corner_inliers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corner_inliers.size() == 0) {
      out << "corner_inliers: []\n";
    } else {
      out << "corner_inliers:\n";
      for (auto item : msg.corner_inliers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OdomInfo & msg, bool use_flow_style = false)
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
  const rtabmap_msgs::msg::OdomInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::msg::OdomInfo & msg)
{
  return rtabmap_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::msg::OdomInfo>()
{
  return "rtabmap_msgs::msg::OdomInfo";
}

template<>
inline const char * name<rtabmap_msgs::msg::OdomInfo>()
{
  return "rtabmap_msgs/msg/OdomInfo";
}

template<>
struct has_fixed_size<rtabmap_msgs::msg::OdomInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rtabmap_msgs::msg::OdomInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rtabmap_msgs::msg::OdomInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__MSG__DETAIL__ODOM_INFO__TRAITS_HPP_
