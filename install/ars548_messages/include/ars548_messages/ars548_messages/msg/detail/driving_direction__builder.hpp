// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ars548_messages:msg/DrivingDirection.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__DRIVING_DIRECTION__BUILDER_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__DRIVING_DIRECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ars548_messages/msg/detail/driving_direction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ars548_messages
{

namespace msg
{

namespace builder
{

class Init_DrivingDirection_drivingdirectionconfirmed
{
public:
  explicit Init_DrivingDirection_drivingdirectionconfirmed(::ars548_messages::msg::DrivingDirection & msg)
  : msg_(msg)
  {}
  ::ars548_messages::msg::DrivingDirection drivingdirectionconfirmed(::ars548_messages::msg::DrivingDirection::_drivingdirectionconfirmed_type arg)
  {
    msg_.drivingdirectionconfirmed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ars548_messages::msg::DrivingDirection msg_;
};

class Init_DrivingDirection_drivingdirectionunconfirmed
{
public:
  Init_DrivingDirection_drivingdirectionunconfirmed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrivingDirection_drivingdirectionconfirmed drivingdirectionunconfirmed(::ars548_messages::msg::DrivingDirection::_drivingdirectionunconfirmed_type arg)
  {
    msg_.drivingdirectionunconfirmed = std::move(arg);
    return Init_DrivingDirection_drivingdirectionconfirmed(msg_);
  }

private:
  ::ars548_messages::msg::DrivingDirection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ars548_messages::msg::DrivingDirection>()
{
  return ars548_messages::msg::builder::Init_DrivingDirection_drivingdirectionunconfirmed();
}

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__DRIVING_DIRECTION__BUILDER_HPP_
