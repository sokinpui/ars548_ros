// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ars548_messages:msg/CharacteristicSpeed.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__CHARACTERISTIC_SPEED__BUILDER_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__CHARACTERISTIC_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ars548_messages/msg/detail/characteristic_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ars548_messages
{

namespace msg
{

namespace builder
{

class Init_CharacteristicSpeed_characteristicspeed
{
public:
  explicit Init_CharacteristicSpeed_characteristicspeed(::ars548_messages::msg::CharacteristicSpeed & msg)
  : msg_(msg)
  {}
  ::ars548_messages::msg::CharacteristicSpeed characteristicspeed(::ars548_messages::msg::CharacteristicSpeed::_characteristicspeed_type arg)
  {
    msg_.characteristicspeed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ars548_messages::msg::CharacteristicSpeed msg_;
};

class Init_CharacteristicSpeed_qualifiercharacteristicspeed
{
public:
  explicit Init_CharacteristicSpeed_qualifiercharacteristicspeed(::ars548_messages::msg::CharacteristicSpeed & msg)
  : msg_(msg)
  {}
  Init_CharacteristicSpeed_characteristicspeed qualifiercharacteristicspeed(::ars548_messages::msg::CharacteristicSpeed::_qualifiercharacteristicspeed_type arg)
  {
    msg_.qualifiercharacteristicspeed = std::move(arg);
    return Init_CharacteristicSpeed_characteristicspeed(msg_);
  }

private:
  ::ars548_messages::msg::CharacteristicSpeed msg_;
};

class Init_CharacteristicSpeed_characteristicspeederramp
{
public:
  Init_CharacteristicSpeed_characteristicspeederramp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CharacteristicSpeed_qualifiercharacteristicspeed characteristicspeederramp(::ars548_messages::msg::CharacteristicSpeed::_characteristicspeederramp_type arg)
  {
    msg_.characteristicspeederramp = std::move(arg);
    return Init_CharacteristicSpeed_qualifiercharacteristicspeed(msg_);
  }

private:
  ::ars548_messages::msg::CharacteristicSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ars548_messages::msg::CharacteristicSpeed>()
{
  return ars548_messages::msg::builder::Init_CharacteristicSpeed_characteristicspeederramp();
}

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__CHARACTERISTIC_SPEED__BUILDER_HPP_
