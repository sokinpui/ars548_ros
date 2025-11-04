// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ars548_messages:msg/SensorConfiguration.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__SENSOR_CONFIGURATION__STRUCT_H_
#define ARS548_MESSAGES__MSG__DETAIL__SENSOR_CONFIGURATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SensorConfiguration in the package ars548_messages.
typedef struct ars548_messages__msg__SensorConfiguration
{
  /// Longitudinal sensor position (AUTOSAR)
  float longitudinal;
  /// Lateral sensor position (AUTOSAR)
  float lateral;
  /// Vertical sensor position (AUTOSAR)
  float vertical;
  /// Sensor yaw angle (AUTOSAR)
  float yaw;
  /// Sensor pitch angle (AUTOSAR)
  float pitch;
  /// Orientation of plug
  uint8_t plugorientation;
  /// Vehicle length
  float length;
  /// Vehicle width
  float width;
  /// Vehicle height
  float height;
  /// Vehicle wheelbase
  float wheelbase;
  /// Maximum detection distance
  uint16_t maximumdistance;
  /// Center frequency (if MaximumDistance < 190 m only Mid can be selected)
  uint8_t frequencslot;
  /// Cycle time
  uint8_t cycletime;
  /// Cycle offset
  uint8_t timeslot;
  /// Country code
  uint8_t hcc;
  /// Power saving in standstill
  uint8_t powersave_standstill;
  /// Sensor IP address
  uint32_t sensoripaddress_0;
  /// Reserved (Configure as 2852025457 or 169.254.116.113)
  uint32_t sensoripaddress_1;
  /// Flag if new sensor mounting position shall be configured
  uint8_t newsensormounting;
  /// Flag if new vehicle parameters position shall be configured
  uint8_t newvehicleparameters;
  /// Flag if new radar parameter shall be configured
  uint8_t newradarparameters;
  /// Flag if new IP address shall be configured
  uint8_t newnetworkconfiguration;
} ars548_messages__msg__SensorConfiguration;

// Struct for a sequence of ars548_messages__msg__SensorConfiguration.
typedef struct ars548_messages__msg__SensorConfiguration__Sequence
{
  ars548_messages__msg__SensorConfiguration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ars548_messages__msg__SensorConfiguration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARS548_MESSAGES__MSG__DETAIL__SENSOR_CONFIGURATION__STRUCT_H_
