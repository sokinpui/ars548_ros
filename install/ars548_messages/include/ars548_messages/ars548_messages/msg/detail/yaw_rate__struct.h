// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ars548_messages:msg/YawRate.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__YAW_RATE__STRUCT_H_
#define ARS548_MESSAGES__MSG__DETAIL__YAW_RATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/YawRate in the package ars548_messages.
typedef struct ars548_messages__msg__YawRate
{
  /// (Unused) Error Amplitude of YawRate
  float yawrateerramp;
  /// (Unused) Invalid flags AccelLatErrAmp
  uint8_t yawrateerramp_invalidflag;
  /// (Unused) YawRate qualifier
  uint8_t qualifieryawrate;
  /// YawRate
  float yawrate;
  /// (Unused) Invalid flag Yaw Rate
  uint8_t yawrate_invalidflag;
  /// (Unused) Event data qualifier YawRate
  uint8_t yawrateeventdataqualifier;
} ars548_messages__msg__YawRate;

// Struct for a sequence of ars548_messages__msg__YawRate.
typedef struct ars548_messages__msg__YawRate__Sequence
{
  ars548_messages__msg__YawRate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ars548_messages__msg__YawRate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARS548_MESSAGES__MSG__DETAIL__YAW_RATE__STRUCT_H_
