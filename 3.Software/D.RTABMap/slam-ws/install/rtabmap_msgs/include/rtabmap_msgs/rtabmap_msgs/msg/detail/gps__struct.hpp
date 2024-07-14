// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:msg/GPS.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__GPS__STRUCT_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__GPS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__msg__GPS __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__msg__GPS __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GPS_
{
  using Type = GPS_<ContainerAllocator>;

  explicit GPS_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stamp = 0.0;
      this->longitude = 0.0;
      this->latitude = 0.0;
      this->altitude = 0.0;
      this->error = 0.0;
      this->bearing = 0.0;
    }
  }

  explicit GPS_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stamp = 0.0;
      this->longitude = 0.0;
      this->latitude = 0.0;
      this->altitude = 0.0;
      this->error = 0.0;
      this->bearing = 0.0;
    }
  }

  // field types and members
  using _stamp_type =
    double;
  _stamp_type stamp;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _altitude_type =
    double;
  _altitude_type altitude;
  using _error_type =
    double;
  _error_type error;
  using _bearing_type =
    double;
  _bearing_type bearing;

  // setters for named parameter idiom
  Type & set__stamp(
    const double & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__error(
    const double & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__bearing(
    const double & _arg)
  {
    this->bearing = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::msg::GPS_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::msg::GPS_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::GPS_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::GPS_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::GPS_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::GPS_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::GPS_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::GPS_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::GPS_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::GPS_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__msg__GPS
    std::shared_ptr<rtabmap_msgs::msg::GPS_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__msg__GPS
    std::shared_ptr<rtabmap_msgs::msg::GPS_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GPS_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->bearing != other.bearing) {
      return false;
    }
    return true;
  }
  bool operator!=(const GPS_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GPS_

// alias to use template instance with default allocator
using GPS =
  rtabmap_msgs::msg::GPS_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__GPS__STRUCT_HPP_
