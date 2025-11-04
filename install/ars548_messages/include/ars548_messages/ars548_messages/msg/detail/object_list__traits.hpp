// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ars548_messages:msg/ObjectList.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__OBJECT_LIST__TRAITS_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__OBJECT_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ars548_messages/msg/detail/object_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'objectlist_objects'
#include "ars548_messages/msg/detail/object__traits.hpp"

namespace ars548_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectList & msg,
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

  // member: objectlist_numofobjects
  {
    out << "objectlist_numofobjects: ";
    rosidl_generator_traits::value_to_yaml(msg.objectlist_numofobjects, out);
    out << ", ";
  }

  // member: objectlist_objects
  {
    if (msg.objectlist_objects.size() == 0) {
      out << "objectlist_objects: []";
    } else {
      out << "objectlist_objects: [";
      size_t pending_items = msg.objectlist_objects.size();
      for (auto item : msg.objectlist_objects) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectList & msg,
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

  // member: objectlist_numofobjects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "objectlist_numofobjects: ";
    rosidl_generator_traits::value_to_yaml(msg.objectlist_numofobjects, out);
    out << "\n";
  }

  // member: objectlist_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objectlist_objects.size() == 0) {
      out << "objectlist_objects: []\n";
    } else {
      out << "objectlist_objects:\n";
      for (auto item : msg.objectlist_objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectList & msg, bool use_flow_style = false)
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
  const ars548_messages::msg::ObjectList & msg,
  std::ostream & out, size_t indentation = 0)
{
  ars548_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ars548_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const ars548_messages::msg::ObjectList & msg)
{
  return ars548_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ars548_messages::msg::ObjectList>()
{
  return "ars548_messages::msg::ObjectList";
}

template<>
inline const char * name<ars548_messages::msg::ObjectList>()
{
  return "ars548_messages/msg/ObjectList";
}

template<>
struct has_fixed_size<ars548_messages::msg::ObjectList>
  : std::integral_constant<bool, has_fixed_size<ars548_messages::msg::Object>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ars548_messages::msg::ObjectList>
  : std::integral_constant<bool, has_bounded_size<ars548_messages::msg::Object>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ars548_messages::msg::ObjectList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARS548_MESSAGES__MSG__DETAIL__OBJECT_LIST__TRAITS_HPP_
