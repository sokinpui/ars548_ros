// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ars548_messages:msg/SteeringAngleFrontAxle.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__STEERING_ANGLE_FRONT_AXLE__BUILDER_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__STEERING_ANGLE_FRONT_AXLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ars548_messages/msg/detail/steering_angle_front_axle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ars548_messages
{

namespace msg
{

namespace builder
{

class Init_SteeringAngleFrontAxle_steeringanglefrontaxleeventdataqualifier
{
public:
  explicit Init_SteeringAngleFrontAxle_steeringanglefrontaxleeventdataqualifier(::ars548_messages::msg::SteeringAngleFrontAxle & msg)
  : msg_(msg)
  {}
  ::ars548_messages::msg::SteeringAngleFrontAxle steeringanglefrontaxleeventdataqualifier(::ars548_messages::msg::SteeringAngleFrontAxle::_steeringanglefrontaxleeventdataqualifier_type arg)
  {
    msg_.steeringanglefrontaxleeventdataqualifier = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ars548_messages::msg::SteeringAngleFrontAxle msg_;
};

class Init_SteeringAngleFrontAxle_steeringanglefrontaxle_invalidflag
{
public:
  explicit Init_SteeringAngleFrontAxle_steeringanglefrontaxle_invalidflag(::ars548_messages::msg::SteeringAngleFrontAxle & msg)
  : msg_(msg)
  {}
  Init_SteeringAngleFrontAxle_steeringanglefrontaxleeventdataqualifier steeringanglefrontaxle_invalidflag(::ars548_messages::msg::SteeringAngleFrontAxle::_steeringanglefrontaxle_invalidflag_type arg)
  {
    msg_.steeringanglefrontaxle_invalidflag = std::move(arg);
    return Init_SteeringAngleFrontAxle_steeringanglefrontaxleeventdataqualifier(msg_);
  }

private:
  ::ars548_messages::msg::SteeringAngleFrontAxle msg_;
};

class Init_SteeringAngleFrontAxle_steeringanglefrontaxle
{
public:
  explicit Init_SteeringAngleFrontAxle_steeringanglefrontaxle(::ars548_messages::msg::SteeringAngleFrontAxle & msg)
  : msg_(msg)
  {}
  Init_SteeringAngleFrontAxle_steeringanglefrontaxle_invalidflag steeringanglefrontaxle(::ars548_messages::msg::SteeringAngleFrontAxle::_steeringanglefrontaxle_type arg)
  {
    msg_.steeringanglefrontaxle = std::move(arg);
    return Init_SteeringAngleFrontAxle_steeringanglefrontaxle_invalidflag(msg_);
  }

private:
  ::ars548_messages::msg::SteeringAngleFrontAxle msg_;
};

class Init_SteeringAngleFrontAxle_steeringanglefrontaxleerramp_invalidflag
{
public:
  explicit Init_SteeringAngleFrontAxle_steeringanglefrontaxleerramp_invalidflag(::ars548_messages::msg::SteeringAngleFrontAxle & msg)
  : msg_(msg)
  {}
  Init_SteeringAngleFrontAxle_steeringanglefrontaxle steeringanglefrontaxleerramp_invalidflag(::ars548_messages::msg::SteeringAngleFrontAxle::_steeringanglefrontaxleerramp_invalidflag_type arg)
  {
    msg_.steeringanglefrontaxleerramp_invalidflag = std::move(arg);
    return Init_SteeringAngleFrontAxle_steeringanglefrontaxle(msg_);
  }

private:
  ::ars548_messages::msg::SteeringAngleFrontAxle msg_;
};

class Init_SteeringAngleFrontAxle_steeringanglefrontaxleerramp
{
public:
  explicit Init_SteeringAngleFrontAxle_steeringanglefrontaxleerramp(::ars548_messages::msg::SteeringAngleFrontAxle & msg)
  : msg_(msg)
  {}
  Init_SteeringAngleFrontAxle_steeringanglefrontaxleerramp_invalidflag steeringanglefrontaxleerramp(::ars548_messages::msg::SteeringAngleFrontAxle::_steeringanglefrontaxleerramp_type arg)
  {
    msg_.steeringanglefrontaxleerramp = std::move(arg);
    return Init_SteeringAngleFrontAxle_steeringanglefrontaxleerramp_invalidflag(msg_);
  }

private:
  ::ars548_messages::msg::SteeringAngleFrontAxle msg_;
};

class Init_SteeringAngleFrontAxle_qualifiersteeringanglefrontaxle
{
public:
  Init_SteeringAngleFrontAxle_qualifiersteeringanglefrontaxle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringAngleFrontAxle_steeringanglefrontaxleerramp qualifiersteeringanglefrontaxle(::ars548_messages::msg::SteeringAngleFrontAxle::_qualifiersteeringanglefrontaxle_type arg)
  {
    msg_.qualifiersteeringanglefrontaxle = std::move(arg);
    return Init_SteeringAngleFrontAxle_steeringanglefrontaxleerramp(msg_);
  }

private:
  ::ars548_messages::msg::SteeringAngleFrontAxle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ars548_messages::msg::SteeringAngleFrontAxle>()
{
  return ars548_messages::msg::builder::Init_SteeringAngleFrontAxle_qualifiersteeringanglefrontaxle();
}

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__STEERING_ANGLE_FRONT_AXLE__BUILDER_HPP_
