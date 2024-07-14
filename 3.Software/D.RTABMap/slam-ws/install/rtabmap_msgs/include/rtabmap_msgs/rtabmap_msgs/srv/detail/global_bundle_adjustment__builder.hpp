// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:srv/GlobalBundleAdjustment.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__GLOBAL_BUNDLE_ADJUSTMENT__BUILDER_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__GLOBAL_BUNDLE_ADJUSTMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/srv/detail/global_bundle_adjustment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace srv
{

namespace builder
{

class Init_GlobalBundleAdjustment_Request_voc_matches
{
public:
  explicit Init_GlobalBundleAdjustment_Request_voc_matches(::rtabmap_msgs::srv::GlobalBundleAdjustment_Request & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::srv::GlobalBundleAdjustment_Request voc_matches(::rtabmap_msgs::srv::GlobalBundleAdjustment_Request::_voc_matches_type arg)
  {
    msg_.voc_matches = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::srv::GlobalBundleAdjustment_Request msg_;
};

class Init_GlobalBundleAdjustment_Request_pixel_variance
{
public:
  explicit Init_GlobalBundleAdjustment_Request_pixel_variance(::rtabmap_msgs::srv::GlobalBundleAdjustment_Request & msg)
  : msg_(msg)
  {}
  Init_GlobalBundleAdjustment_Request_voc_matches pixel_variance(::rtabmap_msgs::srv::GlobalBundleAdjustment_Request::_pixel_variance_type arg)
  {
    msg_.pixel_variance = std::move(arg);
    return Init_GlobalBundleAdjustment_Request_voc_matches(msg_);
  }

private:
  ::rtabmap_msgs::srv::GlobalBundleAdjustment_Request msg_;
};

class Init_GlobalBundleAdjustment_Request_iterations
{
public:
  explicit Init_GlobalBundleAdjustment_Request_iterations(::rtabmap_msgs::srv::GlobalBundleAdjustment_Request & msg)
  : msg_(msg)
  {}
  Init_GlobalBundleAdjustment_Request_pixel_variance iterations(::rtabmap_msgs::srv::GlobalBundleAdjustment_Request::_iterations_type arg)
  {
    msg_.iterations = std::move(arg);
    return Init_GlobalBundleAdjustment_Request_pixel_variance(msg_);
  }

private:
  ::rtabmap_msgs::srv::GlobalBundleAdjustment_Request msg_;
};

class Init_GlobalBundleAdjustment_Request_type
{
public:
  Init_GlobalBundleAdjustment_Request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GlobalBundleAdjustment_Request_iterations type(::rtabmap_msgs::srv::GlobalBundleAdjustment_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_GlobalBundleAdjustment_Request_iterations(msg_);
  }

private:
  ::rtabmap_msgs::srv::GlobalBundleAdjustment_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::GlobalBundleAdjustment_Request>()
{
  return rtabmap_msgs::srv::builder::Init_GlobalBundleAdjustment_Request_type();
}

}  // namespace rtabmap_msgs


namespace rtabmap_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::srv::GlobalBundleAdjustment_Response>()
{
  return ::rtabmap_msgs::srv::GlobalBundleAdjustment_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__SRV__DETAIL__GLOBAL_BUNDLE_ADJUSTMENT__BUILDER_HPP_
