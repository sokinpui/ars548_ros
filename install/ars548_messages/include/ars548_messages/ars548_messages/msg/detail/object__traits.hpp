// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ars548_messages:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__OBJECT__TRAITS_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ars548_messages/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ars548_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const Object & msg,
  std::ostream & out)
{
  out << "{";
  // member: u_statussensor
  {
    out << "u_statussensor: ";
    rosidl_generator_traits::value_to_yaml(msg.u_statussensor, out);
    out << ", ";
  }

  // member: u_id
  {
    out << "u_id: ";
    rosidl_generator_traits::value_to_yaml(msg.u_id, out);
    out << ", ";
  }

  // member: u_age
  {
    out << "u_age: ";
    rosidl_generator_traits::value_to_yaml(msg.u_age, out);
    out << ", ";
  }

  // member: u_statusmeasurement
  {
    out << "u_statusmeasurement: ";
    rosidl_generator_traits::value_to_yaml(msg.u_statusmeasurement, out);
    out << ", ";
  }

  // member: u_statusmovement
  {
    out << "u_statusmovement: ";
    rosidl_generator_traits::value_to_yaml(msg.u_statusmovement, out);
    out << ", ";
  }

  // member: u_position_invalidflags
  {
    out << "u_position_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_invalidflags, out);
    out << ", ";
  }

  // member: u_position_reference
  {
    out << "u_position_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_reference, out);
    out << ", ";
  }

  // member: u_position_x
  {
    out << "u_position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_x, out);
    out << ", ";
  }

  // member: u_position_x_std
  {
    out << "u_position_x_std: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_x_std, out);
    out << ", ";
  }

  // member: u_position_y
  {
    out << "u_position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_y, out);
    out << ", ";
  }

  // member: u_position_y_std
  {
    out << "u_position_y_std: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_y_std, out);
    out << ", ";
  }

  // member: u_position_z
  {
    out << "u_position_z: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_z, out);
    out << ", ";
  }

  // member: u_position_z_std
  {
    out << "u_position_z_std: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_z_std, out);
    out << ", ";
  }

  // member: u_position_covariancexy
  {
    out << "u_position_covariancexy: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_covariancexy, out);
    out << ", ";
  }

  // member: u_position_orientation
  {
    out << "u_position_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_orientation, out);
    out << ", ";
  }

  // member: u_position_orientation_std
  {
    out << "u_position_orientation_std: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_orientation_std, out);
    out << ", ";
  }

  // member: u_existence_invalidflags
  {
    out << "u_existence_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_existence_invalidflags, out);
    out << ", ";
  }

  // member: u_existence_probability
  {
    out << "u_existence_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.u_existence_probability, out);
    out << ", ";
  }

  // member: u_existence_ppv
  {
    out << "u_existence_ppv: ";
    rosidl_generator_traits::value_to_yaml(msg.u_existence_ppv, out);
    out << ", ";
  }

  // member: u_classification_car
  {
    out << "u_classification_car: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_car, out);
    out << ", ";
  }

  // member: u_classification_truck
  {
    out << "u_classification_truck: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_truck, out);
    out << ", ";
  }

  // member: u_classification_motorcycle
  {
    out << "u_classification_motorcycle: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_motorcycle, out);
    out << ", ";
  }

  // member: u_classification_bicycle
  {
    out << "u_classification_bicycle: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_bicycle, out);
    out << ", ";
  }

  // member: u_classification_pedestrian
  {
    out << "u_classification_pedestrian: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_pedestrian, out);
    out << ", ";
  }

  // member: u_classification_animal
  {
    out << "u_classification_animal: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_animal, out);
    out << ", ";
  }

  // member: u_classification_hazard
  {
    out << "u_classification_hazard: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_hazard, out);
    out << ", ";
  }

  // member: u_classification_unknown
  {
    out << "u_classification_unknown: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_unknown, out);
    out << ", ";
  }

  // member: u_classification_overdrivable
  {
    out << "u_classification_overdrivable: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_overdrivable, out);
    out << ", ";
  }

  // member: u_classification_underdrivable
  {
    out << "u_classification_underdrivable: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_underdrivable, out);
    out << ", ";
  }

  // member: u_dynamics_absvel_invalidflags
  {
    out << "u_dynamics_absvel_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_dynamics_absvel_invalidflags, out);
    out << ", ";
  }

  // member: f_dynamics_absvel_x
  {
    out << "f_dynamics_absvel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absvel_x, out);
    out << ", ";
  }

  // member: f_dynamics_absvel_x_std
  {
    out << "f_dynamics_absvel_x_std: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absvel_x_std, out);
    out << ", ";
  }

  // member: f_dynamics_absvel_y
  {
    out << "f_dynamics_absvel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absvel_y, out);
    out << ", ";
  }

  // member: f_dynamics_absvel_y_std
  {
    out << "f_dynamics_absvel_y_std: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absvel_y_std, out);
    out << ", ";
  }

  // member: f_dynamics_absvel_covariancexy
  {
    out << "f_dynamics_absvel_covariancexy: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absvel_covariancexy, out);
    out << ", ";
  }

  // member: u_dynamics_relvel_invalidflags
  {
    out << "u_dynamics_relvel_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_dynamics_relvel_invalidflags, out);
    out << ", ";
  }

  // member: f_dynamics_relvel_x
  {
    out << "f_dynamics_relvel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relvel_x, out);
    out << ", ";
  }

  // member: f_dynamics_relvel_x_std
  {
    out << "f_dynamics_relvel_x_std: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relvel_x_std, out);
    out << ", ";
  }

  // member: f_dynamics_relvel_y
  {
    out << "f_dynamics_relvel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relvel_y, out);
    out << ", ";
  }

  // member: f_dynamics_relvel_y_std
  {
    out << "f_dynamics_relvel_y_std: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relvel_y_std, out);
    out << ", ";
  }

  // member: f_dynamics_relvel_covariancexy
  {
    out << "f_dynamics_relvel_covariancexy: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relvel_covariancexy, out);
    out << ", ";
  }

  // member: u_dynamics_absaccel_invalidflags
  {
    out << "u_dynamics_absaccel_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_dynamics_absaccel_invalidflags, out);
    out << ", ";
  }

  // member: f_dynamics_absaccel_x
  {
    out << "f_dynamics_absaccel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absaccel_x, out);
    out << ", ";
  }

  // member: f_dynamics_absaccel_x_std
  {
    out << "f_dynamics_absaccel_x_std: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absaccel_x_std, out);
    out << ", ";
  }

  // member: f_dynamics_absaccel_y
  {
    out << "f_dynamics_absaccel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absaccel_y, out);
    out << ", ";
  }

  // member: f_dynamics_absaccel_y_std
  {
    out << "f_dynamics_absaccel_y_std: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absaccel_y_std, out);
    out << ", ";
  }

  // member: f_dynamics_absaccel_covariancexy
  {
    out << "f_dynamics_absaccel_covariancexy: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absaccel_covariancexy, out);
    out << ", ";
  }

  // member: u_dynamics_relaccel_invalidflags
  {
    out << "u_dynamics_relaccel_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_dynamics_relaccel_invalidflags, out);
    out << ", ";
  }

  // member: f_dynamics_relaccel_x
  {
    out << "f_dynamics_relaccel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relaccel_x, out);
    out << ", ";
  }

  // member: f_dynamics_relaccel_x_std
  {
    out << "f_dynamics_relaccel_x_std: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relaccel_x_std, out);
    out << ", ";
  }

  // member: f_dynamics_relaccel_y
  {
    out << "f_dynamics_relaccel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relaccel_y, out);
    out << ", ";
  }

  // member: f_dynamics_relaccel_y_std
  {
    out << "f_dynamics_relaccel_y_std: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relaccel_y_std, out);
    out << ", ";
  }

  // member: f_dynamics_relaccel_covariancexy
  {
    out << "f_dynamics_relaccel_covariancexy: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relaccel_covariancexy, out);
    out << ", ";
  }

  // member: u_dynamics_orientation_invalidflags
  {
    out << "u_dynamics_orientation_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_dynamics_orientation_invalidflags, out);
    out << ", ";
  }

  // member: u_dynamics_orientation_rate_mean
  {
    out << "u_dynamics_orientation_rate_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.u_dynamics_orientation_rate_mean, out);
    out << ", ";
  }

  // member: u_dynamics_orientation_rate_std
  {
    out << "u_dynamics_orientation_rate_std: ";
    rosidl_generator_traits::value_to_yaml(msg.u_dynamics_orientation_rate_std, out);
    out << ", ";
  }

  // member: u_shape_length_status
  {
    out << "u_shape_length_status: ";
    rosidl_generator_traits::value_to_yaml(msg.u_shape_length_status, out);
    out << ", ";
  }

  // member: u_shape_length_edge_invalidflags
  {
    out << "u_shape_length_edge_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_shape_length_edge_invalidflags, out);
    out << ", ";
  }

  // member: u_shape_length_edge_mean
  {
    out << "u_shape_length_edge_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.u_shape_length_edge_mean, out);
    out << ", ";
  }

  // member: u_shape_length_edge_std
  {
    out << "u_shape_length_edge_std: ";
    rosidl_generator_traits::value_to_yaml(msg.u_shape_length_edge_std, out);
    out << ", ";
  }

  // member: u_shape_width_status
  {
    out << "u_shape_width_status: ";
    rosidl_generator_traits::value_to_yaml(msg.u_shape_width_status, out);
    out << ", ";
  }

  // member: u_shape_width_edge_invalidflags
  {
    out << "u_shape_width_edge_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_shape_width_edge_invalidflags, out);
    out << ", ";
  }

  // member: u_shape_width_edge_mean
  {
    out << "u_shape_width_edge_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.u_shape_width_edge_mean, out);
    out << ", ";
  }

  // member: u_shape_width_edge_std
  {
    out << "u_shape_width_edge_std: ";
    rosidl_generator_traits::value_to_yaml(msg.u_shape_width_edge_std, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: u_statussensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_statussensor: ";
    rosidl_generator_traits::value_to_yaml(msg.u_statussensor, out);
    out << "\n";
  }

  // member: u_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_id: ";
    rosidl_generator_traits::value_to_yaml(msg.u_id, out);
    out << "\n";
  }

  // member: u_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_age: ";
    rosidl_generator_traits::value_to_yaml(msg.u_age, out);
    out << "\n";
  }

  // member: u_statusmeasurement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_statusmeasurement: ";
    rosidl_generator_traits::value_to_yaml(msg.u_statusmeasurement, out);
    out << "\n";
  }

  // member: u_statusmovement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_statusmovement: ";
    rosidl_generator_traits::value_to_yaml(msg.u_statusmovement, out);
    out << "\n";
  }

  // member: u_position_invalidflags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_position_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_invalidflags, out);
    out << "\n";
  }

  // member: u_position_reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_position_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_reference, out);
    out << "\n";
  }

  // member: u_position_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_x, out);
    out << "\n";
  }

  // member: u_position_x_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_position_x_std: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_x_std, out);
    out << "\n";
  }

  // member: u_position_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_y, out);
    out << "\n";
  }

  // member: u_position_y_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_position_y_std: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_y_std, out);
    out << "\n";
  }

  // member: u_position_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_position_z: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_z, out);
    out << "\n";
  }

  // member: u_position_z_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_position_z_std: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_z_std, out);
    out << "\n";
  }

  // member: u_position_covariancexy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_position_covariancexy: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_covariancexy, out);
    out << "\n";
  }

  // member: u_position_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_position_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_orientation, out);
    out << "\n";
  }

  // member: u_position_orientation_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_position_orientation_std: ";
    rosidl_generator_traits::value_to_yaml(msg.u_position_orientation_std, out);
    out << "\n";
  }

  // member: u_existence_invalidflags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_existence_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_existence_invalidflags, out);
    out << "\n";
  }

  // member: u_existence_probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_existence_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.u_existence_probability, out);
    out << "\n";
  }

  // member: u_existence_ppv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_existence_ppv: ";
    rosidl_generator_traits::value_to_yaml(msg.u_existence_ppv, out);
    out << "\n";
  }

  // member: u_classification_car
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_classification_car: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_car, out);
    out << "\n";
  }

  // member: u_classification_truck
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_classification_truck: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_truck, out);
    out << "\n";
  }

  // member: u_classification_motorcycle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_classification_motorcycle: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_motorcycle, out);
    out << "\n";
  }

  // member: u_classification_bicycle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_classification_bicycle: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_bicycle, out);
    out << "\n";
  }

  // member: u_classification_pedestrian
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_classification_pedestrian: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_pedestrian, out);
    out << "\n";
  }

  // member: u_classification_animal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_classification_animal: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_animal, out);
    out << "\n";
  }

  // member: u_classification_hazard
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_classification_hazard: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_hazard, out);
    out << "\n";
  }

  // member: u_classification_unknown
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_classification_unknown: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_unknown, out);
    out << "\n";
  }

  // member: u_classification_overdrivable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_classification_overdrivable: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_overdrivable, out);
    out << "\n";
  }

  // member: u_classification_underdrivable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_classification_underdrivable: ";
    rosidl_generator_traits::value_to_yaml(msg.u_classification_underdrivable, out);
    out << "\n";
  }

  // member: u_dynamics_absvel_invalidflags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_dynamics_absvel_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_dynamics_absvel_invalidflags, out);
    out << "\n";
  }

  // member: f_dynamics_absvel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_absvel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absvel_x, out);
    out << "\n";
  }

  // member: f_dynamics_absvel_x_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_absvel_x_std: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absvel_x_std, out);
    out << "\n";
  }

  // member: f_dynamics_absvel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_absvel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absvel_y, out);
    out << "\n";
  }

  // member: f_dynamics_absvel_y_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_absvel_y_std: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absvel_y_std, out);
    out << "\n";
  }

  // member: f_dynamics_absvel_covariancexy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_absvel_covariancexy: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absvel_covariancexy, out);
    out << "\n";
  }

  // member: u_dynamics_relvel_invalidflags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_dynamics_relvel_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_dynamics_relvel_invalidflags, out);
    out << "\n";
  }

  // member: f_dynamics_relvel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_relvel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relvel_x, out);
    out << "\n";
  }

  // member: f_dynamics_relvel_x_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_relvel_x_std: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relvel_x_std, out);
    out << "\n";
  }

  // member: f_dynamics_relvel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_relvel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relvel_y, out);
    out << "\n";
  }

  // member: f_dynamics_relvel_y_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_relvel_y_std: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relvel_y_std, out);
    out << "\n";
  }

  // member: f_dynamics_relvel_covariancexy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_relvel_covariancexy: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relvel_covariancexy, out);
    out << "\n";
  }

  // member: u_dynamics_absaccel_invalidflags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_dynamics_absaccel_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_dynamics_absaccel_invalidflags, out);
    out << "\n";
  }

  // member: f_dynamics_absaccel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_absaccel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absaccel_x, out);
    out << "\n";
  }

  // member: f_dynamics_absaccel_x_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_absaccel_x_std: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absaccel_x_std, out);
    out << "\n";
  }

  // member: f_dynamics_absaccel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_absaccel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absaccel_y, out);
    out << "\n";
  }

  // member: f_dynamics_absaccel_y_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_absaccel_y_std: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absaccel_y_std, out);
    out << "\n";
  }

  // member: f_dynamics_absaccel_covariancexy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_absaccel_covariancexy: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_absaccel_covariancexy, out);
    out << "\n";
  }

  // member: u_dynamics_relaccel_invalidflags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_dynamics_relaccel_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_dynamics_relaccel_invalidflags, out);
    out << "\n";
  }

  // member: f_dynamics_relaccel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_relaccel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relaccel_x, out);
    out << "\n";
  }

  // member: f_dynamics_relaccel_x_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_relaccel_x_std: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relaccel_x_std, out);
    out << "\n";
  }

  // member: f_dynamics_relaccel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_relaccel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relaccel_y, out);
    out << "\n";
  }

  // member: f_dynamics_relaccel_y_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_relaccel_y_std: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relaccel_y_std, out);
    out << "\n";
  }

  // member: f_dynamics_relaccel_covariancexy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_dynamics_relaccel_covariancexy: ";
    rosidl_generator_traits::value_to_yaml(msg.f_dynamics_relaccel_covariancexy, out);
    out << "\n";
  }

  // member: u_dynamics_orientation_invalidflags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_dynamics_orientation_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_dynamics_orientation_invalidflags, out);
    out << "\n";
  }

  // member: u_dynamics_orientation_rate_mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_dynamics_orientation_rate_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.u_dynamics_orientation_rate_mean, out);
    out << "\n";
  }

  // member: u_dynamics_orientation_rate_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_dynamics_orientation_rate_std: ";
    rosidl_generator_traits::value_to_yaml(msg.u_dynamics_orientation_rate_std, out);
    out << "\n";
  }

  // member: u_shape_length_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_shape_length_status: ";
    rosidl_generator_traits::value_to_yaml(msg.u_shape_length_status, out);
    out << "\n";
  }

  // member: u_shape_length_edge_invalidflags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_shape_length_edge_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_shape_length_edge_invalidflags, out);
    out << "\n";
  }

  // member: u_shape_length_edge_mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_shape_length_edge_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.u_shape_length_edge_mean, out);
    out << "\n";
  }

  // member: u_shape_length_edge_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_shape_length_edge_std: ";
    rosidl_generator_traits::value_to_yaml(msg.u_shape_length_edge_std, out);
    out << "\n";
  }

  // member: u_shape_width_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_shape_width_status: ";
    rosidl_generator_traits::value_to_yaml(msg.u_shape_width_status, out);
    out << "\n";
  }

  // member: u_shape_width_edge_invalidflags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_shape_width_edge_invalidflags: ";
    rosidl_generator_traits::value_to_yaml(msg.u_shape_width_edge_invalidflags, out);
    out << "\n";
  }

  // member: u_shape_width_edge_mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_shape_width_edge_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.u_shape_width_edge_mean, out);
    out << "\n";
  }

  // member: u_shape_width_edge_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_shape_width_edge_std: ";
    rosidl_generator_traits::value_to_yaml(msg.u_shape_width_edge_std, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Object & msg, bool use_flow_style = false)
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
  const ars548_messages::msg::Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  ars548_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ars548_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const ars548_messages::msg::Object & msg)
{
  return ars548_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ars548_messages::msg::Object>()
{
  return "ars548_messages::msg::Object";
}

template<>
inline const char * name<ars548_messages::msg::Object>()
{
  return "ars548_messages/msg/Object";
}

template<>
struct has_fixed_size<ars548_messages::msg::Object>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ars548_messages::msg::Object>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ars548_messages::msg::Object>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARS548_MESSAGES__MSG__DETAIL__OBJECT__TRAITS_HPP_
