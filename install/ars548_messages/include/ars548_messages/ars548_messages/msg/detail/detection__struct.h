// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ars548_messages:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__DETECTION__STRUCT_H_
#define ARS548_MESSAGES__MSG__DETAIL__DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Detection in the package ars548_messages.
typedef struct ars548_messages__msg__Detection
{
  /// Unaligned Detection Azimuth Angle
  float f_azimuthangle;
  /// Azimuth Angle Std
  float f_azimuthanglestd;
  /// Detection Invalid Flags
  uint8_t u_invalidflags;
  /// Unaligned Detection Elevation Angle
  float f_elevationangle;
  /// Elevation Angle Std
  float f_elevationanglestd;
  /// Detection Radial Distance
  float f_range;
  /// Radial Distance Std
  float f_rangestd;
  /// Detection Radial Velocity
  float f_rangerate;
  /// Radial Velocity Std
  float f_rangeratestd;
  /// Detection RCS
  int8_t s_rcs;
  /// Detection ID
  uint16_t u_measurementid;
  /// Existence Probability
  uint8_t u_positivepredictivevalue;
  /// Detection Classification
  uint8_t u_classification;
  /// Multi-Target Probability
  uint8_t u_multitargetprobabilitym;
  /// Associated Object ID
  uint16_t u_objectid;
  /// Probability for resolved velocity ambiguity
  uint8_t u_ambiguityflag;
  /// tbd
  uint16_t u_sortindex;
} ars548_messages__msg__Detection;

// Struct for a sequence of ars548_messages__msg__Detection.
typedef struct ars548_messages__msg__Detection__Sequence
{
  ars548_messages__msg__Detection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ars548_messages__msg__Detection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARS548_MESSAGES__MSG__DETAIL__DETECTION__STRUCT_H_
