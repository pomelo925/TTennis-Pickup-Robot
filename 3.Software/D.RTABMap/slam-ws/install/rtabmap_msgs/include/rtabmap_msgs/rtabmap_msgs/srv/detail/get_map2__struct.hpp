// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:srv/GetMap2.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__GET_MAP2__STRUCT_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__GET_MAP2__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__GetMap2_Request __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__GetMap2_Request __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetMap2_Request_
{
  using Type = GetMap2_Request_<ContainerAllocator>;

  explicit GetMap2_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->global_map = false;
      this->optimized = false;
      this->with_images = false;
      this->with_scans = false;
      this->with_user_data = false;
      this->with_grids = false;
      this->with_words = false;
      this->with_global_descriptors = false;
    }
  }

  explicit GetMap2_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->global_map = false;
      this->optimized = false;
      this->with_images = false;
      this->with_scans = false;
      this->with_user_data = false;
      this->with_grids = false;
      this->with_words = false;
      this->with_global_descriptors = false;
    }
  }

  // field types and members
  using _global_map_type =
    bool;
  _global_map_type global_map;
  using _optimized_type =
    bool;
  _optimized_type optimized;
  using _with_images_type =
    bool;
  _with_images_type with_images;
  using _with_scans_type =
    bool;
  _with_scans_type with_scans;
  using _with_user_data_type =
    bool;
  _with_user_data_type with_user_data;
  using _with_grids_type =
    bool;
  _with_grids_type with_grids;
  using _with_words_type =
    bool;
  _with_words_type with_words;
  using _with_global_descriptors_type =
    bool;
  _with_global_descriptors_type with_global_descriptors;

  // setters for named parameter idiom
  Type & set__global_map(
    const bool & _arg)
  {
    this->global_map = _arg;
    return *this;
  }
  Type & set__optimized(
    const bool & _arg)
  {
    this->optimized = _arg;
    return *this;
  }
  Type & set__with_images(
    const bool & _arg)
  {
    this->with_images = _arg;
    return *this;
  }
  Type & set__with_scans(
    const bool & _arg)
  {
    this->with_scans = _arg;
    return *this;
  }
  Type & set__with_user_data(
    const bool & _arg)
  {
    this->with_user_data = _arg;
    return *this;
  }
  Type & set__with_grids(
    const bool & _arg)
  {
    this->with_grids = _arg;
    return *this;
  }
  Type & set__with_words(
    const bool & _arg)
  {
    this->with_words = _arg;
    return *this;
  }
  Type & set__with_global_descriptors(
    const bool & _arg)
  {
    this->with_global_descriptors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::srv::GetMap2_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::GetMap2_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::GetMap2_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::GetMap2_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::GetMap2_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::GetMap2_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::GetMap2_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::GetMap2_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::GetMap2_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::GetMap2_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__GetMap2_Request
    std::shared_ptr<rtabmap_msgs::srv::GetMap2_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__GetMap2_Request
    std::shared_ptr<rtabmap_msgs::srv::GetMap2_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMap2_Request_ & other) const
  {
    if (this->global_map != other.global_map) {
      return false;
    }
    if (this->optimized != other.optimized) {
      return false;
    }
    if (this->with_images != other.with_images) {
      return false;
    }
    if (this->with_scans != other.with_scans) {
      return false;
    }
    if (this->with_user_data != other.with_user_data) {
      return false;
    }
    if (this->with_grids != other.with_grids) {
      return false;
    }
    if (this->with_words != other.with_words) {
      return false;
    }
    if (this->with_global_descriptors != other.with_global_descriptors) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMap2_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMap2_Request_

// alias to use template instance with default allocator
using GetMap2_Request =
  rtabmap_msgs::srv::GetMap2_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs


// Include directives for member types
// Member 'data'
#include "rtabmap_msgs/msg/detail/map_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__GetMap2_Response __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__GetMap2_Response __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetMap2_Response_
{
  using Type = GetMap2_Response_<ContainerAllocator>;

  explicit GetMap2_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_init)
  {
    (void)_init;
  }

  explicit GetMap2_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _data_type =
    rtabmap_msgs::msg::MapData_<ContainerAllocator>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const rtabmap_msgs::msg::MapData_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::srv::GetMap2_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::GetMap2_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::GetMap2_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::GetMap2_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::GetMap2_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::GetMap2_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::GetMap2_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::GetMap2_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::GetMap2_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::GetMap2_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__GetMap2_Response
    std::shared_ptr<rtabmap_msgs::srv::GetMap2_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__GetMap2_Response
    std::shared_ptr<rtabmap_msgs::srv::GetMap2_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMap2_Response_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMap2_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMap2_Response_

// alias to use template instance with default allocator
using GetMap2_Response =
  rtabmap_msgs::srv::GetMap2_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs

namespace rtabmap_msgs
{

namespace srv
{

struct GetMap2
{
  using Request = rtabmap_msgs::srv::GetMap2_Request;
  using Response = rtabmap_msgs::srv::GetMap2_Response;
};

}  // namespace srv

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__GET_MAP2__STRUCT_HPP_
