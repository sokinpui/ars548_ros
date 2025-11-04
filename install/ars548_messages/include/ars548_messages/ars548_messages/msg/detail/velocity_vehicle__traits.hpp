// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ars548_messages:msg/VelocityVehicle.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__VELOCITY_VEHICLE__TRAITS_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__VELOCITY_VEHICLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ars548_messages/msg/detail/velocity_vehicle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ars548_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const VelocityVehicle & msg,
  std::ostream & out)
{
  out << "{";
  // member: statusvelocitynearstandstill
  {
    out << "statusvelocitynearstandstill: ";
    rosidl_generator_traits::value_to_yaml(msg.statusvelocitynearstandstill, out);
    out << ", ";
  }

  // member: qualifiervelocityvehicle
  {
    out << "qualifiervelocityvehicle: ";
    rosidl_generator_traits::value_to_yaml(msg.qualifiervelocityvehicle, out);
    out << ", ";
  }

  // member: velocityvehicleeventdataqualifier
  {
    out << "velocityvehicleeventdataqualifier: ";
    rosidl_generator_traits::value_to_yaml(msg.velocityvehicleeventdataqualifier, out);
    out << ", ";
  }

  // member: velocityvehicle
  {
    out << "velocityvehicle: ";
    rosidl_generator_traits::value_to_yaml(msg.velocityvehicle, out);
    out << ", ";
  }

  // member: velocityvehicle_invalidflag
  {
    out << "velocityvehicle_invalidflag: ";
    rosidl_generator_traits::value_to_yaml(msg.velocityvehicle_invalidflag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VelocityVehicle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: statusvelocitynearstandstill
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "statusvelocitynearstandstill: ";
    rosidl_generator_traits::value_to_yaml(msg.statusvelocitynearstandstill, out);
    out << "\n";
  }

  // member: qualifiervelocityvehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qualifiervelocityvehicle: ";
    rosidl_generator_traits::value_to_yaml(msg.qualifiervelocityvehicle, out);
    out << "\n";
  }

  // member: velocityvehicleeventdataqualifier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocityvehicleeventdataqualifier: ";
    rosidl_generator_traits::value_to_yaml(msg.velocityvehicleeventdataqualifier, out);
    out << "\n";
  }

  // member: velocityvehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocityvehicle: ";
    rosidl_generator_traits::value_to_yaml(msg.velocityvehicle, out);
    out << "\n";
  }

  // member: velocityvehicle_invalidflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocityvehicle_invalidflag: ";
    rosidl_generator_traits::value_to_yaml(msg.velocityvehicle_invalidflag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VelocityVehicle & msg, bool use_flow_style = false)
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
  const ars548_messages::msg::VelocityVehicle & msg,
  std::ostream & out, size_t indentation = 0)
{
  ars548_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ars548_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const ars548_messages::msg::VelocityVehicle & msg)
{
  return ars548_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ars548_messages::msg::VelocityVehicle>()
{
  return "ars548_messages::msg::VelocityVehicle";
}

template<>
inline const char * name<ars548_messages::msg::VelocityVehicle>()
{
  return "ars548_messages/msg/VelocityVehicle";
}

template<>
struct has_fixed_size<ars548_messages::msg::VelocityVehicle>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ars548_messages::msg::VelocityVehicle>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ars548_messages::msg::VelocityVehicle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARS548_MESSAGES__MSG__DETAIL__VELOCITY_VEHICLE__TRAITS_HPP_
