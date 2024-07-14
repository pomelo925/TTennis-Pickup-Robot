// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rtabmap_msgs:msg/Info.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__INFO__STRUCT_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__INFO__STRUCT_HPP_

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
// Member 'loop_closure_transform'
#include "geometry_msgs/msg/detail/transform__struct.hpp"
// Member 'odom_cache'
#include "rtabmap_msgs/msg/detail/map_graph__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rtabmap_msgs__msg__Info __attribute__((deprecated))
#else
# define DEPRECATED__rtabmap_msgs__msg__Info __declspec(deprecated)
#endif

namespace rtabmap_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Info_
{
  using Type = Info_<ContainerAllocator>;

  explicit Info_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    loop_closure_transform(_init),
    odom_cache(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ref_id = 0l;
      this->loop_closure_id = 0l;
      this->proximity_detection_id = 0l;
      this->landmark_id = 0l;
      this->current_goal_id = 0l;
    }
  }

  explicit Info_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    loop_closure_transform(_alloc, _init),
    odom_cache(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ref_id = 0l;
      this->loop_closure_id = 0l;
      this->proximity_detection_id = 0l;
      this->landmark_id = 0l;
      this->current_goal_id = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ref_id_type =
    int32_t;
  _ref_id_type ref_id;
  using _loop_closure_id_type =
    int32_t;
  _loop_closure_id_type loop_closure_id;
  using _proximity_detection_id_type =
    int32_t;
  _proximity_detection_id_type proximity_detection_id;
  using _landmark_id_type =
    int32_t;
  _landmark_id_type landmark_id;
  using _loop_closure_transform_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _loop_closure_transform_type loop_closure_transform;
  using _wm_state_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _wm_state_type wm_state;
  using _posterior_keys_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _posterior_keys_type posterior_keys;
  using _posterior_values_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _posterior_values_type posterior_values;
  using _likelihood_keys_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _likelihood_keys_type likelihood_keys;
  using _likelihood_values_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _likelihood_values_type likelihood_values;
  using _raw_likelihood_keys_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _raw_likelihood_keys_type raw_likelihood_keys;
  using _raw_likelihood_values_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _raw_likelihood_values_type raw_likelihood_values;
  using _weights_keys_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _weights_keys_type weights_keys;
  using _weights_values_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _weights_values_type weights_values;
  using _labels_keys_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _labels_keys_type labels_keys;
  using _labels_values_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _labels_values_type labels_values;
  using _stats_keys_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _stats_keys_type stats_keys;
  using _stats_values_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _stats_values_type stats_values;
  using _local_path_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _local_path_type local_path;
  using _current_goal_id_type =
    int32_t;
  _current_goal_id_type current_goal_id;
  using _odom_cache_type =
    rtabmap_msgs::msg::MapGraph_<ContainerAllocator>;
  _odom_cache_type odom_cache;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ref_id(
    const int32_t & _arg)
  {
    this->ref_id = _arg;
    return *this;
  }
  Type & set__loop_closure_id(
    const int32_t & _arg)
  {
    this->loop_closure_id = _arg;
    return *this;
  }
  Type & set__proximity_detection_id(
    const int32_t & _arg)
  {
    this->proximity_detection_id = _arg;
    return *this;
  }
  Type & set__landmark_id(
    const int32_t & _arg)
  {
    this->landmark_id = _arg;
    return *this;
  }
  Type & set__loop_closure_transform(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->loop_closure_transform = _arg;
    return *this;
  }
  Type & set__wm_state(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->wm_state = _arg;
    return *this;
  }
  Type & set__posterior_keys(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->posterior_keys = _arg;
    return *this;
  }
  Type & set__posterior_values(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->posterior_values = _arg;
    return *this;
  }
  Type & set__likelihood_keys(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->likelihood_keys = _arg;
    return *this;
  }
  Type & set__likelihood_values(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->likelihood_values = _arg;
    return *this;
  }
  Type & set__raw_likelihood_keys(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->raw_likelihood_keys = _arg;
    return *this;
  }
  Type & set__raw_likelihood_values(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->raw_likelihood_values = _arg;
    return *this;
  }
  Type & set__weights_keys(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->weights_keys = _arg;
    return *this;
  }
  Type & set__weights_values(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->weights_values = _arg;
    return *this;
  }
  Type & set__labels_keys(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->labels_keys = _arg;
    return *this;
  }
  Type & set__labels_values(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->labels_values = _arg;
    return *this;
  }
  Type & set__stats_keys(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->stats_keys = _arg;
    return *this;
  }
  Type & set__stats_values(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->stats_values = _arg;
    return *this;
  }
  Type & set__local_path(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->local_path = _arg;
    return *this;
  }
  Type & set__current_goal_id(
    const int32_t & _arg)
  {
    this->current_goal_id = _arg;
    return *this;
  }
  Type & set__odom_cache(
    const rtabmap_msgs::msg::MapGraph_<ContainerAllocator> & _arg)
  {
    this->odom_cache = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rtabmap_msgs::msg::Info_<ContainerAllocator> *;
  using ConstRawPtr =
    const rtabmap_msgs::msg::Info_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::Info_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rtabmap_msgs::msg::Info_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::Info_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::Info_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rtabmap_msgs::msg::Info_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rtabmap_msgs::msg::Info_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::Info_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rtabmap_msgs::msg::Info_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rtabmap_msgs__msg__Info
    std::shared_ptr<rtabmap_msgs::msg::Info_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rtabmap_msgs__msg__Info
    std::shared_ptr<rtabmap_msgs::msg::Info_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Info_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ref_id != other.ref_id) {
      return false;
    }
    if (this->loop_closure_id != other.loop_closure_id) {
      return false;
    }
    if (this->proximity_detection_id != other.proximity_detection_id) {
      return false;
    }
    if (this->landmark_id != other.landmark_id) {
      return false;
    }
    if (this->loop_closure_transform != other.loop_closure_transform) {
      return false;
    }
    if (this->wm_state != other.wm_state) {
      return false;
    }
    if (this->posterior_keys != other.posterior_keys) {
      return false;
    }
    if (this->posterior_values != other.posterior_values) {
      return false;
    }
    if (this->likelihood_keys != other.likelihood_keys) {
      return false;
    }
    if (this->likelihood_values != other.likelihood_values) {
      return false;
    }
    if (this->raw_likelihood_keys != other.raw_likelihood_keys) {
      return false;
    }
    if (this->raw_likelihood_values != other.raw_likelihood_values) {
      return false;
    }
    if (this->weights_keys != other.weights_keys) {
      return false;
    }
    if (this->weights_values != other.weights_values) {
      return false;
    }
    if (this->labels_keys != other.labels_keys) {
      return false;
    }
    if (this->labels_values != other.labels_values) {
      return false;
    }
    if (this->stats_keys != other.stats_keys) {
      return false;
    }
    if (this->stats_values != other.stats_values) {
      return false;
    }
    if (this->local_path != other.local_path) {
      return false;
    }
    if (this->current_goal_id != other.current_goal_id) {
      return false;
    }
    if (this->odom_cache != other.odom_cache) {
      return false;
    }
    return true;
  }
  bool operator!=(const Info_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Info_

// alias to use template instance with default allocator
using Info =
  rtabmap_msgs::msg::Info_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__INFO__STRUCT_HPP_
