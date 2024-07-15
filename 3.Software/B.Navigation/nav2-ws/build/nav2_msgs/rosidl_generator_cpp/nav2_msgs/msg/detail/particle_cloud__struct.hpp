// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:msg/ParticleCloud.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__PARTICLE_CLOUD__STRUCT_HPP_
#define NAV2_MSGS__MSG__DETAIL__PARTICLE_CLOUD__STRUCT_HPP_

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
// Member 'particles'
#include "nav2_msgs/msg/detail/particle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__msg__ParticleCloud __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__msg__ParticleCloud __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParticleCloud_
{
  using Type = ParticleCloud_<ContainerAllocator>;

  explicit ParticleCloud_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ParticleCloud_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _particles_type =
    std::vector<nav2_msgs::msg::Particle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::msg::Particle_<ContainerAllocator>>>;
  _particles_type particles;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__particles(
    const std::vector<nav2_msgs::msg::Particle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav2_msgs::msg::Particle_<ContainerAllocator>>> & _arg)
  {
    this->particles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::msg::ParticleCloud_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::msg::ParticleCloud_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::msg::ParticleCloud_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::msg::ParticleCloud_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::ParticleCloud_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::ParticleCloud_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::ParticleCloud_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::ParticleCloud_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::msg::ParticleCloud_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::msg::ParticleCloud_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__msg__ParticleCloud
    std::shared_ptr<nav2_msgs::msg::ParticleCloud_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__msg__ParticleCloud
    std::shared_ptr<nav2_msgs::msg::ParticleCloud_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParticleCloud_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->particles != other.particles) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParticleCloud_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParticleCloud_

// alias to use template instance with default allocator
using ParticleCloud =
  nav2_msgs::msg::ParticleCloud_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__PARTICLE_CLOUD__STRUCT_HPP_
