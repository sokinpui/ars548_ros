// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ars548_messages:msg/DrivingDirection.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__DRIVING_DIRECTION__TRAITS_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__DRIVING_DIRECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ars548_messages/msg/detail/driving_direction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ars548_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const DrivingDirection & msg,
  std::ostream & out)
{
  out << "{";
  // member: drivingdirectionunconfirmed
  {
    out << "drivingdirectionunconfirmed: ";
    rosidl_generator_traits::value_to_yaml(msg.drivingdirectionunconfirmed, out);
    out << ", ";
  }

  // member: drivingdirectionconfirmed
  {
    out << "drivingdirectionconfirmed: ";
    rosidl_generator_traits::value_to_yaml(msg.drivingdirectionconfirmed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DrivingDirection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: drivingdirectionunconfirmed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drivingdirectionunconfirmed: ";
    rosidl_generator_traits::value_to_yaml(msg.drivingdirectionunconfirmed, out);
    out << "\n";
  }

  // member: drivingdirectionconfirmed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drivingdirectionconfirmed: ";
    rosidl_generator_traits::value_to_yaml(msg.drivingdirectionconfirmed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DrivingDirection & msg, bool use_flow_style = false)
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
  const ars548_messages::msg::DrivingDirection & msg,
  std::ostream & out, size_t indentation = 0)
{
  ars548_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ars548_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const ars548_messages::msg::DrivingDirection & msg)
{
  return ars548_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ars548_messages::msg::DrivingDirection>()
{
  return "ars548_messages::msg::DrivingDirection";
}

template<>
inline const char * name<ars548_messages::msg::DrivingDirection>()
{
  return "ars548_messages/msg/DrivingDirection";
}

template<>
struct has_fixed_size<ars548_messages::msg::DrivingDirection>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ars548_messages::msg::DrivingDirection>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ars548_messages::msg::DrivingDirection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARS548_MESSAGES__MSG__DETAIL__DRIVING_DIRECTION__TRAITS_HPP_
