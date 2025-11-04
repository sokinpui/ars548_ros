// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ars548_messages:msg/AccelerationLateralCoG.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LATERAL_CO_G__BUILDER_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LATERAL_CO_G__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ars548_messages/msg/detail/acceleration_lateral_co_g__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ars548_messages
{

namespace msg
{

namespace builder
{

class Init_AccelerationLateralCoG_accelerationlateraleventdataqualifier
{
public:
  explicit Init_AccelerationLateralCoG_accelerationlateraleventdataqualifier(::ars548_messages::msg::AccelerationLateralCoG & msg)
  : msg_(msg)
  {}
  ::ars548_messages::msg::AccelerationLateralCoG accelerationlateraleventdataqualifier(::ars548_messages::msg::AccelerationLateralCoG::_accelerationlateraleventdataqualifier_type arg)
  {
    msg_.accelerationlateraleventdataqualifier = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ars548_messages::msg::AccelerationLateralCoG msg_;
};

class Init_AccelerationLateralCoG_accelerationlateral_invalidflag
{
public:
  explicit Init_AccelerationLateralCoG_accelerationlateral_invalidflag(::ars548_messages::msg::AccelerationLateralCoG & msg)
  : msg_(msg)
  {}
  Init_AccelerationLateralCoG_accelerationlateraleventdataqualifier accelerationlateral_invalidflag(::ars548_messages::msg::AccelerationLateralCoG::_accelerationlateral_invalidflag_type arg)
  {
    msg_.accelerationlateral_invalidflag = std::move(arg);
    return Init_AccelerationLateralCoG_accelerationlateraleventdataqualifier(msg_);
  }

private:
  ::ars548_messages::msg::AccelerationLateralCoG msg_;
};

class Init_AccelerationLateralCoG_accelerationlateral
{
public:
  explicit Init_AccelerationLateralCoG_accelerationlateral(::ars548_messages::msg::AccelerationLateralCoG & msg)
  : msg_(msg)
  {}
  Init_AccelerationLateralCoG_accelerationlateral_invalidflag accelerationlateral(::ars548_messages::msg::AccelerationLateralCoG::_accelerationlateral_type arg)
  {
    msg_.accelerationlateral = std::move(arg);
    return Init_AccelerationLateralCoG_accelerationlateral_invalidflag(msg_);
  }

private:
  ::ars548_messages::msg::AccelerationLateralCoG msg_;
};

class Init_AccelerationLateralCoG_qualifieraccelerationlateral
{
public:
  explicit Init_AccelerationLateralCoG_qualifieraccelerationlateral(::ars548_messages::msg::AccelerationLateralCoG & msg)
  : msg_(msg)
  {}
  Init_AccelerationLateralCoG_accelerationlateral qualifieraccelerationlateral(::ars548_messages::msg::AccelerationLateralCoG::_qualifieraccelerationlateral_type arg)
  {
    msg_.qualifieraccelerationlateral = std::move(arg);
    return Init_AccelerationLateralCoG_accelerationlateral(msg_);
  }

private:
  ::ars548_messages::msg::AccelerationLateralCoG msg_;
};

class Init_AccelerationLateralCoG_accelerationlateralerramp_invalidflag
{
public:
  explicit Init_AccelerationLateralCoG_accelerationlateralerramp_invalidflag(::ars548_messages::msg::AccelerationLateralCoG & msg)
  : msg_(msg)
  {}
  Init_AccelerationLateralCoG_qualifieraccelerationlateral accelerationlateralerramp_invalidflag(::ars548_messages::msg::AccelerationLateralCoG::_accelerationlateralerramp_invalidflag_type arg)
  {
    msg_.accelerationlateralerramp_invalidflag = std::move(arg);
    return Init_AccelerationLateralCoG_qualifieraccelerationlateral(msg_);
  }

private:
  ::ars548_messages::msg::AccelerationLateralCoG msg_;
};

class Init_AccelerationLateralCoG_accelerationlateralerramp
{
public:
  Init_AccelerationLateralCoG_accelerationlateralerramp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AccelerationLateralCoG_accelerationlateralerramp_invalidflag accelerationlateralerramp(::ars548_messages::msg::AccelerationLateralCoG::_accelerationlateralerramp_type arg)
  {
    msg_.accelerationlateralerramp = std::move(arg);
    return Init_AccelerationLateralCoG_accelerationlateralerramp_invalidflag(msg_);
  }

private:
  ::ars548_messages::msg::AccelerationLateralCoG msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ars548_messages::msg::AccelerationLateralCoG>()
{
  return ars548_messages::msg::builder::Init_AccelerationLateralCoG_accelerationlateralerramp();
}

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LATERAL_CO_G__BUILDER_HPP_
