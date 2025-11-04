// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ars548_messages:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__STATUS__TRAITS_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ars548_messages/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ars548_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const Status & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp_nanoseconds
  {
    out << "timestamp_nanoseconds: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_nanoseconds, out);
    out << ", ";
  }

  // member: timestamp_seconds
  {
    out << "timestamp_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_seconds, out);
    out << ", ";
  }

  // member: timestamp_syncstatus
  {
    out << "timestamp_syncstatus: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_syncstatus, out);
    out << ", ";
  }

  // member: swversion_major
  {
    out << "swversion_major: ";
    rosidl_generator_traits::value_to_yaml(msg.swversion_major, out);
    out << ", ";
  }

  // member: swversion_minor
  {
    out << "swversion_minor: ";
    rosidl_generator_traits::value_to_yaml(msg.swversion_minor, out);
    out << ", ";
  }

  // member: swversion_patch
  {
    out << "swversion_patch: ";
    rosidl_generator_traits::value_to_yaml(msg.swversion_patch, out);
    out << ", ";
  }

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

  // member: frequencyslot
  {
    out << "frequencyslot: ";
    rosidl_generator_traits::value_to_yaml(msg.frequencyslot, out);
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

  // member: configurationcounter
  {
    out << "configurationcounter: ";
    rosidl_generator_traits::value_to_yaml(msg.configurationcounter, out);
    out << ", ";
  }

  // member: status_longitudinalvelocity
  {
    out << "status_longitudinalvelocity: ";
    rosidl_generator_traits::value_to_yaml(msg.status_longitudinalvelocity, out);
    out << ", ";
  }

  // member: status_longitudinalacceleration
  {
    out << "status_longitudinalacceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.status_longitudinalacceleration, out);
    out << ", ";
  }

  // member: status_lateralacceleration
  {
    out << "status_lateralacceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.status_lateralacceleration, out);
    out << ", ";
  }

  // member: status_yawrate
  {
    out << "status_yawrate: ";
    rosidl_generator_traits::value_to_yaml(msg.status_yawrate, out);
    out << ", ";
  }

  // member: status_steeringangle
  {
    out << "status_steeringangle: ";
    rosidl_generator_traits::value_to_yaml(msg.status_steeringangle, out);
    out << ", ";
  }

  // member: status_drivingdirection
  {
    out << "status_drivingdirection: ";
    rosidl_generator_traits::value_to_yaml(msg.status_drivingdirection, out);
    out << ", ";
  }

  // member: status_characteristicspeed
  {
    out << "status_characteristicspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.status_characteristicspeed, out);
    out << ", ";
  }

  // member: status_radarstatus
  {
    out << "status_radarstatus: ";
    rosidl_generator_traits::value_to_yaml(msg.status_radarstatus, out);
    out << ", ";
  }

  // member: status_voltagestatus
  {
    out << "status_voltagestatus: ";
    rosidl_generator_traits::value_to_yaml(msg.status_voltagestatus, out);
    out << ", ";
  }

  // member: status_temperaturestatus
  {
    out << "status_temperaturestatus: ";
    rosidl_generator_traits::value_to_yaml(msg.status_temperaturestatus, out);
    out << ", ";
  }

  // member: status_blockagestatus
  {
    out << "status_blockagestatus: ";
    rosidl_generator_traits::value_to_yaml(msg.status_blockagestatus, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp_nanoseconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_nanoseconds: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_nanoseconds, out);
    out << "\n";
  }

  // member: timestamp_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_seconds, out);
    out << "\n";
  }

  // member: timestamp_syncstatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_syncstatus: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_syncstatus, out);
    out << "\n";
  }

  // member: swversion_major
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "swversion_major: ";
    rosidl_generator_traits::value_to_yaml(msg.swversion_major, out);
    out << "\n";
  }

  // member: swversion_minor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "swversion_minor: ";
    rosidl_generator_traits::value_to_yaml(msg.swversion_minor, out);
    out << "\n";
  }

  // member: swversion_patch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "swversion_patch: ";
    rosidl_generator_traits::value_to_yaml(msg.swversion_patch, out);
    out << "\n";
  }

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

  // member: frequencyslot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequencyslot: ";
    rosidl_generator_traits::value_to_yaml(msg.frequencyslot, out);
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

  // member: configurationcounter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "configurationcounter: ";
    rosidl_generator_traits::value_to_yaml(msg.configurationcounter, out);
    out << "\n";
  }

  // member: status_longitudinalvelocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_longitudinalvelocity: ";
    rosidl_generator_traits::value_to_yaml(msg.status_longitudinalvelocity, out);
    out << "\n";
  }

  // member: status_longitudinalacceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_longitudinalacceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.status_longitudinalacceleration, out);
    out << "\n";
  }

  // member: status_lateralacceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_lateralacceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.status_lateralacceleration, out);
    out << "\n";
  }

  // member: status_yawrate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_yawrate: ";
    rosidl_generator_traits::value_to_yaml(msg.status_yawrate, out);
    out << "\n";
  }

  // member: status_steeringangle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_steeringangle: ";
    rosidl_generator_traits::value_to_yaml(msg.status_steeringangle, out);
    out << "\n";
  }

  // member: status_drivingdirection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_drivingdirection: ";
    rosidl_generator_traits::value_to_yaml(msg.status_drivingdirection, out);
    out << "\n";
  }

  // member: status_characteristicspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_characteristicspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.status_characteristicspeed, out);
    out << "\n";
  }

  // member: status_radarstatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_radarstatus: ";
    rosidl_generator_traits::value_to_yaml(msg.status_radarstatus, out);
    out << "\n";
  }

  // member: status_voltagestatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_voltagestatus: ";
    rosidl_generator_traits::value_to_yaml(msg.status_voltagestatus, out);
    out << "\n";
  }

  // member: status_temperaturestatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_temperaturestatus: ";
    rosidl_generator_traits::value_to_yaml(msg.status_temperaturestatus, out);
    out << "\n";
  }

  // member: status_blockagestatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_blockagestatus: ";
    rosidl_generator_traits::value_to_yaml(msg.status_blockagestatus, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Status & msg, bool use_flow_style = false)
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
  const ars548_messages::msg::Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  ars548_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ars548_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const ars548_messages::msg::Status & msg)
{
  return ars548_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ars548_messages::msg::Status>()
{
  return "ars548_messages::msg::Status";
}

template<>
inline const char * name<ars548_messages::msg::Status>()
{
  return "ars548_messages/msg/Status";
}

template<>
struct has_fixed_size<ars548_messages::msg::Status>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ars548_messages::msg::Status>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ars548_messages::msg::Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARS548_MESSAGES__MSG__DETAIL__STATUS__TRAITS_HPP_
