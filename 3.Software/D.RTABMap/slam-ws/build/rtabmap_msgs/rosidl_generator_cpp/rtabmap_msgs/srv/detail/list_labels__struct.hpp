// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:srv/ListLabels.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__LIST_LABELS__STRUCT_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__LIST_LABELS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__ListLabels_Request __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__ListLabels_Request __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListLabels_Request_
{
  using Type = ListLabels_Request_<ContainerAllocator>;

  explicit ListLabels_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ListLabels_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    rtabmap_msgs::srv::ListLabels_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::ListLabels_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::ListLabels_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::ListLabels_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::ListLabels_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::ListLabels_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::ListLabels_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::ListLabels_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::ListLabels_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::ListLabels_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__ListLabels_Request
    std::shared_ptr<rtabmap_msgs::srv::ListLabels_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__ListLabels_Request
    std::shared_ptr<rtabmap_msgs::srv::ListLabels_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListLabels_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListLabels_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListLabels_Request_

// alias to use template instance with default allocator
using ListLabels_Request =
  rtabmap_msgs::srv::ListLabels_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs


#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__srv__ListLabels_Response __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__srv__ListLabels_Response __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListLabels_Response_
{
  using Type = ListLabels_Response_<ContainerAllocator>;

  explicit ListLabels_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ListLabels_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _ids_type ids;
  using _labels_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _labels_type labels;

  // setters for named parameter idiom
  Type & set__ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->ids = _arg;
    return *this;
  }
  Type & set__labels(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->labels = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::srv::ListLabels_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::srv::ListLabels_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::ListLabels_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::srv::ListLabels_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::ListLabels_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::ListLabels_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::srv::ListLabels_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::srv::ListLabels_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::ListLabels_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::srv::ListLabels_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__srv__ListLabels_Response
    std::shared_ptr<rtabmap_msgs::srv::ListLabels_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__srv__ListLabels_Response
    std::shared_ptr<rtabmap_msgs::srv::ListLabels_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListLabels_Response_ & other) const
  {
    if (this->ids != other.ids) {
      return false;
    }
    if (this->labels != other.labels) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListLabels_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListLabels_Response_

// alias to use template instance with default allocator
using ListLabels_Response =
  rtabmap_msgs::srv::ListLabels_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rtabmap_msgs

namespace rtabmap_msgs
{

namespace srv
{

struct ListLabels
{
  using Request = rtabmap_msgs::srv::ListLabels_Request;
  using Response = rtabmap_msgs::srv::ListLabels_Response;
};

}  // namespace srv

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__LIST_LABELS__STRUCT_HPP_
