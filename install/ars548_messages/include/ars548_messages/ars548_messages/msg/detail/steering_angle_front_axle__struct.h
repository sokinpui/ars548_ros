// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ars548_messages:msg/SteeringAngleFrontAxle.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__STEERING_ANGLE_FRONT_AXLE__STRUCT_H_
#define ARS548_MESSAGES__MSG__DETAIL__STEERING_ANGLE_FRONT_AXLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SteeringAngleFrontAxle in the package ars548_messages.
typedef struct ars548_messages__msg__SteeringAngleFrontAxle
{
  /// (unused) Steering angle front axle qualifier
  uint8_t qualifiersteeringanglefrontaxle;
  /// (unused) Error amplitude of steering angle front axle
  float steeringanglefrontaxleerramp;
  /// (unused) Invalid flag steering angle front axle errAmp
  uint8_t steeringanglefrontaxleerramp_invalidflag;
  /// Steering angle front axle
  float steeringanglefrontaxle;
  /// (unused) Invalid flag steeting angle front axle
  uint8_t steeringanglefrontaxle_invalidflag;
  /// (unused) Event data qualifier steering angle front axle
  uint8_t steeringanglefrontaxleeventdataqualifier;
} ars548_messages__msg__SteeringAngleFrontAxle;

// Struct for a sequence of ars548_messages__msg__SteeringAngleFrontAxle.
typedef struct ars548_messages__msg__SteeringAngleFrontAxle__Sequence
{
  ars548_messages__msg__SteeringAngleFrontAxle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ars548_messages__msg__SteeringAngleFrontAxle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARS548_MESSAGES__MSG__DETAIL__STEERING_ANGLE_FRONT_AXLE__STRUCT_H_
