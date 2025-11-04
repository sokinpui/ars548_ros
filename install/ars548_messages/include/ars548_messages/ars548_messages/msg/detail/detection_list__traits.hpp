// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ars548_messages:msg/DetectionList.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__DETECTION_LIST__TRAITS_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__DETECTION_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ars548_messages/msg/detail/detection_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'list_detections'
#include "ars548_messages/msg/detail/detection__traits.hpp"

namespace ars548_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectionList & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: crc
  {
    out << "crc: ";
    rosidl_generator_traits::value_to_yaml(msg.crc, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: sqc
  {
    out << "sqc: ";
    rosidl_generator_traits::value_to_yaml(msg.sqc, out);
    out << ", ";
  }

  // member: dataid
  {
    out << "dataid: ";
    rosidl_generator_traits::value_to_yaml(msg.dataid, out);
    out << ", ";
  }

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

  // member: eventdataqualifier
  {
    out << "eventdataqualifier: ";
    rosidl_generator_traits::value_to_yaml(msg.eventdataqualifier, out);
    out << ", ";
  }

  // member: extendedqualifier
  {
    out << "extendedqualifier: ";
    rosidl_generator_traits::value_to_yaml(msg.extendedqualifier, out);
    out << ", ";
  }

  // member: origin_invalidflags
  {
    out << "origin_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_invalidflags, out);
    out << ", ";
  }

  // member: origin_xpos
  {
    out << "origin_xpos: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_xpos, out);
    out << ", ";
  }

  // member: origin_xstd
  {
    out << "origin_xstd: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_xstd, out);
    out << ", ";
  }

  // member: origin_ypos
  {
    out << "origin_ypos: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_ypos, out);
    out << ", ";
  }

  // member: origin_ystd
  {
    out << "origin_ystd: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_ystd, out);
    out << ", ";
  }

  // member: origin_zpos
  {
    out << "origin_zpos: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_zpos, out);
    out << ", ";
  }

  // member: origin_zstd
  {
    out << "origin_zstd: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_zstd, out);
    out << ", ";
  }

  // member: origin_roll
  {
    out << "origin_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_roll, out);
    out << ", ";
  }

  // member: origin_rollstd
  {
    out << "origin_rollstd: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_rollstd, out);
    out << ", ";
  }

  // member: origin_pitch
  {
    out << "origin_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_pitch, out);
    out << ", ";
  }

  // member: origin_pitchstd
  {
    out << "origin_pitchstd: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_pitchstd, out);
    out << ", ";
  }

  // member: origin_yaw
  {
    out << "origin_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_yaw, out);
    out << ", ";
  }

  // member: origin_yawstd
  {
    out << "origin_yawstd: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_yawstd, out);
    out << ", ";
  }

  // member: list_invalidflags
  {
    out << "list_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.list_invalidflags, out);
    out << ", ";
  }

  // member: list_detections
  {
    if (msg.list_detections.size() == 0) {
      out << "list_detections: []";
    } else {
      out << "list_detections: [";
      size_t pending_items = msg.list_detections.size();
      for (auto item : msg.list_detections) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: list_radveldomain_min
  {
    out << "list_radveldomain_min: ";
    rosidl_generator_traits::value_to_yaml(msg.list_radveldomain_min, out);
    out << ", ";
  }

  // member: list_radveldomain_max
  {
    out << "list_radveldomain_max: ";
    rosidl_generator_traits::value_to_yaml(msg.list_radveldomain_max, out);
    out << ", ";
  }

  // member: list_numofdetections
  {
    out << "list_numofdetections: ";
    rosidl_generator_traits::value_to_yaml(msg.list_numofdetections, out);
    out << ", ";
  }

  // member: aln_azimuthcorrection
  {
    out << "aln_azimuthcorrection: ";
    rosidl_generator_traits::value_to_yaml(msg.aln_azimuthcorrection, out);
    out << ", ";
  }

  // member: aln_elevationcorrection
  {
    out << "aln_elevationcorrection: ";
    rosidl_generator_traits::value_to_yaml(msg.aln_elevationcorrection, out);
    out << ", ";
  }

  // member: aln_status
  {
    out << "aln_status: ";
    rosidl_generator_traits::value_to_yaml(msg.aln_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectionList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: crc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crc: ";
    rosidl_generator_traits::value_to_yaml(msg.crc, out);
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

  // member: sqc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sqc: ";
    rosidl_generator_traits::value_to_yaml(msg.sqc, out);
    out << "\n";
  }

  // member: dataid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dataid: ";
    rosidl_generator_traits::value_to_yaml(msg.dataid, out);
    out << "\n";
  }

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

  // member: eventdataqualifier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eventdataqualifier: ";
    rosidl_generator_traits::value_to_yaml(msg.eventdataqualifier, out);
    out << "\n";
  }

  // member: extendedqualifier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extendedqualifier: ";
    rosidl_generator_traits::value_to_yaml(msg.extendedqualifier, out);
    out << "\n";
  }

  // member: origin_invalidflags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_invalidflags, out);
    out << "\n";
  }

  // member: origin_xpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_xpos: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_xpos, out);
    out << "\n";
  }

  // member: origin_xstd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_xstd: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_xstd, out);
    out << "\n";
  }

  // member: origin_ypos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_ypos: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_ypos, out);
    out << "\n";
  }

  // member: origin_ystd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_ystd: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_ystd, out);
    out << "\n";
  }

  // member: origin_zpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_zpos: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_zpos, out);
    out << "\n";
  }

  // member: origin_zstd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_zstd: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_zstd, out);
    out << "\n";
  }

  // member: origin_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_roll, out);
    out << "\n";
  }

  // member: origin_rollstd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_rollstd: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_rollstd, out);
    out << "\n";
  }

  // member: origin_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_pitch, out);
    out << "\n";
  }

  // member: origin_pitchstd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_pitchstd: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_pitchstd, out);
    out << "\n";
  }

  // member: origin_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_yaw, out);
    out << "\n";
  }

  // member: origin_yawstd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_yawstd: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_yawstd, out);
    out << "\n";
  }

  // member: list_invalidflags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "list_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.list_invalidflags, out);
    out << "\n";
  }

  // member: list_detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.list_detections.size() == 0) {
      out << "list_detections: []\n";
    } else {
      out << "list_detections:\n";
      for (auto item : msg.list_detections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: list_radveldomain_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "list_radveldomain_min: ";
    rosidl_generator_traits::value_to_yaml(msg.list_radveldomain_min, out);
    out << "\n";
  }

  // member: list_radveldomain_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "list_radveldomain_max: ";
    rosidl_generator_traits::value_to_yaml(msg.list_radveldomain_max, out);
    out << "\n";
  }

  // member: list_numofdetections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "list_numofdetections: ";
    rosidl_generator_traits::value_to_yaml(msg.list_numofdetections, out);
    out << "\n";
  }

  // member: aln_azimuthcorrection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aln_azimuthcorrection: ";
    rosidl_generator_traits::value_to_yaml(msg.aln_azimuthcorrection, out);
    out << "\n";
  }

  // member: aln_elevationcorrection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aln_elevationcorrection: ";
    rosidl_generator_traits::value_to_yaml(msg.aln_elevationcorrection, out);
    out << "\n";
  }

  // member: aln_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aln_status: ";
    rosidl_generator_traits::value_to_yaml(msg.aln_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectionList & msg, bool use_flow_style = false)
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
  const ars548_messages::msg::DetectionList & msg,
  std::ostream & out, size_t indentation = 0)
{
  ars548_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ars548_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const ars548_messages::msg::DetectionList & msg)
{
  return ars548_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ars548_messages::msg::DetectionList>()
{
  return "ars548_messages::msg::DetectionList";
}

template<>
inline const char * name<ars548_messages::msg::DetectionList>()
{
  return "ars548_messages/msg/DetectionList";
}

template<>
struct has_fixed_size<ars548_messages::msg::DetectionList>
  : std::integral_constant<bool, has_fixed_size<ars548_messages::msg::Detection>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ars548_messages::msg::DetectionList>
  : std::integral_constant<bool, has_bounded_size<ars548_messages::msg::Detection>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ars548_messages::msg::DetectionList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARS548_MESSAGES__MSG__DETAIL__DETECTION_LIST__TRAITS_HPP_
