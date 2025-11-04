// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ars548_messages:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__DETECTION__TRAITS_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ars548_messages/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ars548_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const Detection & msg,
  std::ostream & out)
{
  out << "{";
  // member: f_azimuthangle
  {
    out << "f_azimuthangle: ";
    rosidl_generator_traits::value_to_yaml(msg.f_azimuthangle, out);
    out << ", ";
  }

  // member: f_azimuthanglestd
  {
    out << "f_azimuthanglestd: ";
    rosidl_generator_traits::value_to_yaml(msg.f_azimuthanglestd, out);
    out << ", ";
  }

  // member: u_invalidflags
  {
    out << "u_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_invalidflags, out);
    out << ", ";
  }

  // member: f_elevationangle
  {
    out << "f_elevationangle: ";
    rosidl_generator_traits::value_to_yaml(msg.f_elevationangle, out);
    out << ", ";
  }

  // member: f_elevationanglestd
  {
    out << "f_elevationanglestd: ";
    rosidl_generator_traits::value_to_yaml(msg.f_elevationanglestd, out);
    out << ", ";
  }

  // member: f_range
  {
    out << "f_range: ";
    rosidl_generator_traits::value_to_yaml(msg.f_range, out);
    out << ", ";
  }

  // member: f_rangestd
  {
    out << "f_rangestd: ";
    rosidl_generator_traits::value_to_yaml(msg.f_rangestd, out);
    out << ", ";
  }

  // member: f_rangerate
  {
    out << "f_rangerate: ";
    rosidl_generator_traits::value_to_yaml(msg.f_rangerate, out);
    out << ", ";
  }

  // member: f_rangeratestd
  {
    out << "f_rangeratestd: ";
    rosidl_generator_traits::value_to_yaml(msg.f_rangeratestd, out);
    out << ", ";
  }

  // member: s_rcs
  {
    out << "s_rcs: ";
    rosidl_generator_traits::value_to_yaml(msg.s_rcs, out);
    out << ", ";
  }

  // member: u_measurementid
  {
    out << "u_measurementid: ";
    rosidl_generator_traits::value_to_yaml(msg.u_measurementid, out);
    out << ", ";
  }

  // member: u_positivepredictivevalue
  {
    out << "u_positivepredictivevalue: ";
    rosidl_generator_traits::value_to_yaml(msg.u_positivepredictivevalue, out);
    out << ", ";
  }

  // member: u_classification
  {
    out << "u_classification: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification, out);
    out << ", ";
  }

  // member: u_multitargetprobabilitym
  {
    out << "u_multitargetprobabilitym: ";
    rosidl_generator_traits::value_to_yaml(msg.u_multitargetprobabilitym, out);
    out << ", ";
  }

  // member: u_objectid
  {
    out << "u_objectid: ";
    rosidl_generator_traits::value_to_yaml(msg.u_objectid, out);
    out << ", ";
  }

  // member: u_ambiguityflag
  {
    out << "u_ambiguityflag: ";
    rosidl_generator_traits::value_to_yaml(msg.u_ambiguityflag, out);
    out << ", ";
  }

  // member: u_sortindex
  {
    out << "u_sortindex: ";
    rosidl_generator_traits::value_to_yaml(msg.u_sortindex, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: f_azimuthangle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_azimuthangle: ";
    rosidl_generator_traits::value_to_yaml(msg.f_azimuthangle, out);
    out << "\n";
  }

  // member: f_azimuthanglestd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_azimuthanglestd: ";
    rosidl_generator_traits::value_to_yaml(msg.f_azimuthanglestd, out);
    out << "\n";
  }

  // member: u_invalidflags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_invalidflags, out);
    out << "\n";
  }

  // member: f_elevationangle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_elevationangle: ";
    rosidl_generator_traits::value_to_yaml(msg.f_elevationangle, out);
    out << "\n";
  }

  // member: f_elevationanglestd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_elevationanglestd: ";
    rosidl_generator_traits::value_to_yaml(msg.f_elevationanglestd, out);
    out << "\n";
  }

  // member: f_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_range: ";
    rosidl_generator_traits::value_to_yaml(msg.f_range, out);
    out << "\n";
  }

  // member: f_rangestd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_rangestd: ";
    rosidl_generator_traits::value_to_yaml(msg.f_rangestd, out);
    out << "\n";
  }

  // member: f_rangerate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_rangerate: ";
    rosidl_generator_traits::value_to_yaml(msg.f_rangerate, out);
    out << "\n";
  }

  // member: f_rangeratestd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_rangeratestd: ";
    rosidl_generator_traits::value_to_yaml(msg.f_rangeratestd, out);
    out << "\n";
  }

  // member: s_rcs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_rcs: ";
    rosidl_generator_traits::value_to_yaml(msg.s_rcs, out);
    out << "\n";
  }

  // member: u_measurementid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_measurementid: ";
    rosidl_generator_traits::value_to_yaml(msg.u_measurementid, out);
    out << "\n";
  }

  // member: u_positivepredictivevalue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_positivepredictivevalue: ";
    rosidl_generator_traits::value_to_yaml(msg.u_positivepredictivevalue, out);
    out << "\n";
  }

  // member: u_classification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_classification: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification, out);
    out << "\n";
  }

  // member: u_multitargetprobabilitym
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_multitargetprobabilitym: ";
    rosidl_generator_traits::value_to_yaml(msg.u_multitargetprobabilitym, out);
    out << "\n";
  }

  // member: u_objectid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_objectid: ";
    rosidl_generator_traits::value_to_yaml(msg.u_objectid, out);
    out << "\n";
  }

  // member: u_ambiguityflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_ambiguityflag: ";
    rosidl_generator_traits::value_to_yaml(msg.u_ambiguityflag, out);
    out << "\n";
  }

  // member: u_sortindex
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_sortindex: ";
    rosidl_generator_traits::value_to_yaml(msg.u_sortindex, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Detection & msg, bool use_flow_style = false)
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
  const ars548_messages::msg::Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  ars548_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ars548_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const ars548_messages::msg::Detection & msg)
{
  return ars548_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ars548_messages::msg::Detection>()
{
  return "ars548_messages::msg::Detection";
}

template<>
inline const char * name<ars548_messages::msg::Detection>()
{
  return "ars548_messages/msg/Detection";
}

template<>
struct has_fixed_size<ars548_messages::msg::Detection>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ars548_messages::msg::Detection>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ars548_messages::msg::Detection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARS548_MESSAGES__MSG__DETAIL__DETECTION__TRAITS_HPP_
