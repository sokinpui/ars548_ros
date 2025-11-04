// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ars548_messages:msg/YawRate.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__YAW_RATE__BUILDER_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__YAW_RATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ars548_messages/msg/detail/yaw_rate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ars548_messages
{

namespace msg
{

namespace builder
{

class Init_YawRate_yawrateeventdataqualifier
{
public:
  explicit Init_YawRate_yawrateeventdataqualifier(::ars548_messages::msg::YawRate & msg)
  : msg_(msg)
  {}
  ::ars548_messages::msg::YawRate yawrateeventdataqualifier(::ars548_messages::msg::YawRate::_yawrateeventdataqualifier_type arg)
  {
    msg_.yawrateeventdataqualifier = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ars548_messages::msg::YawRate msg_;
};

class Init_YawRate_yawrate_invalidflag
{
public:
  explicit Init_YawRate_yawrate_invalidflag(::ars548_messages::msg::YawRate & msg)
  : msg_(msg)
  {}
  Init_YawRate_yawrateeventdataqualifier yawrate_invalidflag(::ars548_messages::msg::YawRate::_yawrate_invalidflag_type arg)
  {
    msg_.yawrate_invalidflag = std::move(arg);
    return Init_YawRate_yawrateeventdataqualifier(msg_);
  }

private:
  ::ars548_messages::msg::YawRate msg_;
};

class Init_YawRate_yawrate
{
public:
  explicit Init_YawRate_yawrate(::ars548_messages::msg::YawRate & msg)
  : msg_(msg)
  {}
  Init_YawRate_yawrate_invalidflag yawrate(::ars548_messages::msg::YawRate::_yawrate_type arg)
  {
    msg_.yawrate = std::move(arg);
    return Init_YawRate_yawrate_invalidflag(msg_);
  }

private:
  ::ars548_messages::msg::YawRate msg_;
};

class Init_YawRate_qualifieryawrate
{
public:
  explicit Init_YawRate_qualifieryawrate(::ars548_messages::msg::YawRate & msg)
  : msg_(msg)
  {}
  Init_YawRate_yawrate qualifieryawrate(::ars548_messages::msg::YawRate::_qualifieryawrate_type arg)
  {
    msg_.qualifieryawrate = std::move(arg);
    return Init_YawRate_yawrate(msg_);
  }

private:
  ::ars548_messages::msg::YawRate msg_;
};

class Init_YawRate_yawrateerramp_invalidflag
{
public:
  explicit Init_YawRate_yawrateerramp_invalidflag(::ars548_messages::msg::YawRate & msg)
  : msg_(msg)
  {}
  Init_YawRate_qualifieryawrate yawrateerramp_invalidflag(::ars548_messages::msg::YawRate::_yawrateerramp_invalidflag_type arg)
  {
    msg_.yawrateerramp_invalidflag = std::move(arg);
    return Init_YawRate_qualifieryawrate(msg_);
  }

private:
  ::ars548_messages::msg::YawRate msg_;
};

class Init_YawRate_yawrateerramp
{
public:
  Init_YawRate_yawrateerramp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YawRate_yawrateerramp_invalidflag yawrateerramp(::ars548_messages::msg::YawRate::_yawrateerramp_type arg)
  {
    msg_.yawrateerramp = std::move(arg);
    return Init_YawRate_yawrateerramp_invalidflag(msg_);
  }

private:
  ::ars548_messages::msg::YawRate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ars548_messages::msg::YawRate>()
{
  return ars548_messages::msg::builder::Init_YawRate_yawrateerramp();
}

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__YAW_RATE__BUILDER_HPP_
