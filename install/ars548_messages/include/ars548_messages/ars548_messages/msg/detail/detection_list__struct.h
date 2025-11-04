// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ars548_messages:msg/DetectionList.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__DETECTION_LIST__STRUCT_H_
#define ARS548_MESSAGES__MSG__DETAIL__DETECTION_LIST__STRUCT_H_

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
// Member 'list_detections'
#include "ars548_messages/msg/detail/detection__struct.h"

/// Struct defined in msg/DetectionList in the package ars548_messages.
typedef struct ars548_messages__msg__DetectionList
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
  /// Event Data Qualifier (unused)
  uint32_t eventdataqualifier;
  /// Extended Qualifier (unused)
  uint8_t extendedqualifier;
  /// Sensor Position Invalid flags (unused)
  uint16_t origin_invalidflags;
  /// Sensor X Position with reference to rear axle
  float origin_xpos;
  /// Sensor X Position STD (unused)
  float origin_xstd;
  /// Sensor Y Position with reference to rear axle
  float origin_ypos;
  /// Sensor Y Position STD (unused)
  float origin_ystd;
  /// Sensor Z Position with reference to rear axle
  float origin_zpos;
  /// Sensor Z Position STD (unused)
  float origin_zstd;
  /// Sensor Roll Angle (unused)
  float origin_roll;
  /// Sensor Roll Angle STD (unused)
  float origin_rollstd;
  /// Sensor Pitch Angle with alignment correction
  float origin_pitch;
  /// Sensor Pitch Angle STD
  float origin_pitchstd;
  /// Sensor Yaw Angle with alignment correction
  float origin_yaw;
  /// Sensor Yaw Angle STD
  float origin_yawstd;
  /// Invalid flags (unused)
  uint8_t list_invalidflags;
  /// Detection Array
  ars548_messages__msg__Detection list_detections[800];
  /// Ambiguity free Doppler velocity range Min
  float list_radveldomain_min;
  /// Ambiguity free Doppler velocity range Max
  float list_radveldomain_max;
  /// Number of Detections
  uint32_t list_numofdetections;
  /// Azimuth Alignment Correction
  float aln_azimuthcorrection;
  /// Elevation Alignment Correction
  float aln_elevationcorrection;
  /// Status of alignment
  uint8_t aln_status;
} ars548_messages__msg__DetectionList;

// Struct for a sequence of ars548_messages__msg__DetectionList.
typedef struct ars548_messages__msg__DetectionList__Sequence
{
  ars548_messages__msg__DetectionList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ars548_messages__msg__DetectionList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARS548_MESSAGES__MSG__DETAIL__DETECTION_LIST__STRUCT_H_
