// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ars548_messages:msg/SteeringAngleFrontAxle.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__STEERING_ANGLE_FRONT_AXLE__TRAITS_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__STEERING_ANGLE_FRONT_AXLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ars548_messages/msg/detail/steering_angle_front_axle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ars548_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const SteeringAngleFrontAxle & msg,
  std::ostream & out)
{
  out << "{";
  // member: qualifiersteeringanglefrontaxle
  {
    out << "qualifiersteeringanglefrontaxle: ";
    rosidl_generator_traits::value_to_yaml(msg.qualifiersteeringanglefrontaxle, out);
    out << ", ";
  }

  // member: steeringanglefrontaxleerramp
  {
    out << "steeringanglefrontaxleerramp: ";
    rosidl_generator_traits::value_to_yaml(msg.steeringanglefrontaxleerramp, out);
    out << ", ";
  }

  // member: steeringanglefrontaxleerramp_invalidflag
  {
    out << "steeringanglefrontaxleerramp_invalidflag: ";
    rosidl_generator_traits::value_to_yaml(msg.steeringanglefrontaxleerramp_invalidflag, out);
    out << ", ";
  }

  // member: steeringanglefrontaxle
  {
    out << "steeringanglefrontaxle: ";
    rosidl_generator_traits::value_to_yaml(msg.steeringanglefrontaxle, out);
    out << ", ";
  }

  // member: steeringanglefrontaxle_invalidflag
  {
    out << "steeringanglefrontaxle_invalidflag: ";
    rosidl_generator_traits::value_to_yaml(msg.steeringanglefrontaxle_invalidflag, out);
    out << ", ";
  }

  // member: steeringanglefrontaxleeventdataqualifier
  {
    out << "steeringanglefrontaxleeventdataqualifier: ";
    rosidl_generator_traits::value_to_yaml(msg.steeringanglefrontaxleeventdataqualifier, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SteeringAngleFrontAxle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: qualifiersteeringanglefrontaxle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qualifiersteeringanglefrontaxle: ";
    rosidl_generator_traits::value_to_yaml(msg.qualifiersteeringanglefrontaxle, out);
    out << "\n";
  }

  // member: steeringanglefrontaxleerramp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steeringanglefrontaxleerramp: ";
    rosidl_generator_traits::value_to_yaml(msg.steeringanglefrontaxleerramp, out);
    out << "\n";
  }

  // member: steeringanglefrontaxleerramp_invalidflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steeringanglefrontaxleerramp_invalidflag: ";
    rosidl_generator_traits::value_to_yaml(msg.steeringanglefrontaxleerramp_invalidflag, out);
    out << "\n";
  }

  // member: steeringanglefrontaxle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steeringanglefrontaxle: ";
    rosidl_generator_traits::value_to_yaml(msg.steeringanglefrontaxle, out);
    out << "\n";
  }

  // member: steeringanglefrontaxle_invalidflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steeringanglefrontaxle_invalidflag: ";
    rosidl_generator_traits::value_to_yaml(msg.steeringanglefrontaxle_invalidflag, out);
    out << "\n";
  }

  // member: steeringanglefrontaxleeventdataqualifier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steeringanglefrontaxleeventdataqualifier: ";
    rosidl_generator_traits::value_to_yaml(msg.steeringanglefrontaxleeventdataqualifier, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SteeringAngleFrontAxle & msg, bool use_flow_style = false)
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
  const ars548_messages::msg::SteeringAngleFrontAxle & msg,
  std::ostream & out, size_t indentation = 0)
{
  ars548_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ars548_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const ars548_messages::msg::SteeringAngleFrontAxle & msg)
{
  return ars548_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ars548_messages::msg::SteeringAngleFrontAxle>()
{
  return "ars548_messages::msg::SteeringAngleFrontAxle";
}

template<>
inline const char * name<ars548_messages::msg::SteeringAngleFrontAxle>()
{
  return "ars548_messages/msg/SteeringAngleFrontAxle";
}

template<>
struct has_fixed_size<ars548_messages::msg::SteeringAngleFrontAxle>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ars548_messages::msg::SteeringAngleFrontAxle>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ars548_messages::msg::SteeringAngleFrontAxle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARS548_MESSAGES__MSG__DETAIL__STEERING_ANGLE_FRONT_AXLE__TRAITS_HPP_
