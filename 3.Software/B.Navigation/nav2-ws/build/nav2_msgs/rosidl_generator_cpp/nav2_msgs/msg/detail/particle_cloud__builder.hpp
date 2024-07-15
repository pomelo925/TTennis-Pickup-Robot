// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:msg/ParticleCloud.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__PARTICLE_CLOUD__BUILDER_HPP_
#define NAV2_MSGS__MSG__DETAIL__PARTICLE_CLOUD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav2_msgs/msg/detail/particle_cloud__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav2_msgs
{

namespace msg
{

namespace builder
{

class Init_ParticleCloud_particles
{
public:
  explicit Init_ParticleCloud_particles(::nav2_msgs::msg::ParticleCloud & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::msg::ParticleCloud particles(::nav2_msgs::msg::ParticleCloud::_particles_type arg)
  {
    msg_.particles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::msg::ParticleCloud msg_;
};

class Init_ParticleCloud_header
{
public:
  Init_ParticleCloud_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParticleCloud_particles header(::nav2_msgs::msg::ParticleCloud::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ParticleCloud_particles(msg_);
  }

private:
  ::nav2_msgs::msg::ParticleCloud msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::msg::ParticleCloud>()
{
  return nav2_msgs::msg::builder::Init_ParticleCloud_header();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__DETAIL__PARTICLE_CLOUD__BUILDER_HPP_
