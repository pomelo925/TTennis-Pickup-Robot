// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__NODE__STRUCT_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__NODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'word_kpts'
#include "rtabmap_msgs/msg/detail/key_point__struct.hpp"
// Member 'word_pts'
#include "rtabmap_msgs/msg/detail/point3f__struct.hpp"
// Member 'data'
#include "rtabmap_msgs/msg/detail/sensor_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__msg__Node __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__msg__Node __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Node_
{
  using Type = Node_<ContainerAllocator>;

  explicit Node_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->map_id = 0l;
      this->weight = 0l;
      this->stamp = 0.0;
      this->label = "";
    }
  }

  explicit Node_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc),
    pose(_alloc, _init),
    data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->map_id = 0l;
      this->weight = 0l;
      this->stamp = 0.0;
      this->label = "";
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _map_id_type =
    int32_t;
  _map_id_type map_id;
  using _weight_type =
    int32_t;
  _weight_type weight;
  using _stamp_type =
    double;
  _stamp_type stamp;
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_type label;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _word_id_keys_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _word_id_keys_type word_id_keys;
  using _word_id_values_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _word_id_values_type word_id_values;
  using _word_kpts_type =
    std::vector<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>>>;
  _word_kpts_type word_kpts;
  using _word_pts_type =
    std::vector<rtabmap_msgs::msg::Point3f_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::Point3f_<ContainerAllocator>>>;
  _word_pts_type word_pts;
  using _word_descriptors_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _word_descriptors_type word_descriptors;
  using _data_type =
    rtabmap_msgs::msg::SensorData_<ContainerAllocator>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__map_id(
    const int32_t & _arg)
  {
    this->map_id = _arg;
    return *this;
  }
  Type & set__weight(
    const int32_t & _arg)
  {
    this->weight = _arg;
    return *this;
  }
  Type & set__stamp(
    const double & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__word_id_keys(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->word_id_keys = _arg;
    return *this;
  }
  Type & set__word_id_values(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->word_id_values = _arg;
    return *this;
  }
  Type & set__word_kpts(
    const std::vector<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::KeyPoint_<ContainerAllocator>>> & _arg)
  {
    this->word_kpts = _arg;
    return *this;
  }
  Type & set__word_pts(
    const std::vector<rtabmap_msgs::msg::Point3f_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rtabmap_msgs::msg::Point3f_<ContainerAllocator>>> & _arg)
  {
    this->word_pts = _arg;
    return *this;
  }
  Type & set__word_descriptors(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->word_descriptors = _arg;
    return *this;
  }
  Type & set__data(
    const rtabmap_msgs::msg::SensorData_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::msg::Node_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::msg::Node_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::Node_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::Node_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::Node_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::Node_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::Node_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::Node_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::Node_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::Node_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__msg__Node
    std::shared_ptr<rtabmap_msgs::msg::Node_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__msg__Node
    std::shared_ptr<rtabmap_msgs::msg::Node_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Node_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->map_id != other.map_id) {
      return false;
    }
    if (this->weight != other.weight) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->word_id_keys != other.word_id_keys) {
      return false;
    }
    if (this->word_id_values != other.word_id_values) {
      return false;
    }
    if (this->word_kpts != other.word_kpts) {
      return false;
    }
    if (this->word_pts != other.word_pts) {
      return false;
    }
    if (this->word_descriptors != other.word_descriptors) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Node_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Node_

// alias to use template instance with default allocator
using Node =
  rtabmap_msgs::msg::Node_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__NODE__STRUCT_HPP_
