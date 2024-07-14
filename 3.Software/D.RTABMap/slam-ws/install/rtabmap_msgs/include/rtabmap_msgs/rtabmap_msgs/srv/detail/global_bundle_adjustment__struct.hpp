// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:srv/GlobalBundleAdjustment.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__GLOBAL_BUNDLE_ADJUSTMENT__STRUCT_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__GLOBAL_BUNDLE_ADJUSTMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__GlobalBundleAdjustment_Request __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__GlobalBundleAdjustment_Request __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GlobalBundleAdjustment_Request_
{
  using Type = GlobalBundleAdjustment_Request_<ContainerAllocator>;

  explicit GlobalBundleAdjustment_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
      this->iterations = 0l;
      this->pixel_variance = 0.0f;
      this->voc_matches = false;
    }
  }

  explicit GlobalBundleAdjustment_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
      this->iterations = 0l;
      this->pixel_variance = 0.0f;
      this->voc_matches = false;
    }
  }

  // field types and members
  using _type_type =
    int32_t;
  _type_type type;
  using _iterations_type =
    int32_t;
  _iterations_type iterations;
  using _pixel_variance_type =
    float;
  _pixel_variance_type pixel_variance;
  using _voc_matches_type =
    bool;
  _voc_matches_type voc_matches;

  // setters for named parameter idiom
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__iterations(
    const int32_t & _arg)
  {
    this->iterations = _arg;
    return *this;
  }
  Type & set__pixel_variance(
    const float & _arg)
  {
    this->pixel_variance = _arg;
    return *this;
  }
  Type & set__voc_matches(
    const bool & _arg)
  {
    this->voc_matches = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::srv::GlobalBundleAdjustment_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::GlobalBundleAdjustment_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::GlobalBundleAdjustment_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::GlobalBundleAdjustment_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::GlobalBundleAdjustment_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::GlobalBundleAdjustment_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::GlobalBundleAdjustment_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::GlobalBundleAdjustment_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::GlobalBundleAdjustment_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::GlobalBundleAdjustment_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__GlobalBundleAdjustment_Request
    std::shared_ptr<rtabmap_msgs::srv::GlobalBundleAdjustment_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__GlobalBundleAdjustment_Request
    std::shared_ptr<rtabmap_msgs::srv::GlobalBundleAdjustment_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalBundleAdjustment_Request_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->iterations != other.iterations) {
      return false;
    }
    if (this->pixel_variance != other.pixel_variance) {
      return false;
    }
    if (this->voc_matches != other.voc_matches) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalBundleAdjustment_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalBundleAdjustment_Request_

// alias to use template instance with default allocator
using GlobalBundleAdjustment_Request =
  rtabmap_msgs::srv::GlobalBundleAdjustment_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs


#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__GlobalBundleAdjustment_Response __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__GlobalBundleAdjustment_Response __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GlobalBundleAdjustment_Response_
{
  using Type = GlobalBundleAdjustment_Response_<ContainerAllocator>;

  explicit GlobalBundleAdjustment_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GlobalBundleAdjustment_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::srv::GlobalBundleAdjustment_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::GlobalBundleAdjustment_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::GlobalBundleAdjustment_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::GlobalBundleAdjustment_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::GlobalBundleAdjustment_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::GlobalBundleAdjustment_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::GlobalBundleAdjustment_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::GlobalBundleAdjustment_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::GlobalBundleAdjustment_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::GlobalBundleAdjustment_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__GlobalBundleAdjustment_Response
    std::shared_ptr<rtabmap_msgs::srv::GlobalBundleAdjustment_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__GlobalBundleAdjustment_Response
    std::shared_ptr<rtabmap_msgs::srv::GlobalBundleAdjustment_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalBundleAdjustment_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalBundleAdjustment_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalBundleAdjustment_Response_

// alias to use template instance with default allocator
using GlobalBundleAdjustment_Response =
  rtabmap_msgs::srv::GlobalBundleAdjustment_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs

namespace rtabmap_msgs
{

namespace srv
{

struct GlobalBundleAdjustment
{
  using Request = rtabmap_msgs::srv::GlobalBundleAdjustment_Request;
  using Response = rtabmap_msgs::srv::GlobalBundleAdjustment_Response;
};

}  // namespace srv

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__GLOBAL_BUNDLE_ADJUSTMENT__STRUCT_HPP_
