// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rtabmap_msgs:msg/EnvSensor.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__MSG__DETAIL__ENV_SENSOR__BUILDER_HPP_
#define RTABMAP_MSGS__MSG__DETAIL__ENV_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rtabmap_msgs/msg/detail/env_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rtabmap_msgs
{

namespace msg
{

namespace builder
{

class Init_EnvSensor_value
{
public:
  explicit Init_EnvSensor_value(::rtabmap_msgs::msg::EnvSensor & msg)
  : msg_(msg)
  {}
  ::rtabmap_msgs::msg::EnvSensor value(::rtabmap_msgs::msg::EnvSensor::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rtabmap_msgs::msg::EnvSensor msg_;
};

class Init_EnvSensor_type
{
public:
  explicit Init_EnvSensor_type(::rtabmap_msgs::msg::EnvSensor & msg)
  : msg_(msg)
  {}
  Init_EnvSensor_value type(::rtabmap_msgs::msg::EnvSensor::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_EnvSensor_value(msg_);
  }

private:
  ::rtabmap_msgs::msg::EnvSensor msg_;
};

class Init_EnvSensor_header
{
public:
  Init_EnvSensor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnvSensor_type header(::rtabmap_msgs::msg::EnvSensor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EnvSensor_type(msg_);
  }

private:
  ::rtabmap_msgs::msg::EnvSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rtabmap_msgs::msg::EnvSensor>()
{
  return rtabmap_msgs::msg::builder::Init_EnvSensor_header();
}

}  // namespace rtabmap_msgs

#endif  // RTABMAP_MSGS__MSG__DETAIL__ENV_SENSOR__BUILDER_HPP_
