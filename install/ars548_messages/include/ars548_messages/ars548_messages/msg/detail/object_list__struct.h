// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ars548_messages:msg/ObjectList.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__OBJECT_LIST__STRUCT_H_
#define ARS548_MESSAGES__MSG__DETAIL__OBJECT_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'objectlist_objects'
#include "ars548_messages/msg/detail/object__struct.h"

/// Struct defined in msg/ObjectList in the package ars548_messages.
typedef struct ars548_messages__msg__ObjectList
{
  std_msgs__msg__Header header;
  /// Checksum (E2E Profile 7) (Reserved)
  uint64_t crc;
  /// Len (E2E Profile 7) (Reserved)
  uint32_t length;
  /// SQC (E2E Profile 7) (Reserved)
  uint32_t sqc;
  /// Data ID (E2E Profile 7) (Reserved)
  uint32_t dataid;
  /// Timestamp Nanoseconds
  uint32_t timestamp_nanoseconds;
  /// Timestamp Seconds
  uint32_t timestamp_seconds;
  /// Timestamp Sync Status
  uint8_t timestamp_syncstatus;
  /// (unused) Event Data Qualifier
  uint32_t eventdataqualifier;
  /// (unused) Extended Qualifier
  uint8_t extendedqualifier;
  /// Number of Objects
  uint8_t objectlist_numofobjects;
  /// Object Array
  ars548_messages__msg__Object objectlist_objects[50];
} ars548_messages__msg__ObjectList;

// Struct for a sequence of ars548_messages__msg__ObjectList.
typedef struct ars548_messages__msg__ObjectList__Sequence
{
  ars548_messages__msg__ObjectList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ars548_messages__msg__ObjectList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARS548_MESSAGES__MSG__DETAIL__OBJECT_LIST__STRUCT_H_
