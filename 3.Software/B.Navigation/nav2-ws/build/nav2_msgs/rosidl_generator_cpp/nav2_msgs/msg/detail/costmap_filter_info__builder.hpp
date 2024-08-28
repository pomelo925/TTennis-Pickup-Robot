// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:msg/CostmapFilterInfo.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__COSTMAP_FILTER_INFO__BUILDER_HPP_
#define NAV2_MSGS__MSG__DETAIL__COSTMAP_FILTER_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/msg/detail/costmap_filter_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace msg
{

namespace builder
{

class Init_CostmapFilterInfo_multiplier
{
public:
  explicit Init_CostmapFilterInfo_multiplier(::nav2_msgs::msg::CostmapFilterInfo & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::msg::CostmapFilterInfo multiplier(::nav2_msgs::msg::CostmapFilterInfo::_multiplier_type arg)
  {
    msg_.multiplier = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::msg::CostmapFilterInfo msg_;
};

class Init_CostmapFilterInfo_base
{
public:
  explicit Init_CostmapFilterInfo_base(::nav2_msgs::msg::CostmapFilterInfo & msg)
  : msg_(msg)
  {}
  Init_CostmapFilterInfo_multiplier base(::nav2_msgs::msg::CostmapFilterInfo::_base_type arg)
  {
    msg_.base = std::move(arg);
    return Init_CostmapFilterInfo_multiplier(msg_);
  }

private:
  ::nav2_msgs::msg::CostmapFilterInfo msg_;
};

class Init_CostmapFilterInfo_filter_mask_topic
{
public:
  explicit Init_CostmapFilterInfo_filter_mask_topic(::nav2_msgs::msg::CostmapFilterInfo & msg)
  : msg_(msg)
  {}
  Init_CostmapFilterInfo_base filter_mask_topic(::nav2_msgs::msg::CostmapFilterInfo::_filter_mask_topic_type arg)
  {
    msg_.filter_mask_topic = std::move(arg);
    return Init_CostmapFilterInfo_base(msg_);
  }

private:
  ::nav2_msgs::msg::CostmapFilterInfo msg_;
};

class Init_CostmapFilterInfo_type
{
public:
  explicit Init_CostmapFilterInfo_type(::nav2_msgs::msg::CostmapFilterInfo & msg)
  : msg_(msg)
  {}
  Init_CostmapFilterInfo_filter_mask_topic type(::nav2_msgs::msg::CostmapFilterInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_CostmapFilterInfo_filter_mask_topic(msg_);
  }

private:
  ::nav2_msgs::msg::CostmapFilterInfo msg_;
};

class Init_CostmapFilterInfo_header
{
public:
  Init_CostmapFilterInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CostmapFilterInfo_type header(::nav2_msgs::msg::CostmapFilterInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CostmapFilterInfo_type(msg_);
  }

private:
  ::nav2_msgs::msg::CostmapFilterInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::msg::CostmapFilterInfo>()
{
  return nav2_msgs::msg::builder::Init_CostmapFilterInfo_header();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__COSTMAP_FILTER_INFO__BUILDER_HPP_
