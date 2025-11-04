// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ars548_messages:msg/AccelerationLateralCoG.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LATERAL_CO_G__TRAITS_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LATERAL_CO_G__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ars548_messages/msg/detail/acceleration_lateral_co_g__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ars548_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const AccelerationLateralCoG & msg,
  std::ostream & out)
{
  out << "{";
  // member: accelerationlateralerramp
  {
    out << "accelerationlateralerramp: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlateralerramp, out);
    out << ", ";
  }

  // member: accelerationlateralerramp_invalidflag
  {
    out << "accelerationlateralerramp_invalidflag: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlateralerramp_invalidflag, out);
    out << ", ";
  }

  // member: qualifieraccelerationlateral
  {
    out << "qualifieraccelerationlateral: ";
    rosidl_generator_traits::value_to_yaml(msg.qualifieraccelerationlateral, out);
    out << ", ";
  }

  // member: accelerationlateral
  {
    out << "accelerationlateral: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlateral, out);
    out << ", ";
  }

  // member: accelerationlateral_invalidflag
  {
    out << "accelerationlateral_invalidflag: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlateral_invalidflag, out);
    out << ", ";
  }

  // member: accelerationlateraleventdataqualifier
  {
    out << "accelerationlateraleventdataqualifier: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlateraleventdataqualifier, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AccelerationLateralCoG & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accelerationlateralerramp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerationlateralerramp: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlateralerramp, out);
    out << "\n";
  }

  // member: accelerationlateralerramp_invalidflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerationlateralerramp_invalidflag: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlateralerramp_invalidflag, out);
    out << "\n";
  }

  // member: qualifieraccelerationlateral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qualifieraccelerationlateral: ";
    rosidl_generator_traits::value_to_yaml(msg.qualifieraccelerationlateral, out);
    out << "\n";
  }

  // member: accelerationlateral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerationlateral: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlateral, out);
    out << "\n";
  }

  // member: accelerationlateral_invalidflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerationlateral_invalidflag: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlateral_invalidflag, out);
    out << "\n";
  }

  // member: accelerationlateraleventdataqualifier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerationlateraleventdataqualifier: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlateraleventdataqualifier, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AccelerationLateralCoG & msg, bool use_flow_style = false)
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
  const ars548_messages::msg::AccelerationLateralCoG & msg,
  std::ostream & out, size_t indentation = 0)
{
  ars548_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ars548_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const ars548_messages::msg::AccelerationLateralCoG & msg)
{
  return ars548_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ars548_messages::msg::AccelerationLateralCoG>()
{
  return "ars548_messages::msg::AccelerationLateralCoG";
}

template<>
inline const char * name<ars548_messages::msg::AccelerationLateralCoG>()
{
  return "ars548_messages/msg/AccelerationLateralCoG";
}

template<>
struct has_fixed_size<ars548_messages::msg::AccelerationLateralCoG>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ars548_messages::msg::AccelerationLateralCoG>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ars548_messages::msg::AccelerationLateralCoG>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LATERAL_CO_G__TRAITS_HPP_
