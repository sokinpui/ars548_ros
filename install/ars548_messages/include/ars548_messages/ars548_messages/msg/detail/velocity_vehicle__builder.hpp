// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ars548_messages:msg/VelocityVehicle.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__VELOCITY_VEHICLE__BUILDER_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__VELOCITY_VEHICLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ars548_messages/msg/detail/velocity_vehicle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ars548_messages
{

namespace msg
{

namespace builder
{

class Init_VelocityVehicle_velocityvehicle_invalidflag
{
public:
  explicit Init_VelocityVehicle_velocityvehicle_invalidflag(::ars548_messages::msg::VelocityVehicle & msg)
  : msg_(msg)
  {}
  ::ars548_messages::msg::VelocityVehicle velocityvehicle_invalidflag(::ars548_messages::msg::VelocityVehicle::_velocityvehicle_invalidflag_type arg)
  {
    msg_.velocityvehicle_invalidflag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ars548_messages::msg::VelocityVehicle msg_;
};

class Init_VelocityVehicle_velocityvehicle
{
public:
  explicit Init_VelocityVehicle_velocityvehicle(::ars548_messages::msg::VelocityVehicle & msg)
  : msg_(msg)
  {}
  Init_VelocityVehicle_velocityvehicle_invalidflag velocityvehicle(::ars548_messages::msg::VelocityVehicle::_velocityvehicle_type arg)
  {
    msg_.velocityvehicle = std::move(arg);
    return Init_VelocityVehicle_velocityvehicle_invalidflag(msg_);
  }

private:
  ::ars548_messages::msg::VelocityVehicle msg_;
};

class Init_VelocityVehicle_velocityvehicleeventdataqualifier
{
public:
  explicit Init_VelocityVehicle_velocityvehicleeventdataqualifier(::ars548_messages::msg::VelocityVehicle & msg)
  : msg_(msg)
  {}
  Init_VelocityVehicle_velocityvehicle velocityvehicleeventdataqualifier(::ars548_messages::msg::VelocityVehicle::_velocityvehicleeventdataqualifier_type arg)
  {
    msg_.velocityvehicleeventdataqualifier = std::move(arg);
    return Init_VelocityVehicle_velocityvehicle(msg_);
  }

private:
  ::ars548_messages::msg::VelocityVehicle msg_;
};

class Init_VelocityVehicle_qualifiervelocityvehicle
{
public:
  explicit Init_VelocityVehicle_qualifiervelocityvehicle(::ars548_messages::msg::VelocityVehicle & msg)
  : msg_(msg)
  {}
  Init_VelocityVehicle_velocityvehicleeventdataqualifier qualifiervelocityvehicle(::ars548_messages::msg::VelocityVehicle::_qualifiervelocityvehicle_type arg)
  {
    msg_.qualifiervelocityvehicle = std::move(arg);
    return Init_VelocityVehicle_velocityvehicleeventdataqualifier(msg_);
  }

private:
  ::ars548_messages::msg::VelocityVehicle msg_;
};

class Init_VelocityVehicle_statusvelocitynearstandstill
{
public:
  Init_VelocityVehicle_statusvelocitynearstandstill()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityVehicle_qualifiervelocityvehicle statusvelocitynearstandstill(::ars548_messages::msg::VelocityVehicle::_statusvelocitynearstandstill_type arg)
  {
    msg_.statusvelocitynearstandstill = std::move(arg);
    return Init_VelocityVehicle_qualifiervelocityvehicle(msg_);
  }

private:
  ::ars548_messages::msg::VelocityVehicle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ars548_messages::msg::VelocityVehicle>()
{
  return ars548_messages::msg::builder::Init_VelocityVehicle_statusvelocitynearstandstill();
}

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__VELOCITY_VEHICLE__BUILDER_HPP_
