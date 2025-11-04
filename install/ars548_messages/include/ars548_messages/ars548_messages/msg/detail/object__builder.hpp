// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ars548_messages:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef ARS548_MESSAGES__MSG__DETAIL__OBJECT__BUILDER_HPP_
#define ARS548_MESSAGES__MSG__DETAIL__OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ars548_messages/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ars548_messages
{

namespace msg
{

namespace builder
{

class Init_Object_u_shape_width_edge_std
{
public:
  explicit Init_Object_u_shape_width_edge_std(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  ::ars548_messages::msg::Object u_shape_width_edge_std(::ars548_messages::msg::Object::_u_shape_width_edge_std_type arg)
  {
    msg_.u_shape_width_edge_std = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_shape_width_edge_mean
{
public:
  explicit Init_Object_u_shape_width_edge_mean(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_shape_width_edge_std u_shape_width_edge_mean(::ars548_messages::msg::Object::_u_shape_width_edge_mean_type arg)
  {
    msg_.u_shape_width_edge_mean = std::move(arg);
    return Init_Object_u_shape_width_edge_std(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_shape_width_edge_invalidflags
{
public:
  explicit Init_Object_u_shape_width_edge_invalidflags(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_shape_width_edge_mean u_shape_width_edge_invalidflags(::ars548_messages::msg::Object::_u_shape_width_edge_invalidflags_type arg)
  {
    msg_.u_shape_width_edge_invalidflags = std::move(arg);
    return Init_Object_u_shape_width_edge_mean(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_shape_width_status
{
public:
  explicit Init_Object_u_shape_width_status(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_shape_width_edge_invalidflags u_shape_width_status(::ars548_messages::msg::Object::_u_shape_width_status_type arg)
  {
    msg_.u_shape_width_status = std::move(arg);
    return Init_Object_u_shape_width_edge_invalidflags(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_shape_length_edge_std
{
public:
  explicit Init_Object_u_shape_length_edge_std(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_shape_width_status u_shape_length_edge_std(::ars548_messages::msg::Object::_u_shape_length_edge_std_type arg)
  {
    msg_.u_shape_length_edge_std = std::move(arg);
    return Init_Object_u_shape_width_status(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_shape_length_edge_mean
{
public:
  explicit Init_Object_u_shape_length_edge_mean(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_shape_length_edge_std u_shape_length_edge_mean(::ars548_messages::msg::Object::_u_shape_length_edge_mean_type arg)
  {
    msg_.u_shape_length_edge_mean = std::move(arg);
    return Init_Object_u_shape_length_edge_std(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_shape_length_edge_invalidflags
{
public:
  explicit Init_Object_u_shape_length_edge_invalidflags(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_shape_length_edge_mean u_shape_length_edge_invalidflags(::ars548_messages::msg::Object::_u_shape_length_edge_invalidflags_type arg)
  {
    msg_.u_shape_length_edge_invalidflags = std::move(arg);
    return Init_Object_u_shape_length_edge_mean(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_shape_length_status
{
public:
  explicit Init_Object_u_shape_length_status(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_shape_length_edge_invalidflags u_shape_length_status(::ars548_messages::msg::Object::_u_shape_length_status_type arg)
  {
    msg_.u_shape_length_status = std::move(arg);
    return Init_Object_u_shape_length_edge_invalidflags(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_dynamics_orientation_rate_std
{
public:
  explicit Init_Object_u_dynamics_orientation_rate_std(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_shape_length_status u_dynamics_orientation_rate_std(::ars548_messages::msg::Object::_u_dynamics_orientation_rate_std_type arg)
  {
    msg_.u_dynamics_orientation_rate_std = std::move(arg);
    return Init_Object_u_shape_length_status(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_dynamics_orientation_rate_mean
{
public:
  explicit Init_Object_u_dynamics_orientation_rate_mean(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_dynamics_orientation_rate_std u_dynamics_orientation_rate_mean(::ars548_messages::msg::Object::_u_dynamics_orientation_rate_mean_type arg)
  {
    msg_.u_dynamics_orientation_rate_mean = std::move(arg);
    return Init_Object_u_dynamics_orientation_rate_std(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_dynamics_orientation_invalidflags
{
public:
  explicit Init_Object_u_dynamics_orientation_invalidflags(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_dynamics_orientation_rate_mean u_dynamics_orientation_invalidflags(::ars548_messages::msg::Object::_u_dynamics_orientation_invalidflags_type arg)
  {
    msg_.u_dynamics_orientation_invalidflags = std::move(arg);
    return Init_Object_u_dynamics_orientation_rate_mean(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_relaccel_covariancexy
{
public:
  explicit Init_Object_f_dynamics_relaccel_covariancexy(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_dynamics_orientation_invalidflags f_dynamics_relaccel_covariancexy(::ars548_messages::msg::Object::_f_dynamics_relaccel_covariancexy_type arg)
  {
    msg_.f_dynamics_relaccel_covariancexy = std::move(arg);
    return Init_Object_u_dynamics_orientation_invalidflags(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_relaccel_y_std
{
public:
  explicit Init_Object_f_dynamics_relaccel_y_std(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_relaccel_covariancexy f_dynamics_relaccel_y_std(::ars548_messages::msg::Object::_f_dynamics_relaccel_y_std_type arg)
  {
    msg_.f_dynamics_relaccel_y_std = std::move(arg);
    return Init_Object_f_dynamics_relaccel_covariancexy(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_relaccel_y
{
public:
  explicit Init_Object_f_dynamics_relaccel_y(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_relaccel_y_std f_dynamics_relaccel_y(::ars548_messages::msg::Object::_f_dynamics_relaccel_y_type arg)
  {
    msg_.f_dynamics_relaccel_y = std::move(arg);
    return Init_Object_f_dynamics_relaccel_y_std(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_relaccel_x_std
{
public:
  explicit Init_Object_f_dynamics_relaccel_x_std(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_relaccel_y f_dynamics_relaccel_x_std(::ars548_messages::msg::Object::_f_dynamics_relaccel_x_std_type arg)
  {
    msg_.f_dynamics_relaccel_x_std = std::move(arg);
    return Init_Object_f_dynamics_relaccel_y(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_relaccel_x
{
public:
  explicit Init_Object_f_dynamics_relaccel_x(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_relaccel_x_std f_dynamics_relaccel_x(::ars548_messages::msg::Object::_f_dynamics_relaccel_x_type arg)
  {
    msg_.f_dynamics_relaccel_x = std::move(arg);
    return Init_Object_f_dynamics_relaccel_x_std(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_dynamics_relaccel_invalidflags
{
public:
  explicit Init_Object_u_dynamics_relaccel_invalidflags(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_relaccel_x u_dynamics_relaccel_invalidflags(::ars548_messages::msg::Object::_u_dynamics_relaccel_invalidflags_type arg)
  {
    msg_.u_dynamics_relaccel_invalidflags = std::move(arg);
    return Init_Object_f_dynamics_relaccel_x(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_absaccel_covariancexy
{
public:
  explicit Init_Object_f_dynamics_absaccel_covariancexy(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_dynamics_relaccel_invalidflags f_dynamics_absaccel_covariancexy(::ars548_messages::msg::Object::_f_dynamics_absaccel_covariancexy_type arg)
  {
    msg_.f_dynamics_absaccel_covariancexy = std::move(arg);
    return Init_Object_u_dynamics_relaccel_invalidflags(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_absaccel_y_std
{
public:
  explicit Init_Object_f_dynamics_absaccel_y_std(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_absaccel_covariancexy f_dynamics_absaccel_y_std(::ars548_messages::msg::Object::_f_dynamics_absaccel_y_std_type arg)
  {
    msg_.f_dynamics_absaccel_y_std = std::move(arg);
    return Init_Object_f_dynamics_absaccel_covariancexy(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_absaccel_y
{
public:
  explicit Init_Object_f_dynamics_absaccel_y(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_absaccel_y_std f_dynamics_absaccel_y(::ars548_messages::msg::Object::_f_dynamics_absaccel_y_type arg)
  {
    msg_.f_dynamics_absaccel_y = std::move(arg);
    return Init_Object_f_dynamics_absaccel_y_std(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_absaccel_x_std
{
public:
  explicit Init_Object_f_dynamics_absaccel_x_std(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_absaccel_y f_dynamics_absaccel_x_std(::ars548_messages::msg::Object::_f_dynamics_absaccel_x_std_type arg)
  {
    msg_.f_dynamics_absaccel_x_std = std::move(arg);
    return Init_Object_f_dynamics_absaccel_y(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_absaccel_x
{
public:
  explicit Init_Object_f_dynamics_absaccel_x(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_absaccel_x_std f_dynamics_absaccel_x(::ars548_messages::msg::Object::_f_dynamics_absaccel_x_type arg)
  {
    msg_.f_dynamics_absaccel_x = std::move(arg);
    return Init_Object_f_dynamics_absaccel_x_std(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_dynamics_absaccel_invalidflags
{
public:
  explicit Init_Object_u_dynamics_absaccel_invalidflags(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_absaccel_x u_dynamics_absaccel_invalidflags(::ars548_messages::msg::Object::_u_dynamics_absaccel_invalidflags_type arg)
  {
    msg_.u_dynamics_absaccel_invalidflags = std::move(arg);
    return Init_Object_f_dynamics_absaccel_x(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_relvel_covariancexy
{
public:
  explicit Init_Object_f_dynamics_relvel_covariancexy(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_dynamics_absaccel_invalidflags f_dynamics_relvel_covariancexy(::ars548_messages::msg::Object::_f_dynamics_relvel_covariancexy_type arg)
  {
    msg_.f_dynamics_relvel_covariancexy = std::move(arg);
    return Init_Object_u_dynamics_absaccel_invalidflags(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_relvel_y_std
{
public:
  explicit Init_Object_f_dynamics_relvel_y_std(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_relvel_covariancexy f_dynamics_relvel_y_std(::ars548_messages::msg::Object::_f_dynamics_relvel_y_std_type arg)
  {
    msg_.f_dynamics_relvel_y_std = std::move(arg);
    return Init_Object_f_dynamics_relvel_covariancexy(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_relvel_y
{
public:
  explicit Init_Object_f_dynamics_relvel_y(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_relvel_y_std f_dynamics_relvel_y(::ars548_messages::msg::Object::_f_dynamics_relvel_y_type arg)
  {
    msg_.f_dynamics_relvel_y = std::move(arg);
    return Init_Object_f_dynamics_relvel_y_std(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_relvel_x_std
{
public:
  explicit Init_Object_f_dynamics_relvel_x_std(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_relvel_y f_dynamics_relvel_x_std(::ars548_messages::msg::Object::_f_dynamics_relvel_x_std_type arg)
  {
    msg_.f_dynamics_relvel_x_std = std::move(arg);
    return Init_Object_f_dynamics_relvel_y(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_relvel_x
{
public:
  explicit Init_Object_f_dynamics_relvel_x(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_relvel_x_std f_dynamics_relvel_x(::ars548_messages::msg::Object::_f_dynamics_relvel_x_type arg)
  {
    msg_.f_dynamics_relvel_x = std::move(arg);
    return Init_Object_f_dynamics_relvel_x_std(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_dynamics_relvel_invalidflags
{
public:
  explicit Init_Object_u_dynamics_relvel_invalidflags(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_relvel_x u_dynamics_relvel_invalidflags(::ars548_messages::msg::Object::_u_dynamics_relvel_invalidflags_type arg)
  {
    msg_.u_dynamics_relvel_invalidflags = std::move(arg);
    return Init_Object_f_dynamics_relvel_x(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_absvel_covariancexy
{
public:
  explicit Init_Object_f_dynamics_absvel_covariancexy(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_dynamics_relvel_invalidflags f_dynamics_absvel_covariancexy(::ars548_messages::msg::Object::_f_dynamics_absvel_covariancexy_type arg)
  {
    msg_.f_dynamics_absvel_covariancexy = std::move(arg);
    return Init_Object_u_dynamics_relvel_invalidflags(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_absvel_y_std
{
public:
  explicit Init_Object_f_dynamics_absvel_y_std(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_absvel_covariancexy f_dynamics_absvel_y_std(::ars548_messages::msg::Object::_f_dynamics_absvel_y_std_type arg)
  {
    msg_.f_dynamics_absvel_y_std = std::move(arg);
    return Init_Object_f_dynamics_absvel_covariancexy(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_absvel_y
{
public:
  explicit Init_Object_f_dynamics_absvel_y(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_absvel_y_std f_dynamics_absvel_y(::ars548_messages::msg::Object::_f_dynamics_absvel_y_type arg)
  {
    msg_.f_dynamics_absvel_y = std::move(arg);
    return Init_Object_f_dynamics_absvel_y_std(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_absvel_x_std
{
public:
  explicit Init_Object_f_dynamics_absvel_x_std(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_absvel_y f_dynamics_absvel_x_std(::ars548_messages::msg::Object::_f_dynamics_absvel_x_std_type arg)
  {
    msg_.f_dynamics_absvel_x_std = std::move(arg);
    return Init_Object_f_dynamics_absvel_y(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_f_dynamics_absvel_x
{
public:
  explicit Init_Object_f_dynamics_absvel_x(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_absvel_x_std f_dynamics_absvel_x(::ars548_messages::msg::Object::_f_dynamics_absvel_x_type arg)
  {
    msg_.f_dynamics_absvel_x = std::move(arg);
    return Init_Object_f_dynamics_absvel_x_std(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_dynamics_absvel_invalidflags
{
public:
  explicit Init_Object_u_dynamics_absvel_invalidflags(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_f_dynamics_absvel_x u_dynamics_absvel_invalidflags(::ars548_messages::msg::Object::_u_dynamics_absvel_invalidflags_type arg)
  {
    msg_.u_dynamics_absvel_invalidflags = std::move(arg);
    return Init_Object_f_dynamics_absvel_x(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_classification_underdrivable
{
public:
  explicit Init_Object_u_classification_underdrivable(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_dynamics_absvel_invalidflags u_classification_underdrivable(::ars548_messages::msg::Object::_u_classification_underdrivable_type arg)
  {
    msg_.u_classification_underdrivable = std::move(arg);
    return Init_Object_u_dynamics_absvel_invalidflags(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_classification_overdrivable
{
public:
  explicit Init_Object_u_classification_overdrivable(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_classification_underdrivable u_classification_overdrivable(::ars548_messages::msg::Object::_u_classification_overdrivable_type arg)
  {
    msg_.u_classification_overdrivable = std::move(arg);
    return Init_Object_u_classification_underdrivable(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_classification_unknown
{
public:
  explicit Init_Object_u_classification_unknown(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_classification_overdrivable u_classification_unknown(::ars548_messages::msg::Object::_u_classification_unknown_type arg)
  {
    msg_.u_classification_unknown = std::move(arg);
    return Init_Object_u_classification_overdrivable(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_classification_hazard
{
public:
  explicit Init_Object_u_classification_hazard(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_classification_unknown u_classification_hazard(::ars548_messages::msg::Object::_u_classification_hazard_type arg)
  {
    msg_.u_classification_hazard = std::move(arg);
    return Init_Object_u_classification_unknown(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_classification_animal
{
public:
  explicit Init_Object_u_classification_animal(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_classification_hazard u_classification_animal(::ars548_messages::msg::Object::_u_classification_animal_type arg)
  {
    msg_.u_classification_animal = std::move(arg);
    return Init_Object_u_classification_hazard(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_classification_pedestrian
{
public:
  explicit Init_Object_u_classification_pedestrian(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_classification_animal u_classification_pedestrian(::ars548_messages::msg::Object::_u_classification_pedestrian_type arg)
  {
    msg_.u_classification_pedestrian = std::move(arg);
    return Init_Object_u_classification_animal(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_classification_bicycle
{
public:
  explicit Init_Object_u_classification_bicycle(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_classification_pedestrian u_classification_bicycle(::ars548_messages::msg::Object::_u_classification_bicycle_type arg)
  {
    msg_.u_classification_bicycle = std::move(arg);
    return Init_Object_u_classification_pedestrian(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_classification_motorcycle
{
public:
  explicit Init_Object_u_classification_motorcycle(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_classification_bicycle u_classification_motorcycle(::ars548_messages::msg::Object::_u_classification_motorcycle_type arg)
  {
    msg_.u_classification_motorcycle = std::move(arg);
    return Init_Object_u_classification_bicycle(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_classification_truck
{
public:
  explicit Init_Object_u_classification_truck(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_classification_motorcycle u_classification_truck(::ars548_messages::msg::Object::_u_classification_truck_type arg)
  {
    msg_.u_classification_truck = std::move(arg);
    return Init_Object_u_classification_motorcycle(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_classification_car
{
public:
  explicit Init_Object_u_classification_car(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_classification_truck u_classification_car(::ars548_messages::msg::Object::_u_classification_car_type arg)
  {
    msg_.u_classification_car = std::move(arg);
    return Init_Object_u_classification_truck(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_existence_ppv
{
public:
  explicit Init_Object_u_existence_ppv(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_classification_car u_existence_ppv(::ars548_messages::msg::Object::_u_existence_ppv_type arg)
  {
    msg_.u_existence_ppv = std::move(arg);
    return Init_Object_u_classification_car(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_existence_probability
{
public:
  explicit Init_Object_u_existence_probability(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_existence_ppv u_existence_probability(::ars548_messages::msg::Object::_u_existence_probability_type arg)
  {
    msg_.u_existence_probability = std::move(arg);
    return Init_Object_u_existence_ppv(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_existence_invalidflags
{
public:
  explicit Init_Object_u_existence_invalidflags(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_existence_probability u_existence_invalidflags(::ars548_messages::msg::Object::_u_existence_invalidflags_type arg)
  {
    msg_.u_existence_invalidflags = std::move(arg);
    return Init_Object_u_existence_probability(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_position_orientation_std
{
public:
  explicit Init_Object_u_position_orientation_std(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_existence_invalidflags u_position_orientation_std(::ars548_messages::msg::Object::_u_position_orientation_std_type arg)
  {
    msg_.u_position_orientation_std = std::move(arg);
    return Init_Object_u_existence_invalidflags(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_position_orientation
{
public:
  explicit Init_Object_u_position_orientation(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_position_orientation_std u_position_orientation(::ars548_messages::msg::Object::_u_position_orientation_type arg)
  {
    msg_.u_position_orientation = std::move(arg);
    return Init_Object_u_position_orientation_std(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_position_covariancexy
{
public:
  explicit Init_Object_u_position_covariancexy(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_position_orientation u_position_covariancexy(::ars548_messages::msg::Object::_u_position_covariancexy_type arg)
  {
    msg_.u_position_covariancexy = std::move(arg);
    return Init_Object_u_position_orientation(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_position_z_std
{
public:
  explicit Init_Object_u_position_z_std(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_position_covariancexy u_position_z_std(::ars548_messages::msg::Object::_u_position_z_std_type arg)
  {
    msg_.u_position_z_std = std::move(arg);
    return Init_Object_u_position_covariancexy(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_position_z
{
public:
  explicit Init_Object_u_position_z(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_position_z_std u_position_z(::ars548_messages::msg::Object::_u_position_z_type arg)
  {
    msg_.u_position_z = std::move(arg);
    return Init_Object_u_position_z_std(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_position_y_std
{
public:
  explicit Init_Object_u_position_y_std(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_position_z u_position_y_std(::ars548_messages::msg::Object::_u_position_y_std_type arg)
  {
    msg_.u_position_y_std = std::move(arg);
    return Init_Object_u_position_z(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_position_y
{
public:
  explicit Init_Object_u_position_y(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_position_y_std u_position_y(::ars548_messages::msg::Object::_u_position_y_type arg)
  {
    msg_.u_position_y = std::move(arg);
    return Init_Object_u_position_y_std(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_position_x_std
{
public:
  explicit Init_Object_u_position_x_std(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_position_y u_position_x_std(::ars548_messages::msg::Object::_u_position_x_std_type arg)
  {
    msg_.u_position_x_std = std::move(arg);
    return Init_Object_u_position_y(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_position_x
{
public:
  explicit Init_Object_u_position_x(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_position_x_std u_position_x(::ars548_messages::msg::Object::_u_position_x_type arg)
  {
    msg_.u_position_x = std::move(arg);
    return Init_Object_u_position_x_std(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_position_reference
{
public:
  explicit Init_Object_u_position_reference(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_position_x u_position_reference(::ars548_messages::msg::Object::_u_position_reference_type arg)
  {
    msg_.u_position_reference = std::move(arg);
    return Init_Object_u_position_x(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_position_invalidflags
{
public:
  explicit Init_Object_u_position_invalidflags(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_position_reference u_position_invalidflags(::ars548_messages::msg::Object::_u_position_invalidflags_type arg)
  {
    msg_.u_position_invalidflags = std::move(arg);
    return Init_Object_u_position_reference(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_statusmovement
{
public:
  explicit Init_Object_u_statusmovement(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_position_invalidflags u_statusmovement(::ars548_messages::msg::Object::_u_statusmovement_type arg)
  {
    msg_.u_statusmovement = std::move(arg);
    return Init_Object_u_position_invalidflags(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_statusmeasurement
{
public:
  explicit Init_Object_u_statusmeasurement(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_statusmovement u_statusmeasurement(::ars548_messages::msg::Object::_u_statusmeasurement_type arg)
  {
    msg_.u_statusmeasurement = std::move(arg);
    return Init_Object_u_statusmovement(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_age
{
public:
  explicit Init_Object_u_age(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_statusmeasurement u_age(::ars548_messages::msg::Object::_u_age_type arg)
  {
    msg_.u_age = std::move(arg);
    return Init_Object_u_statusmeasurement(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_id
{
public:
  explicit Init_Object_u_id(::ars548_messages::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_u_age u_id(::ars548_messages::msg::Object::_u_id_type arg)
  {
    msg_.u_id = std::move(arg);
    return Init_Object_u_age(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

class Init_Object_u_statussensor
{
public:
  Init_Object_u_statussensor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object_u_id u_statussensor(::ars548_messages::msg::Object::_u_statussensor_type arg)
  {
    msg_.u_statussensor = std::move(arg);
    return Init_Object_u_id(msg_);
  }

private:
  ::ars548_messages::msg::Object msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ars548_messages::msg::Object>()
{
  return ars548_messages::msg::builder::Init_Object_u_statussensor();
}

}  // namespace ars548_messages

#endif  // ARS548_MESSAGES__MSG__DETAIL__OBJECT__BUILDER_HPP_
