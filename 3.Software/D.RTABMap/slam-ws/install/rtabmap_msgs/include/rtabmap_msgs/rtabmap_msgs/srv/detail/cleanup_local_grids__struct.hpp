// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:srv/CleanupLocalGrids.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__CLEANUP_LOCAL_GRIDS__STRUCT_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__CLEANUP_LOCAL_GRIDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__CleanupLocalGrids_Request __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__CleanupLocalGrids_Request __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CleanupLocalGrids_Request_
{
  using Type = CleanupLocalGrids_Request_<ContainerAllocator>;

  explicit CleanupLocalGrids_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius = 0l;
      this->filter_scans = false;
    }
  }

  explicit CleanupLocalGrids_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius = 0l;
      this->filter_scans = false;
    }
  }

  // field types and members
  using _radius_type =
    int32_t;
  _radius_type radius;
  using _filter_scans_type =
    bool;
  _filter_scans_type filter_scans;

  // setters for named parameter idiom
  Type & set__radius(
    const int32_t & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__filter_scans(
    const bool & _arg)
  {
    this->filter_scans = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::srv::CleanupLocalGrids_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::CleanupLocalGrids_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::CleanupLocalGrids_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::CleanupLocalGrids_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::CleanupLocalGrids_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::CleanupLocalGrids_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::CleanupLocalGrids_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::CleanupLocalGrids_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::CleanupLocalGrids_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::CleanupLocalGrids_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__CleanupLocalGrids_Request
    std::shared_ptr<rtabmap_msgs::srv::CleanupLocalGrids_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__CleanupLocalGrids_Request
    std::shared_ptr<rtabmap_msgs::srv::CleanupLocalGrids_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CleanupLocalGrids_Request_ & other) const
  {
    if (this->radius != other.radius) {
      return false;
    }
    if (this->filter_scans != other.filter_scans) {
      return false;
    }
    return true;
  }
  bool operator!=(const CleanupLocalGrids_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CleanupLocalGrids_Request_

// alias to use template instance with default allocator
using CleanupLocalGrids_Request =
  rtabmap_msgs::srv::CleanupLocalGrids_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs


#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__CleanupLocalGrids_Response __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__CleanupLocalGrids_Response __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CleanupLocalGrids_Response_
{
  using Type = CleanupLocalGrids_Response_<ContainerAllocator>;

  explicit CleanupLocalGrids_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->modified = 0l;
    }
  }

  explicit CleanupLocalGrids_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->modified = 0l;
    }
  }

  // field types and members
  using _modified_type =
    int32_t;
  _modified_type modified;

  // setters for named parameter idiom
  Type & set__modified(
    const int32_t & _arg)
  {
    this->modified = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::srv::CleanupLocalGrids_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::CleanupLocalGrids_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::CleanupLocalGrids_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::CleanupLocalGrids_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::CleanupLocalGrids_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::CleanupLocalGrids_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::CleanupLocalGrids_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::CleanupLocalGrids_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::CleanupLocalGrids_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::CleanupLocalGrids_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__CleanupLocalGrids_Response
    std::shared_ptr<rtabmap_msgs::srv::CleanupLocalGrids_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__CleanupLocalGrids_Response
    std::shared_ptr<rtabmap_msgs::srv::CleanupLocalGrids_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CleanupLocalGrids_Response_ & other) const
  {
    if (this->modified != other.modified) {
      return false;
    }
    return true;
  }
  bool operator!=(const CleanupLocalGrids_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CleanupLocalGrids_Response_

// alias to use template instance with default allocator
using CleanupLocalGrids_Response =
  rtabmap_msgs::srv::CleanupLocalGrids_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs

namespace rtabmap_msgs
{

namespace srv
{

struct CleanupLocalGrids
{
  using Request = rtabmap_msgs::srv::CleanupLocalGrids_Request;
  using Response = rtabmap_msgs::srv::CleanupLocalGrids_Response;
};

}  // namespace srv

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__CLEANUP_LOCAL_GRIDS__STRUCT_HPP_
