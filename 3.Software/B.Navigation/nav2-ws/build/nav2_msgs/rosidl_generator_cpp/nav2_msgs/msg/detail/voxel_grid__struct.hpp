// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:msg/VoxelGrid.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__VOXEL_GRID__STRUCT_HPP_
#define NAV2_MSGS__MSG__DETAIL__VOXEL_GRID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'origin'
#include "geometry_msgs/msg/detail/point32__struct.hpp"
// Member 'resolutions'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__msg__VoxelGrid __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__msg__VoxelGrid __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VoxelGrid_
{
  using Type = VoxelGrid_<ContainerAllocator>;

  explicit VoxelGrid_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    origin(_init),
    resolutions(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->size_x = 0ul;
      this->size_y = 0ul;
      this->size_z = 0ul;
    }
  }

  explicit VoxelGrid_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    origin(_alloc, _init),
    resolutions(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->size_x = 0ul;
      this->size_y = 0ul;
      this->size_z = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _data_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _data_type data;
  using _origin_type =
    geometry_msgs::msg::Point32_<ContainerAllocator>;
  _origin_type origin;
  using _resolutions_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _resolutions_type resolutions;
  using _size_x_type =
    uint32_t;
  _size_x_type size_x;
  using _size_y_type =
    uint32_t;
  _size_y_type size_y;
  using _size_z_type =
    uint32_t;
  _size_z_type size_z;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__origin(
    const geometry_msgs::msg::Point32_<ContainerAllocator> & _arg)
  {
    this->origin = _arg;
    return *this;
  }
  Type & set__resolutions(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->resolutions = _arg;
    return *this;
  }
  Type & set__size_x(
    const uint32_t & _arg)
  {
    this->size_x = _arg;
    return *this;
  }
  Type & set__size_y(
    const uint32_t & _arg)
  {
    this->size_y = _arg;
    return *this;
  }
  Type & set__size_z(
    const uint32_t & _arg)
  {
    this->size_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::msg::VoxelGrid_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::msg::VoxelGrid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::msg::VoxelGrid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::msg::VoxelGrid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::VoxelGrid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::VoxelGrid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::VoxelGrid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::VoxelGrid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::msg::VoxelGrid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::msg::VoxelGrid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__msg__VoxelGrid
    std::shared_ptr<nav2_msgs::msg::VoxelGrid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__msg__VoxelGrid
    std::shared_ptr<nav2_msgs::msg::VoxelGrid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VoxelGrid_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->origin != other.origin) {
      return false;
    }
    if (this->resolutions != other.resolutions) {
      return false;
    }
    if (this->size_x != other.size_x) {
      return false;
    }
    if (this->size_y != other.size_y) {
      return false;
    }
    if (this->size_z != other.size_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const VoxelGrid_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VoxelGrid_

// alias to use template instance with default allocator
using VoxelGrid =
  nav2_msgs::msg::VoxelGrid_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__VOXEL_GRID__STRUCT_HPP_
