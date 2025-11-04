// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ars548_messages:msg/SensorConfiguration.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__SENSOR_CONFIGURATION__TRAITS_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__SENSOR_CONFIGURATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ars548_messages/msg/detail/sensor_configuration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ars548_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorConfiguration & msg,
  std::ostream & out)
{
  out << "{";
  // member: longitudinal
  {
    out << "longitudinal: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal, out);
    out << ", ";
  }

  // member: lateral
  {
    out << "lateral: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral, out);
    out << ", ";
  }

  // member: vertical
  {
    out << "vertical: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: plugorientation
  {
    out << "plugorientation: ";
    rosidl_generator_traits::value_to_yaml(msg.plugorientation, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: wheelbase
  {
    out << "wheelbase: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelbase, out);
    out << ", ";
  }

  // member: maximumdistance
  {
    out << "maximumdistance: ";
    rosidl_generator_traits::value_to_yaml(msg.maximumdistance, out);
    out << ", ";
  }

  // member: frequencslot
  {
    out << "frequencslot: ";
    rosidl_generator_traits::value_to_yaml(msg.frequencslot, out);
    out << ", ";
  }

  // member: cycletime
  {
    out << "cycletime: ";
    rosidl_generator_traits::value_to_yaml(msg.cycletime, out);
    out << ", ";
  }

  // member: timeslot
  {
    out << "timeslot: ";
    rosidl_generator_traits::value_to_yaml(msg.timeslot, out);
    out << ", ";
  }

  // member: hcc
  {
    out << "hcc: ";
    rosidl_generator_traits::value_to_yaml(msg.hcc, out);
    out << ", ";
  }

  // member: powersave_standstill
  {
    out << "powersave_standstill: ";
    rosidl_generator_traits::value_to_yaml(msg.powersave_standstill, out);
    out << ", ";
  }

  // member: sensoripaddress_0
  {
    out << "sensoripaddress_0: ";
    rosidl_generator_traits::value_to_yaml(msg.sensoripaddress_0, out);
    out << ", ";
  }

  // member: sensoripaddress_1
  {
    out << "sensoripaddress_1: ";
    rosidl_generator_traits::value_to_yaml(msg.sensoripaddress_1, out);
    out << ", ";
  }

  // member: newsensormounting
  {
    out << "newsensormounting: ";
    rosidl_generator_traits::value_to_yaml(msg.newsensormounting, out);
    out << ", ";
  }

  // member: newvehicleparameters
  {
    out << "newvehicleparameters: ";
    rosidl_generator_traits::value_to_yaml(msg.newvehicleparameters, out);
    out << ", ";
  }

  // member: newradarparameters
  {
    out << "newradarparameters: ";
    rosidl_generator_traits::value_to_yaml(msg.newradarparameters, out);
    out << ", ";
  }

  // member: newnetworkconfiguration
  {
    out << "newnetworkconfiguration: ";
    rosidl_generator_traits::value_to_yaml(msg.newnetworkconfiguration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorConfiguration & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: longitudinal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal, out);
    out << "\n";
  }

  // member: lateral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral, out);
    out << "\n";
  }

  // member: vertical
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: plugorientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plugorientation: ";
    rosidl_generator_traits::value_to_yaml(msg.plugorientation, out);
    out << "\n";
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: wheelbase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheelbase: ";
    rosidl_generator_traits::value_to_yaml(msg.wheelbase, out);
    out << "\n";
  }

  // member: maximumdistance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximumdistance: ";
    rosidl_generator_traits::value_to_yaml(msg.maximumdistance, out);
    out << "\n";
  }

  // member: frequencslot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequencslot: ";
    rosidl_generator_traits::value_to_yaml(msg.frequencslot, out);
    out << "\n";
  }

  // member: cycletime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cycletime: ";
    rosidl_generator_traits::value_to_yaml(msg.cycletime, out);
    out << "\n";
  }

  // member: timeslot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeslot: ";
    rosidl_generator_traits::value_to_yaml(msg.timeslot, out);
    out << "\n";
  }

  // member: hcc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hcc: ";
    rosidl_generator_traits::value_to_yaml(msg.hcc, out);
    out << "\n";
  }

  // member: powersave_standstill
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "powersave_standstill: ";
    rosidl_generator_traits::value_to_yaml(msg.powersave_standstill, out);
    out << "\n";
  }

  // member: sensoripaddress_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensoripaddress_0: ";
    rosidl_generator_traits::value_to_yaml(msg.sensoripaddress_0, out);
    out << "\n";
  }

  // member: sensoripaddress_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensoripaddress_1: ";
    rosidl_generator_traits::value_to_yaml(msg.sensoripaddress_1, out);
    out << "\n";
  }

  // member: newsensormounting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "newsensormounting: ";
    rosidl_generator_traits::value_to_yaml(msg.newsensormounting, out);
    out << "\n";
  }

  // member: newvehicleparameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "newvehicleparameters: ";
    rosidl_generator_traits::value_to_yaml(msg.newvehicleparameters, out);
    out << "\n";
  }

  // member: newradarparameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "newradarparameters: ";
    rosidl_generator_traits::value_to_yaml(msg.newradarparameters, out);
    out << "\n";
  }

  // member: newnetworkconfiguration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "newnetworkconfiguration: ";
    rosidl_generator_traits::value_to_yaml(msg.newnetworkconfiguration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorConfiguration & msg, bool use_flow_style = false)
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
  const ars548_messages::msg::SensorConfiguration & msg,
  std::ostream & out, size_t indentation = 0)
{
  ars548_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ars548_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const ars548_messages::msg::SensorConfiguration & msg)
{
  return ars548_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ars548_messages::msg::SensorConfiguration>()
{
  return "ars548_messages::msg::SensorConfiguration";
}

template<>
inline const char * name<ars548_messages::msg::SensorConfiguration>()
{
  return "ars548_messages/msg/SensorConfiguration";
}

template<>
struct has_fixed_size<ars548_messages::msg::SensorConfiguration>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ars548_messages::msg::SensorConfiguration>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ars548_messages::msg::SensorConfiguration>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARS548_MESSAGES__MSG__DETAIL__SENSOR_CONFIGURATION__TRAITS_HPP_
