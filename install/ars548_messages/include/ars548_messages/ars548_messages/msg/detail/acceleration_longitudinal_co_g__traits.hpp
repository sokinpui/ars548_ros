// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ars548_messages:msg/AccelerationLongitudinalCoG.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LONGITUDINAL_CO_G__TRAITS_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LONGITUDINAL_CO_G__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ars548_messages/msg/detail/acceleration_longitudinal_co_g__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ars548_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const AccelerationLongitudinalCoG & msg,
  std::ostream & out)
{
  out << "{";
  // member: accelerationlongitudinalerramp
  {
    out << "accelerationlongitudinalerramp: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlongitudinalerramp, out);
    out << ", ";
  }

  // member: accelerationlongitudinalerramp_invalidflag
  {
    out << "accelerationlongitudinalerramp_invalidflag: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlongitudinalerramp_invalidflag, out);
    out << ", ";
  }

  // member: qualifieraccelerationlongitudinal
  {
    out << "qualifieraccelerationlongitudinal: ";
    rosidl_generator_traits::value_to_yaml(msg.qualifieraccelerationlongitudinal, out);
    out << ", ";
  }

  // member: accelerationlongitudinal
  {
    out << "accelerationlongitudinal: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlongitudinal, out);
    out << ", ";
  }

  // member: accelerationlongitudinal_invalidflag
  {
    out << "accelerationlongitudinal_invalidflag: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlongitudinal_invalidflag, out);
    out << ", ";
  }

  // member: accelerationlongitudinaleventdataqualifier
  {
    out << "accelerationlongitudinaleventdataqualifier: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlongitudinaleventdataqualifier, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AccelerationLongitudinalCoG & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accelerationlongitudinalerramp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerationlongitudinalerramp: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlongitudinalerramp, out);
    out << "\n";
  }

  // member: accelerationlongitudinalerramp_invalidflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerationlongitudinalerramp_invalidflag: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlongitudinalerramp_invalidflag, out);
    out << "\n";
  }

  // member: qualifieraccelerationlongitudinal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qualifieraccelerationlongitudinal: ";
    rosidl_generator_traits::value_to_yaml(msg.qualifieraccelerationlongitudinal, out);
    out << "\n";
  }

  // member: accelerationlongitudinal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerationlongitudinal: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlongitudinal, out);
    out << "\n";
  }

  // member: accelerationlongitudinal_invalidflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerationlongitudinal_invalidflag: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlongitudinal_invalidflag, out);
    out << "\n";
  }

  // member: accelerationlongitudinaleventdataqualifier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerationlongitudinaleventdataqualifier: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerationlongitudinaleventdataqualifier, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AccelerationLongitudinalCoG & msg, bool use_flow_style = false)
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
  const ars548_messages::msg::AccelerationLongitudinalCoG & msg,
  std::ostream & out, size_t indentation = 0)
{
  ars548_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ars548_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const ars548_messages::msg::AccelerationLongitudinalCoG & msg)
{
  return ars548_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ars548_messages::msg::AccelerationLongitudinalCoG>()
{
  return "ars548_messages::msg::AccelerationLongitudinalCoG";
}

template<>
inline const char * name<ars548_messages::msg::AccelerationLongitudinalCoG>()
{
  return "ars548_messages/msg/AccelerationLongitudinalCoG";
}

template<>
struct has_fixed_size<ars548_messages::msg::AccelerationLongitudinalCoG>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ars548_messages::msg::AccelerationLongitudinalCoG>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ars548_messages::msg::AccelerationLongitudinalCoG>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARS548_MESSAGES__MSG__DETAIL__ACCELERATION_LONGITUDINAL_CO_G__TRAITS_HPP_
