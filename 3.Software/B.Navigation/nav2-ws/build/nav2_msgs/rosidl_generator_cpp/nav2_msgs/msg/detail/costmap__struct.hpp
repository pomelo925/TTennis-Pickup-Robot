// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:msg/Costmap.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__COSTMAP__STRUCT_HPP_
#define NAV2_MSGS__MSG__DETAIL__COSTMAP__STRUCT_HPP_

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
// Member 'metadata'
#include "nav2_msgs/msg/detail/costmap_meta_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__msg__Costmap __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__msg__Costmap __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Costmap_
{
  using Type = Costmap_<ContainerAllocator>;

  explicit Costmap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    metadata(_init)
  {
    (void)_init;
  }

  explicit Costmap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    metadata(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _metadata_type =
    nav2_msgs::msg::CostmapMetaData_<ContainerAllocator>;
  _metadata_type metadata;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__metadata(
    const nav2_msgs::msg::CostmapMetaData_<ContainerAllocator> & _arg)
  {
    this->metadata = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::msg::Costmap_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::msg::Costmap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::msg::Costmap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::msg::Costmap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::Costmap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::Costmap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::Costmap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::Costmap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::msg::Costmap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::msg::Costmap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__msg__Costmap
    std::shared_ptr<nav2_msgs::msg::Costmap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__msg__Costmap
    std::shared_ptr<nav2_msgs::msg::Costmap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Costmap_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->metadata != other.metadata) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Costmap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Costmap_

// alias to use template instance with default allocator
using Costmap =
  nav2_msgs::msg::Costmap_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__COSTMAP__STRUCT_HPP_
