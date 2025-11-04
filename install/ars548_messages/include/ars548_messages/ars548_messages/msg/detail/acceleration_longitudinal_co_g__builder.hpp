// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ars548_messages:msg/AccelerationLongitudinalCoG.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LONGITUDINAL_CO_G__BUILDER_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LONGITUDINAL_CO_G__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ars548_messages/msg/detail/acceleration_longitudinal_co_g__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ars548_messages
{

namespace msg
{

namespace builder
{

class Init_AccelerationLongitudinalCoG_accelerationlongitudinaleventdataqualifier
{
public:
  explicit Init_AccelerationLongitudinalCoG_accelerationlongitudinaleventdataqualifier(::ars548_messages::msg::AccelerationLongitudinalCoG & msg)
  : msg_(msg)
  {}
  ::ars548_messages::msg::AccelerationLongitudinalCoG accelerationlongitudinaleventdataqualifier(::ars548_messages::msg::AccelerationLongitudinalCoG::_accelerationlongitudinaleventdataqualifier_type arg)
  {
    msg_.accelerationlongitudinaleventdataqualifier = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ars548_messages::msg::AccelerationLongitudinalCoG msg_;
};

class Init_AccelerationLongitudinalCoG_accelerationlongitudinal_invalidflag
{
public:
  explicit Init_AccelerationLongitudinalCoG_accelerationlongitudinal_invalidflag(::ars548_messages::msg::AccelerationLongitudinalCoG & msg)
  : msg_(msg)
  {}
  Init_AccelerationLongitudinalCoG_accelerationlongitudinaleventdataqualifier accelerationlongitudinal_invalidflag(::ars548_messages::msg::AccelerationLongitudinalCoG::_accelerationlongitudinal_invalidflag_type arg)
  {
    msg_.accelerationlongitudinal_invalidflag = std::move(arg);
    return Init_AccelerationLongitudinalCoG_accelerationlongitudinaleventdataqualifier(msg_);
  }

private:
  ::ars548_messages::msg::AccelerationLongitudinalCoG msg_;
};

class Init_AccelerationLongitudinalCoG_accelerationlongitudinal
{
public:
  explicit Init_AccelerationLongitudinalCoG_accelerationlongitudinal(::ars548_messages::msg::AccelerationLongitudinalCoG & msg)
  : msg_(msg)
  {}
  Init_AccelerationLongitudinalCoG_accelerationlongitudinal_invalidflag accelerationlongitudinal(::ars548_messages::msg::AccelerationLongitudinalCoG::_accelerationlongitudinal_type arg)
  {
    msg_.accelerationlongitudinal = std::move(arg);
    return Init_AccelerationLongitudinalCoG_accelerationlongitudinal_invalidflag(msg_);
  }

private:
  ::ars548_messages::msg::AccelerationLongitudinalCoG msg_;
};

class Init_AccelerationLongitudinalCoG_qualifieraccelerationlongitudinal
{
public:
  explicit Init_AccelerationLongitudinalCoG_qualifieraccelerationlongitudinal(::ars548_messages::msg::AccelerationLongitudinalCoG & msg)
  : msg_(msg)
  {}
  Init_AccelerationLongitudinalCoG_accelerationlongitudinal qualifieraccelerationlongitudinal(::ars548_messages::msg::AccelerationLongitudinalCoG::_qualifieraccelerationlongitudinal_type arg)
  {
    msg_.qualifieraccelerationlongitudinal = std::move(arg);
    return Init_AccelerationLongitudinalCoG_accelerationlongitudinal(msg_);
  }

private:
  ::ars548_messages::msg::AccelerationLongitudinalCoG msg_;
};

class Init_AccelerationLongitudinalCoG_accelerationlongitudinalerramp_invalidflag
{
public:
  explicit Init_AccelerationLongitudinalCoG_accelerationlongitudinalerramp_invalidflag(::ars548_messages::msg::AccelerationLongitudinalCoG & msg)
  : msg_(msg)
  {}
  Init_AccelerationLongitudinalCoG_qualifieraccelerationlongitudinal accelerationlongitudinalerramp_invalidflag(::ars548_messages::msg::AccelerationLongitudinalCoG::_accelerationlongitudinalerramp_invalidflag_type arg)
  {
    msg_.accelerationlongitudinalerramp_invalidflag = std::move(arg);
    return Init_AccelerationLongitudinalCoG_qualifieraccelerationlongitudinal(msg_);
  }

private:
  ::ars548_messages::msg::AccelerationLongitudinalCoG msg_;
};

class Init_AccelerationLongitudinalCoG_accelerationlongitudinalerramp
{
public:
  Init_AccelerationLongitudinalCoG_accelerationlongitudinalerramp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AccelerationLongitudinalCoG_accelerationlongitudinalerramp_invalidflag accelerationlongitudinalerramp(::ars548_messages::msg::AccelerationLongitudinalCoG::_accelerationlongitudinalerramp_type arg)
  {
    msg_.accelerationlongitudinalerramp = std::move(arg);
    return Init_AccelerationLongitudinalCoG_accelerationlongitudinalerramp_invalidflag(msg_);
  }

private:
  ::ars548_messages::msg::AccelerationLongitudinalCoG msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ars548_messages::msg::AccelerationLongitudinalCoG>()
{
  return ars548_messages::msg::builder::Init_AccelerationLongitudinalCoG_accelerationlongitudinalerramp();
}

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LONGITUDINAL_CO_G__BUILDER_HPP_
