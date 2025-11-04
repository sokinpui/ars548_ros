// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ars548_messages:msg/CharacteristicSpeed.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__CHARACTERISTIC_SPEED__TRAITS_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__CHARACTERISTIC_SPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ars548_messages/msg/detail/characteristic_speed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ars548_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const CharacteristicSpeed & msg,
  std::ostream & out)
{
  out << "{";
  // member: characteristicspeederramp
  {
    out << "characteristicspeederramp: ";
    rosidl_generator_traits::value_to_yaml(msg.characteristicspeederramp, out);
    out << ", ";
  }

  // member: qualifiercharacteristicspeed
  {
    out << "qualifiercharacteristicspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.qualifiercharacteristicspeed, out);
    out << ", ";
  }

  // member: characteristicspeed
  {
    out << "characteristicspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.characteristicspeed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CharacteristicSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: characteristicspeederramp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "characteristicspeederramp: ";
    rosidl_generator_traits::value_to_yaml(msg.characteristicspeederramp, out);
    out << "\n";
  }

  // member: qualifiercharacteristicspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qualifiercharacteristicspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.qualifiercharacteristicspeed, out);
    out << "\n";
  }

  // member: characteristicspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "characteristicspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.characteristicspeed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CharacteristicSpeed & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ars548_messages

namespace rosidl_generator_traits
{

[[deprecated("use ars548_messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ars548_messages::msg::CharacteristicSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  ars548_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ars548_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const ars548_messages::msg::CharacteristicSpeed & msg)
{
  return ars548_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ars548_messages::msg::CharacteristicSpeed>()
{
  return "ars548_messages::msg::CharacteristicSpeed";
}

template<>
inline const char * name<ars548_messages::msg::CharacteristicSpeed>()
{
  return "ars548_messages/msg/CharacteristicSpeed";
}

template<>
struct has_fixed_size<ars548_messages::msg::CharacteristicSpeed>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ars548_messages::msg::CharacteristicSpeed>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ars548_messages::msg::CharacteristicSpeed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARS548_MESSAGES__MSG__DETAIL__CHARACTERISTIC_SPEED__TRAITS_HPP_
