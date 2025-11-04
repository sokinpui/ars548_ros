// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ars548_messages:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__OBJECT__STRUCT_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ars548_messages__msg__Object __attribute__((deprecated))
#else
# define DEPRECATED__ars548_messages__msg__Object __declspec(deprecated)
#endif

namespace ars548_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object_
{
  using Type = Object_<ContainerAllocator>;

  explicit Object_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->u_statussensor = 0;
      this->u_id = 0ul;
      this->u_age = 0;
      this->u_statusmeasurement = 0;
      this->u_statusmovement = 0;
      this->u_position_invalidflags = 0;
      this->u_position_reference = 0;
      this->u_position_x = 0.0f;
      this->u_position_x_std = 0.0f;
      this->u_position_y = 0.0f;
      this->u_position_y_std = 0.0f;
      this->u_position_z = 0.0f;
      this->u_position_z_std = 0.0f;
      this->u_position_covariancexy = 0.0f;
      this->u_position_orientation = 0.0f;
      this->u_position_orientation_std = 0.0f;
      this->u_existence_invalidflags = 0;
      this->u_existence_probability = 0.0f;
      this->u_existence_ppv = 0.0f;
      this->u_classification_car = 0;
      this->u_classification_truck = 0;
      this->u_classification_motorcycle = 0;
      this->u_classification_bicycle = 0;
      this->u_classification_pedestrian = 0;
      this->u_classification_animal = 0;
      this->u_classification_hazard = 0;
      this->u_classification_unknown = 0;
      this->u_classification_overdrivable = 0;
      this->u_classification_underdrivable = 0;
      this->u_dynamics_absvel_invalidflags = 0;
      this->f_dynamics_absvel_x = 0.0f;
      this->f_dynamics_absvel_x_std = 0.0f;
      this->f_dynamics_absvel_y = 0.0f;
      this->f_dynamics_absvel_y_std = 0.0f;
      this->f_dynamics_absvel_covariancexy = 0.0f;
      this->u_dynamics_relvel_invalidflags = 0;
      this->f_dynamics_relvel_x = 0.0f;
      this->f_dynamics_relvel_x_std = 0.0f;
      this->f_dynamics_relvel_y = 0.0f;
      this->f_dynamics_relvel_y_std = 0.0f;
      this->f_dynamics_relvel_covariancexy = 0.0f;
      this->u_dynamics_absaccel_invalidflags = 0;
      this->f_dynamics_absaccel_x = 0.0f;
      this->f_dynamics_absaccel_x_std = 0.0f;
      this->f_dynamics_absaccel_y = 0.0f;
      this->f_dynamics_absaccel_y_std = 0.0f;
      this->f_dynamics_absaccel_covariancexy = 0.0f;
      this->u_dynamics_relaccel_invalidflags = 0;
      this->f_dynamics_relaccel_x = 0.0f;
      this->f_dynamics_relaccel_x_std = 0.0f;
      this->f_dynamics_relaccel_y = 0.0f;
      this->f_dynamics_relaccel_y_std = 0.0f;
      this->f_dynamics_relaccel_covariancexy = 0.0f;
      this->u_dynamics_orientation_invalidflags = 0;
      this->u_dynamics_orientation_rate_mean = 0.0f;
      this->u_dynamics_orientation_rate_std = 0.0f;
      this->u_shape_length_status = 0ul;
      this->u_shape_length_edge_invalidflags = 0;
      this->u_shape_length_edge_mean = 0.0f;
      this->u_shape_length_edge_std = 0.0f;
      this->u_shape_width_status = 0ul;
      this->u_shape_width_edge_invalidflags = 0;
      this->u_shape_width_edge_mean = 0.0f;
      this->u_shape_width_edge_std = 0.0f;
    }
  }

  explicit Object_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->u_statussensor = 0;
      this->u_id = 0ul;
      this->u_age = 0;
      this->u_statusmeasurement = 0;
      this->u_statusmovement = 0;
      this->u_position_invalidflags = 0;
      this->u_position_reference = 0;
      this->u_position_x = 0.0f;
      this->u_position_x_std = 0.0f;
      this->u_position_y = 0.0f;
      this->u_position_y_std = 0.0f;
      this->u_position_z = 0.0f;
      this->u_position_z_std = 0.0f;
      this->u_position_covariancexy = 0.0f;
      this->u_position_orientation = 0.0f;
      this->u_position_orientation_std = 0.0f;
      this->u_existence_invalidflags = 0;
      this->u_existence_probability = 0.0f;
      this->u_existence_ppv = 0.0f;
      this->u_classification_car = 0;
      this->u_classification_truck = 0;
      this->u_classification_motorcycle = 0;
      this->u_classification_bicycle = 0;
      this->u_classification_pedestrian = 0;
      this->u_classification_animal = 0;
      this->u_classification_hazard = 0;
      this->u_classification_unknown = 0;
      this->u_classification_overdrivable = 0;
      this->u_classification_underdrivable = 0;
      this->u_dynamics_absvel_invalidflags = 0;
      this->f_dynamics_absvel_x = 0.0f;
      this->f_dynamics_absvel_x_std = 0.0f;
      this->f_dynamics_absvel_y = 0.0f;
      this->f_dynamics_absvel_y_std = 0.0f;
      this->f_dynamics_absvel_covariancexy = 0.0f;
      this->u_dynamics_relvel_invalidflags = 0;
      this->f_dynamics_relvel_x = 0.0f;
      this->f_dynamics_relvel_x_std = 0.0f;
      this->f_dynamics_relvel_y = 0.0f;
      this->f_dynamics_relvel_y_std = 0.0f;
      this->f_dynamics_relvel_covariancexy = 0.0f;
      this->u_dynamics_absaccel_invalidflags = 0;
      this->f_dynamics_absaccel_x = 0.0f;
      this->f_dynamics_absaccel_x_std = 0.0f;
      this->f_dynamics_absaccel_y = 0.0f;
      this->f_dynamics_absaccel_y_std = 0.0f;
      this->f_dynamics_absaccel_covariancexy = 0.0f;
      this->u_dynamics_relaccel_invalidflags = 0;
      this->f_dynamics_relaccel_x = 0.0f;
      this->f_dynamics_relaccel_x_std = 0.0f;
      this->f_dynamics_relaccel_y = 0.0f;
      this->f_dynamics_relaccel_y_std = 0.0f;
      this->f_dynamics_relaccel_covariancexy = 0.0f;
      this->u_dynamics_orientation_invalidflags = 0;
      this->u_dynamics_orientation_rate_mean = 0.0f;
      this->u_dynamics_orientation_rate_std = 0.0f;
      this->u_shape_length_status = 0ul;
      this->u_shape_length_edge_invalidflags = 0;
      this->u_shape_length_edge_mean = 0.0f;
      this->u_shape_length_edge_std = 0.0f;
      this->u_shape_width_status = 0ul;
      this->u_shape_width_edge_invalidflags = 0;
      this->u_shape_width_edge_mean = 0.0f;
      this->u_shape_width_edge_std = 0.0f;
    }
  }

  // field types and members
  using _u_statussensor_type =
    uint16_t;
  _u_statussensor_type u_statussensor;
  using _u_id_type =
    uint32_t;
  _u_id_type u_id;
  using _u_age_type =
    uint16_t;
  _u_age_type u_age;
  using _u_statusmeasurement_type =
    uint8_t;
  _u_statusmeasurement_type u_statusmeasurement;
  using _u_statusmovement_type =
    uint8_t;
  _u_statusmovement_type u_statusmovement;
  using _u_position_invalidflags_type =
    uint16_t;
  _u_position_invalidflags_type u_position_invalidflags;
  using _u_position_reference_type =
    uint8_t;
  _u_position_reference_type u_position_reference;
  using _u_position_x_type =
    float;
  _u_position_x_type u_position_x;
  using _u_position_x_std_type =
    float;
  _u_position_x_std_type u_position_x_std;
  using _u_position_y_type =
    float;
  _u_position_y_type u_position_y;
  using _u_position_y_std_type =
    float;
  _u_position_y_std_type u_position_y_std;
  using _u_position_z_type =
    float;
  _u_position_z_type u_position_z;
  using _u_position_z_std_type =
    float;
  _u_position_z_std_type u_position_z_std;
  using _u_position_covariancexy_type =
    float;
  _u_position_covariancexy_type u_position_covariancexy;
  using _u_position_orientation_type =
    float;
  _u_position_orientation_type u_position_orientation;
  using _u_position_orientation_std_type =
    float;
  _u_position_orientation_std_type u_position_orientation_std;
  using _u_existence_invalidflags_type =
    uint8_t;
  _u_existence_invalidflags_type u_existence_invalidflags;
  using _u_existence_probability_type =
    float;
  _u_existence_probability_type u_existence_probability;
  using _u_existence_ppv_type =
    float;
  _u_existence_ppv_type u_existence_ppv;
  using _u_classification_car_type =
    uint8_t;
  _u_classification_car_type u_classification_car;
  using _u_classification_truck_type =
    uint8_t;
  _u_classification_truck_type u_classification_truck;
  using _u_classification_motorcycle_type =
    uint8_t;
  _u_classification_motorcycle_type u_classification_motorcycle;
  using _u_classification_bicycle_type =
    uint8_t;
  _u_classification_bicycle_type u_classification_bicycle;
  using _u_classification_pedestrian_type =
    uint8_t;
  _u_classification_pedestrian_type u_classification_pedestrian;
  using _u_classification_animal_type =
    uint8_t;
  _u_classification_animal_type u_classification_animal;
  using _u_classification_hazard_type =
    uint8_t;
  _u_classification_hazard_type u_classification_hazard;
  using _u_classification_unknown_type =
    uint8_t;
  _u_classification_unknown_type u_classification_unknown;
  using _u_classification_overdrivable_type =
    uint8_t;
  _u_classification_overdrivable_type u_classification_overdrivable;
  using _u_classification_underdrivable_type =
    uint8_t;
  _u_classification_underdrivable_type u_classification_underdrivable;
  using _u_dynamics_absvel_invalidflags_type =
    uint8_t;
  _u_dynamics_absvel_invalidflags_type u_dynamics_absvel_invalidflags;
  using _f_dynamics_absvel_x_type =
    float;
  _f_dynamics_absvel_x_type f_dynamics_absvel_x;
  using _f_dynamics_absvel_x_std_type =
    float;
  _f_dynamics_absvel_x_std_type f_dynamics_absvel_x_std;
  using _f_dynamics_absvel_y_type =
    float;
  _f_dynamics_absvel_y_type f_dynamics_absvel_y;
  using _f_dynamics_absvel_y_std_type =
    float;
  _f_dynamics_absvel_y_std_type f_dynamics_absvel_y_std;
  using _f_dynamics_absvel_covariancexy_type =
    float;
  _f_dynamics_absvel_covariancexy_type f_dynamics_absvel_covariancexy;
  using _u_dynamics_relvel_invalidflags_type =
    uint8_t;
  _u_dynamics_relvel_invalidflags_type u_dynamics_relvel_invalidflags;
  using _f_dynamics_relvel_x_type =
    float;
  _f_dynamics_relvel_x_type f_dynamics_relvel_x;
  using _f_dynamics_relvel_x_std_type =
    float;
  _f_dynamics_relvel_x_std_type f_dynamics_relvel_x_std;
  using _f_dynamics_relvel_y_type =
    float;
  _f_dynamics_relvel_y_type f_dynamics_relvel_y;
  using _f_dynamics_relvel_y_std_type =
    float;
  _f_dynamics_relvel_y_std_type f_dynamics_relvel_y_std;
  using _f_dynamics_relvel_covariancexy_type =
    float;
  _f_dynamics_relvel_covariancexy_type f_dynamics_relvel_covariancexy;
  using _u_dynamics_absaccel_invalidflags_type =
    uint8_t;
  _u_dynamics_absaccel_invalidflags_type u_dynamics_absaccel_invalidflags;
  using _f_dynamics_absaccel_x_type =
    float;
  _f_dynamics_absaccel_x_type f_dynamics_absaccel_x;
  using _f_dynamics_absaccel_x_std_type =
    float;
  _f_dynamics_absaccel_x_std_type f_dynamics_absaccel_x_std;
  using _f_dynamics_absaccel_y_type =
    float;
  _f_dynamics_absaccel_y_type f_dynamics_absaccel_y;
  using _f_dynamics_absaccel_y_std_type =
    float;
  _f_dynamics_absaccel_y_std_type f_dynamics_absaccel_y_std;
  using _f_dynamics_absaccel_covariancexy_type =
    float;
  _f_dynamics_absaccel_covariancexy_type f_dynamics_absaccel_covariancexy;
  using _u_dynamics_relaccel_invalidflags_type =
    uint8_t;
  _u_dynamics_relaccel_invalidflags_type u_dynamics_relaccel_invalidflags;
  using _f_dynamics_relaccel_x_type =
    float;
  _f_dynamics_relaccel_x_type f_dynamics_relaccel_x;
  using _f_dynamics_relaccel_x_std_type =
    float;
  _f_dynamics_relaccel_x_std_type f_dynamics_relaccel_x_std;
  using _f_dynamics_relaccel_y_type =
    float;
  _f_dynamics_relaccel_y_type f_dynamics_relaccel_y;
  using _f_dynamics_relaccel_y_std_type =
    float;
  _f_dynamics_relaccel_y_std_type f_dynamics_relaccel_y_std;
  using _f_dynamics_relaccel_covariancexy_type =
    float;
  _f_dynamics_relaccel_covariancexy_type f_dynamics_relaccel_covariancexy;
  using _u_dynamics_orientation_invalidflags_type =
    uint8_t;
  _u_dynamics_orientation_invalidflags_type u_dynamics_orientation_invalidflags;
  using _u_dynamics_orientation_rate_mean_type =
    float;
  _u_dynamics_orientation_rate_mean_type u_dynamics_orientation_rate_mean;
  using _u_dynamics_orientation_rate_std_type =
    float;
  _u_dynamics_orientation_rate_std_type u_dynamics_orientation_rate_std;
  using _u_shape_length_status_type =
    uint32_t;
  _u_shape_length_status_type u_shape_length_status;
  using _u_shape_length_edge_invalidflags_type =
    uint8_t;
  _u_shape_length_edge_invalidflags_type u_shape_length_edge_invalidflags;
  using _u_shape_length_edge_mean_type =
    float;
  _u_shape_length_edge_mean_type u_shape_length_edge_mean;
  using _u_shape_length_edge_std_type =
    float;
  _u_shape_length_edge_std_type u_shape_length_edge_std;
  using _u_shape_width_status_type =
    uint32_t;
  _u_shape_width_status_type u_shape_width_status;
  using _u_shape_width_edge_invalidflags_type =
    uint8_t;
  _u_shape_width_edge_invalidflags_type u_shape_width_edge_invalidflags;
  using _u_shape_width_edge_mean_type =
    float;
  _u_shape_width_edge_mean_type u_shape_width_edge_mean;
  using _u_shape_width_edge_std_type =
    float;
  _u_shape_width_edge_std_type u_shape_width_edge_std;

  // setters for named parameter idiom
  Type & set__u_statussensor(
    const uint16_t & _arg)
  {
    this->u_statussensor = _arg;
    return *this;
  }
  Type & set__u_id(
    const uint32_t & _arg)
  {
    this->u_id = _arg;
    return *this;
  }
  Type & set__u_age(
    const uint16_t & _arg)
  {
    this->u_age = _arg;
    return *this;
  }
  Type & set__u_statusmeasurement(
    const uint8_t & _arg)
  {
    this->u_statusmeasurement = _arg;
    return *this;
  }
  Type & set__u_statusmovement(
    const uint8_t & _arg)
  {
    this->u_statusmovement = _arg;
    return *this;
  }
  Type & set__u_position_invalidflags(
    const uint16_t & _arg)
  {
    this->u_position_invalidflags = _arg;
    return *this;
  }
  Type & set__u_position_reference(
    const uint8_t & _arg)
  {
    this->u_position_reference = _arg;
    return *this;
  }
  Type & set__u_position_x(
    const float & _arg)
  {
    this->u_position_x = _arg;
    return *this;
  }
  Type & set__u_position_x_std(
    const float & _arg)
  {
    this->u_position_x_std = _arg;
    return *this;
  }
  Type & set__u_position_y(
    const float & _arg)
  {
    this->u_position_y = _arg;
    return *this;
  }
  Type & set__u_position_y_std(
    const float & _arg)
  {
    this->u_position_y_std = _arg;
    return *this;
  }
  Type & set__u_position_z(
    const float & _arg)
  {
    this->u_position_z = _arg;
    return *this;
  }
  Type & set__u_position_z_std(
    const float & _arg)
  {
    this->u_position_z_std = _arg;
    return *this;
  }
  Type & set__u_position_covariancexy(
    const float & _arg)
  {
    this->u_position_covariancexy = _arg;
    return *this;
  }
  Type & set__u_position_orientation(
    const float & _arg)
  {
    this->u_position_orientation = _arg;
    return *this;
  }
  Type & set__u_position_orientation_std(
    const float & _arg)
  {
    this->u_position_orientation_std = _arg;
    return *this;
  }
  Type & set__u_existence_invalidflags(
    const uint8_t & _arg)
  {
    this->u_existence_invalidflags = _arg;
    return *this;
  }
  Type & set__u_existence_probability(
    const float & _arg)
  {
    this->u_existence_probability = _arg;
    return *this;
  }
  Type & set__u_existence_ppv(
    const float & _arg)
  {
    this->u_existence_ppv = _arg;
    return *this;
  }
  Type & set__u_classification_car(
    const uint8_t & _arg)
  {
    this->u_classification_car = _arg;
    return *this;
  }
  Type & set__u_classification_truck(
    const uint8_t & _arg)
  {
    this->u_classification_truck = _arg;
    return *this;
  }
  Type & set__u_classification_motorcycle(
    const uint8_t & _arg)
  {
    this->u_classification_motorcycle = _arg;
    return *this;
  }
  Type & set__u_classification_bicycle(
    const uint8_t & _arg)
  {
    this->u_classification_bicycle = _arg;
    return *this;
  }
  Type & set__u_classification_pedestrian(
    const uint8_t & _arg)
  {
    this->u_classification_pedestrian = _arg;
    return *this;
  }
  Type & set__u_classification_animal(
    const uint8_t & _arg)
  {
    this->u_classification_animal = _arg;
    return *this;
  }
  Type & set__u_classification_hazard(
    const uint8_t & _arg)
  {
    this->u_classification_hazard = _arg;
    return *this;
  }
  Type & set__u_classification_unknown(
    const uint8_t & _arg)
  {
    this->u_classification_unknown = _arg;
    return *this;
  }
  Type & set__u_classification_overdrivable(
    const uint8_t & _arg)
  {
    this->u_classification_overdrivable = _arg;
    return *this;
  }
  Type & set__u_classification_underdrivable(
    const uint8_t & _arg)
  {
    this->u_classification_underdrivable = _arg;
    return *this;
  }
  Type & set__u_dynamics_absvel_invalidflags(
    const uint8_t & _arg)
  {
    this->u_dynamics_absvel_invalidflags = _arg;
    return *this;
  }
  Type & set__f_dynamics_absvel_x(
    const float & _arg)
  {
    this->f_dynamics_absvel_x = _arg;
    return *this;
  }
  Type & set__f_dynamics_absvel_x_std(
    const float & _arg)
  {
    this->f_dynamics_absvel_x_std = _arg;
    return *this;
  }
  Type & set__f_dynamics_absvel_y(
    const float & _arg)
  {
    this->f_dynamics_absvel_y = _arg;
    return *this;
  }
  Type & set__f_dynamics_absvel_y_std(
    const float & _arg)
  {
    this->f_dynamics_absvel_y_std = _arg;
    return *this;
  }
  Type & set__f_dynamics_absvel_covariancexy(
    const float & _arg)
  {
    this->f_dynamics_absvel_covariancexy = _arg;
    return *this;
  }
  Type & set__u_dynamics_relvel_invalidflags(
    const uint8_t & _arg)
  {
    this->u_dynamics_relvel_invalidflags = _arg;
    return *this;
  }
  Type & set__f_dynamics_relvel_x(
    const float & _arg)
  {
    this->f_dynamics_relvel_x = _arg;
    return *this;
  }
  Type & set__f_dynamics_relvel_x_std(
    const float & _arg)
  {
    this->f_dynamics_relvel_x_std = _arg;
    return *this;
  }
  Type & set__f_dynamics_relvel_y(
    const float & _arg)
  {
    this->f_dynamics_relvel_y = _arg;
    return *this;
  }
  Type & set__f_dynamics_relvel_y_std(
    const float & _arg)
  {
    this->f_dynamics_relvel_y_std = _arg;
    return *this;
  }
  Type & set__f_dynamics_relvel_covariancexy(
    const float & _arg)
  {
    this->f_dynamics_relvel_covariancexy = _arg;
    return *this;
  }
  Type & set__u_dynamics_absaccel_invalidflags(
    const uint8_t & _arg)
  {
    this->u_dynamics_absaccel_invalidflags = _arg;
    return *this;
  }
  Type & set__f_dynamics_absaccel_x(
    const float & _arg)
  {
    this->f_dynamics_absaccel_x = _arg;
    return *this;
  }
  Type & set__f_dynamics_absaccel_x_std(
    const float & _arg)
  {
    this->f_dynamics_absaccel_x_std = _arg;
    return *this;
  }
  Type & set__f_dynamics_absaccel_y(
    const float & _arg)
  {
    this->f_dynamics_absaccel_y = _arg;
    return *this;
  }
  Type & set__f_dynamics_absaccel_y_std(
    const float & _arg)
  {
    this->f_dynamics_absaccel_y_std = _arg;
    return *this;
  }
  Type & set__f_dynamics_absaccel_covariancexy(
    const float & _arg)
  {
    this->f_dynamics_absaccel_covariancexy = _arg;
    return *this;
  }
  Type & set__u_dynamics_relaccel_invalidflags(
    const uint8_t & _arg)
  {
    this->u_dynamics_relaccel_invalidflags = _arg;
    return *this;
  }
  Type & set__f_dynamics_relaccel_x(
    const float & _arg)
  {
    this->f_dynamics_relaccel_x = _arg;
    return *this;
  }
  Type & set__f_dynamics_relaccel_x_std(
    const float & _arg)
  {
    this->f_dynamics_relaccel_x_std = _arg;
    return *this;
  }
  Type & set__f_dynamics_relaccel_y(
    const float & _arg)
  {
    this->f_dynamics_relaccel_y = _arg;
    return *this;
  }
  Type & set__f_dynamics_relaccel_y_std(
    const float & _arg)
  {
    this->f_dynamics_relaccel_y_std = _arg;
    return *this;
  }
  Type & set__f_dynamics_relaccel_covariancexy(
    const float & _arg)
  {
    this->f_dynamics_relaccel_covariancexy = _arg;
    return *this;
  }
  Type & set__u_dynamics_orientation_invalidflags(
    const uint8_t & _arg)
  {
    this->u_dynamics_orientation_invalidflags = _arg;
    return *this;
  }
  Type & set__u_dynamics_orientation_rate_mean(
    const float & _arg)
  {
    this->u_dynamics_orientation_rate_mean = _arg;
    return *this;
  }
  Type & set__u_dynamics_orientation_rate_std(
    const float & _arg)
  {
    this->u_dynamics_orientation_rate_std = _arg;
    return *this;
  }
  Type & set__u_shape_length_status(
    const uint32_t & _arg)
  {
    this->u_shape_length_status = _arg;
    return *this;
  }
  Type & set__u_shape_length_edge_invalidflags(
    const uint8_t & _arg)
  {
    this->u_shape_length_edge_invalidflags = _arg;
    return *this;
  }
  Type & set__u_shape_length_edge_mean(
    const float & _arg)
  {
    this->u_shape_length_edge_mean = _arg;
    return *this;
  }
  Type & set__u_shape_length_edge_std(
    const float & _arg)
  {
    this->u_shape_length_edge_std = _arg;
    return *this;
  }
  Type & set__u_shape_width_status(
    const uint32_t & _arg)
  {
    this->u_shape_width_status = _arg;
    return *this;
  }
  Type & set__u_shape_width_edge_invalidflags(
    const uint8_t & _arg)
  {
    this->u_shape_width_edge_invalidflags = _arg;
    return *this;
  }
  Type & set__u_shape_width_edge_mean(
    const float & _arg)
  {
    this->u_shape_width_edge_mean = _arg;
    return *this;
  }
  Type & set__u_shape_width_edge_std(
    const float & _arg)
  {
    this->u_shape_width_edge_std = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ars548_messages::msg::Object_<ContainerAllocator> *;
  using ConstRawPtr =
    const ars548_messages::msg::Object_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ars548_messages::msg::Object_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ars548_messages::msg::Object_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::Object_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::Object_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ars548_messages::msg::Object_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ars548_messages::msg::Object_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ars548_messages::msg::Object_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ars548_messages::msg::Object_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ars548_messages__msg__Object
    std::shared_ptr<ars548_messages::msg::Object_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ars548_messages__msg__Object
    std::shared_ptr<ars548_messages::msg::Object_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object_ & other) const
  {
    if (this->u_statussensor != other.u_statussensor) {
      return false;
    }
    if (this->u_id != other.u_id) {
      return false;
    }
    if (this->u_age != other.u_age) {
      return false;
    }
    if (this->u_statusmeasurement != other.u_statusmeasurement) {
      return false;
    }
    if (this->u_statusmovement != other.u_statusmovement) {
      return false;
    }
    if (this->u_position_invalidflags != other.u_position_invalidflags) {
      return false;
    }
    if (this->u_position_reference != other.u_position_reference) {
      return false;
    }
    if (this->u_position_x != other.u_position_x) {
      return false;
    }
    if (this->u_position_x_std != other.u_position_x_std) {
      return false;
    }
    if (this->u_position_y != other.u_position_y) {
      return false;
    }
    if (this->u_position_y_std != other.u_position_y_std) {
      return false;
    }
    if (this->u_position_z != other.u_position_z) {
      return false;
    }
    if (this->u_position_z_std != other.u_position_z_std) {
      return false;
    }
    if (this->u_position_covariancexy != other.u_position_covariancexy) {
      return false;
    }
    if (this->u_position_orientation != other.u_position_orientation) {
      return false;
    }
    if (this->u_position_orientation_std != other.u_position_orientation_std) {
      return false;
    }
    if (this->u_existence_invalidflags != other.u_existence_invalidflags) {
      return false;
    }
    if (this->u_existence_probability != other.u_existence_probability) {
      return false;
    }
    if (this->u_existence_ppv != other.u_existence_ppv) {
      return false;
    }
    if (this->u_classification_car != other.u_classification_car) {
      return false;
    }
    if (this->u_classification_truck != other.u_classification_truck) {
      return false;
    }
    if (this->u_classification_motorcycle != other.u_classification_motorcycle) {
      return false;
    }
    if (this->u_classification_bicycle != other.u_classification_bicycle) {
      return false;
    }
    if (this->u_classification_pedestrian != other.u_classification_pedestrian) {
      return false;
    }
    if (this->u_classification_animal != other.u_classification_animal) {
      return false;
    }
    if (this->u_classification_hazard != other.u_classification_hazard) {
      return false;
    }
    if (this->u_classification_unknown != other.u_classification_unknown) {
      return false;
    }
    if (this->u_classification_overdrivable != other.u_classification_overdrivable) {
      return false;
    }
    if (this->u_classification_underdrivable != other.u_classification_underdrivable) {
      return false;
    }
    if (this->u_dynamics_absvel_invalidflags != other.u_dynamics_absvel_invalidflags) {
      return false;
    }
    if (this->f_dynamics_absvel_x != other.f_dynamics_absvel_x) {
      return false;
    }
    if (this->f_dynamics_absvel_x_std != other.f_dynamics_absvel_x_std) {
      return false;
    }
    if (this->f_dynamics_absvel_y != other.f_dynamics_absvel_y) {
      return false;
    }
    if (this->f_dynamics_absvel_y_std != other.f_dynamics_absvel_y_std) {
      return false;
    }
    if (this->f_dynamics_absvel_covariancexy != other.f_dynamics_absvel_covariancexy) {
      return false;
    }
    if (this->u_dynamics_relvel_invalidflags != other.u_dynamics_relvel_invalidflags) {
      return false;
    }
    if (this->f_dynamics_relvel_x != other.f_dynamics_relvel_x) {
      return false;
    }
    if (this->f_dynamics_relvel_x_std != other.f_dynamics_relvel_x_std) {
      return false;
    }
    if (this->f_dynamics_relvel_y != other.f_dynamics_relvel_y) {
      return false;
    }
    if (this->f_dynamics_relvel_y_std != other.f_dynamics_relvel_y_std) {
      return false;
    }
    if (this->f_dynamics_relvel_covariancexy != other.f_dynamics_relvel_covariancexy) {
      return false;
    }
    if (this->u_dynamics_absaccel_invalidflags != other.u_dynamics_absaccel_invalidflags) {
      return false;
    }
    if (this->f_dynamics_absaccel_x != other.f_dynamics_absaccel_x) {
      return false;
    }
    if (this->f_dynamics_absaccel_x_std != other.f_dynamics_absaccel_x_std) {
      return false;
    }
    if (this->f_dynamics_absaccel_y != other.f_dynamics_absaccel_y) {
      return false;
    }
    if (this->f_dynamics_absaccel_y_std != other.f_dynamics_absaccel_y_std) {
      return false;
    }
    if (this->f_dynamics_absaccel_covariancexy != other.f_dynamics_absaccel_covariancexy) {
      return false;
    }
    if (this->u_dynamics_relaccel_invalidflags != other.u_dynamics_relaccel_invalidflags) {
      return false;
    }
    if (this->f_dynamics_relaccel_x != other.f_dynamics_relaccel_x) {
      return false;
    }
    if (this->f_dynamics_relaccel_x_std != other.f_dynamics_relaccel_x_std) {
      return false;
    }
    if (this->f_dynamics_relaccel_y != other.f_dynamics_relaccel_y) {
      return false;
    }
    if (this->f_dynamics_relaccel_y_std != other.f_dynamics_relaccel_y_std) {
      return false;
    }
    if (this->f_dynamics_relaccel_covariancexy != other.f_dynamics_relaccel_covariancexy) {
      return false;
    }
    if (this->u_dynamics_orientation_invalidflags != other.u_dynamics_orientation_invalidflags) {
      return false;
    }
    if (this->u_dynamics_orientation_rate_mean != other.u_dynamics_orientation_rate_mean) {
      return false;
    }
    if (this->u_dynamics_orientation_rate_std != other.u_dynamics_orientation_rate_std) {
      return false;
    }
    if (this->u_shape_length_status != other.u_shape_length_status) {
      return false;
    }
    if (this->u_shape_length_edge_invalidflags != other.u_shape_length_edge_invalidflags) {
      return false;
    }
    if (this->u_shape_length_edge_mean != other.u_shape_length_edge_mean) {
      return false;
    }
    if (this->u_shape_length_edge_std != other.u_shape_length_edge_std) {
      return false;
    }
    if (this->u_shape_width_status != other.u_shape_width_status) {
      return false;
    }
    if (this->u_shape_width_edge_invalidflags != other.u_shape_width_edge_invalidflags) {
      return false;
    }
    if (this->u_shape_width_edge_mean != other.u_shape_width_edge_mean) {
      return false;
    }
    if (this->u_shape_width_edge_std != other.u_shape_width_edge_std) {
      return false;
    }
    return true;
  }
  bool operator!=(const Object_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Object_

// alias to use template instance with default allocator
using Object =
  ars548_messages::msg::Object_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__OBJECT__STRUCT_HPP_
