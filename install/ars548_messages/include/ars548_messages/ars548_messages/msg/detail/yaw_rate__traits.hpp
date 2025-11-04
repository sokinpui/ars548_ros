// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ars548_messages:msg/YawRate.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__YAW_RATE__TRAITS_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__YAW_RATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ars548_messages/msg/detail/yaw_rate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ars548_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const YawRate & msg,
  std::ostream & out)
{
  out << "{";
  // member: yawrateerramp
  {
    out << "yawrateerramp: ";
    rosidl_generator_traits::value_to_yaml(msg.yawrateerramp, out);
    out << ", ";
  }

  // member: yawrateerramp_invalidflag
  {
    out << "yawrateerramp_invalidflag: ";
    rosidl_generator_traits::value_to_yaml(msg.yawrateerramp_invalidflag, out);
    out << ", ";
  }

  // member: qualifieryawrate
  {
    out << "qualifieryawrate: ";
    rosidl_generator_traits::value_to_yaml(msg.qualifieryawrate, out);
    out << ", ";
  }

  // member: yawrate
  {
    out << "yawrate: ";
    rosidl_generator_traits::value_to_yaml(msg.yawrate, out);
    out << ", ";
  }

  // member: yawrate_invalidflag
  {
    out << "yawrate_invalidflag: ";
    rosidl_generator_traits::value_to_yaml(msg.yawrate_invalidflag, out);
    out << ", ";
  }

  // member: yawrateeventdataqualifier
  {
    out << "yawrateeventdataqualifier: ";
    rosidl_generator_traits::value_to_yaml(msg.yawrateeventdataqualifier, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const YawRate & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: yawrateerramp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawrateerramp: ";
    rosidl_generator_traits::value_to_yaml(msg.yawrateerramp, out);
    out << "\n";
  }

  // member: yawrateerramp_invalidflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawrateerramp_invalidflag: ";
    rosidl_generator_traits::value_to_yaml(msg.yawrateerramp_invalidflag, out);
    out << "\n";
  }

  // member: qualifieryawrate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qualifieryawrate: ";
    rosidl_generator_traits::value_to_yaml(msg.qualifieryawrate, out);
    out << "\n";
  }

  // member: yawrate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawrate: ";
    rosidl_generator_traits::value_to_yaml(msg.yawrate, out);
    out << "\n";
  }

  // member: yawrate_invalidflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawrate_invalidflag: ";
    rosidl_generator_traits::value_to_yaml(msg.yawrate_invalidflag, out);
    out << "\n";
  }

  // member: yawrateeventdataqualifier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawrateeventdataqualifier: ";
    rosidl_generator_traits::value_to_yaml(msg.yawrateeventdataqualifier, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const YawRate & msg, bool use_flow_style = false)
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
  const ars548_messages::msg::YawRate & msg,
  std::ostream & out, size_t indentation = 0)
{
  ars548_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ars548_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const ars548_messages::msg::YawRate & msg)
{
  return ars548_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ars548_messages::msg::YawRate>()
{
  return "ars548_messages::msg::YawRate";
}

template<>
inline const char * name<ars548_messages::msg::YawRate>()
{
  return "ars548_messages/msg/YawRate";
}

template<>
struct has_fixed_size<ars548_messages::msg::YawRate>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ars548_messages::msg::YawRate>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ars548_messages::msg::YawRate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARS548_MESSAGES__MSG__DETAIL__YAW_RATE__TRAITS_HPP_
