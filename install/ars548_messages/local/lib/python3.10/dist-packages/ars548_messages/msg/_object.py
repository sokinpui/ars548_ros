# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ars548_messages:msg/Object.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Object(type):
    """Metaclass of message 'Object'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ars548_messages')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ars548_messages.msg.Object')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Object(metaclass=Metaclass_Object):
    """Message class 'Object'."""

    __slots__ = [
        '_u_statussensor',
        '_u_id',
        '_u_age',
        '_u_statusmeasurement',
        '_u_statusmovement',
        '_u_position_invalidflags',
        '_u_position_reference',
        '_u_position_x',
        '_u_position_x_std',
        '_u_position_y',
        '_u_position_y_std',
        '_u_position_z',
        '_u_position_z_std',
        '_u_position_covariancexy',
        '_u_position_orientation',
        '_u_position_orientation_std',
        '_u_existence_invalidflags',
        '_u_existence_probability',
        '_u_existence_ppv',
        '_u_classification_car',
        '_u_classification_truck',
        '_u_classification_motorcycle',
        '_u_classification_bicycle',
        '_u_classification_pedestrian',
        '_u_classification_animal',
        '_u_classification_hazard',
        '_u_classification_unknown',
        '_u_classification_overdrivable',
        '_u_classification_underdrivable',
        '_u_dynamics_absvel_invalidflags',
        '_f_dynamics_absvel_x',
        '_f_dynamics_absvel_x_std',
        '_f_dynamics_absvel_y',
        '_f_dynamics_absvel_y_std',
        '_f_dynamics_absvel_covariancexy',
        '_u_dynamics_relvel_invalidflags',
        '_f_dynamics_relvel_x',
        '_f_dynamics_relvel_x_std',
        '_f_dynamics_relvel_y',
        '_f_dynamics_relvel_y_std',
        '_f_dynamics_relvel_covariancexy',
        '_u_dynamics_absaccel_invalidflags',
        '_f_dynamics_absaccel_x',
        '_f_dynamics_absaccel_x_std',
        '_f_dynamics_absaccel_y',
        '_f_dynamics_absaccel_y_std',
        '_f_dynamics_absaccel_covariancexy',
        '_u_dynamics_relaccel_invalidflags',
        '_f_dynamics_relaccel_x',
        '_f_dynamics_relaccel_x_std',
        '_f_dynamics_relaccel_y',
        '_f_dynamics_relaccel_y_std',
        '_f_dynamics_relaccel_covariancexy',
        '_u_dynamics_orientation_invalidflags',
        '_u_dynamics_orientation_rate_mean',
        '_u_dynamics_orientation_rate_std',
        '_u_shape_length_status',
        '_u_shape_length_edge_invalidflags',
        '_u_shape_length_edge_mean',
        '_u_shape_length_edge_std',
        '_u_shape_width_status',
        '_u_shape_width_edge_invalidflags',
        '_u_shape_width_edge_mean',
        '_u_shape_width_edge_std',
    ]

    _fields_and_field_types = {
        'u_statussensor': 'uint16',
        'u_id': 'uint32',
        'u_age': 'uint16',
        'u_statusmeasurement': 'uint8',
        'u_statusmovement': 'uint8',
        'u_position_invalidflags': 'uint16',
        'u_position_reference': 'uint8',
        'u_position_x': 'float',
        'u_position_x_std': 'float',
        'u_position_y': 'float',
        'u_position_y_std': 'float',
        'u_position_z': 'float',
        'u_position_z_std': 'float',
        'u_position_covariancexy': 'float',
        'u_position_orientation': 'float',
        'u_position_orientation_std': 'float',
        'u_existence_invalidflags': 'uint8',
        'u_existence_probability': 'float',
        'u_existence_ppv': 'float',
        'u_classification_car': 'uint8',
        'u_classification_truck': 'uint8',
        'u_classification_motorcycle': 'uint8',
        'u_classification_bicycle': 'uint8',
        'u_classification_pedestrian': 'uint8',
        'u_classification_animal': 'uint8',
        'u_classification_hazard': 'uint8',
        'u_classification_unknown': 'uint8',
        'u_classification_overdrivable': 'uint8',
        'u_classification_underdrivable': 'uint8',
        'u_dynamics_absvel_invalidflags': 'uint8',
        'f_dynamics_absvel_x': 'float',
        'f_dynamics_absvel_x_std': 'float',
        'f_dynamics_absvel_y': 'float',
        'f_dynamics_absvel_y_std': 'float',
        'f_dynamics_absvel_covariancexy': 'float',
        'u_dynamics_relvel_invalidflags': 'uint8',
        'f_dynamics_relvel_x': 'float',
        'f_dynamics_relvel_x_std': 'float',
        'f_dynamics_relvel_y': 'float',
        'f_dynamics_relvel_y_std': 'float',
        'f_dynamics_relvel_covariancexy': 'float',
        'u_dynamics_absaccel_invalidflags': 'uint8',
        'f_dynamics_absaccel_x': 'float',
        'f_dynamics_absaccel_x_std': 'float',
        'f_dynamics_absaccel_y': 'float',
        'f_dynamics_absaccel_y_std': 'float',
        'f_dynamics_absaccel_covariancexy': 'float',
        'u_dynamics_relaccel_invalidflags': 'uint8',
        'f_dynamics_relaccel_x': 'float',
        'f_dynamics_relaccel_x_std': 'float',
        'f_dynamics_relaccel_y': 'float',
        'f_dynamics_relaccel_y_std': 'float',
        'f_dynamics_relaccel_covariancexy': 'float',
        'u_dynamics_orientation_invalidflags': 'uint8',
        'u_dynamics_orientation_rate_mean': 'float',
        'u_dynamics_orientation_rate_std': 'float',
        'u_shape_length_status': 'uint32',
        'u_shape_length_edge_invalidflags': 'uint8',
        'u_shape_length_edge_mean': 'float',
        'u_shape_length_edge_std': 'float',
        'u_shape_width_status': 'uint32',
        'u_shape_width_edge_invalidflags': 'uint8',
        'u_shape_width_edge_mean': 'float',
        'u_shape_width_edge_std': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.u_statussensor = kwargs.get('u_statussensor', int())
        self.u_id = kwargs.get('u_id', int())
        self.u_age = kwargs.get('u_age', int())
        self.u_statusmeasurement = kwargs.get('u_statusmeasurement', int())
        self.u_statusmovement = kwargs.get('u_statusmovement', int())
        self.u_position_invalidflags = kwargs.get('u_position_invalidflags', int())
        self.u_position_reference = kwargs.get('u_position_reference', int())
        self.u_position_x = kwargs.get('u_position_x', float())
        self.u_position_x_std = kwargs.get('u_position_x_std', float())
        self.u_position_y = kwargs.get('u_position_y', float())
        self.u_position_y_std = kwargs.get('u_position_y_std', float())
        self.u_position_z = kwargs.get('u_position_z', float())
        self.u_position_z_std = kwargs.get('u_position_z_std', float())
        self.u_position_covariancexy = kwargs.get('u_position_covariancexy', float())
        self.u_position_orientation = kwargs.get('u_position_orientation', float())
        self.u_position_orientation_std = kwargs.get('u_position_orientation_std', float())
        self.u_existence_invalidflags = kwargs.get('u_existence_invalidflags', int())
        self.u_existence_probability = kwargs.get('u_existence_probability', float())
        self.u_existence_ppv = kwargs.get('u_existence_ppv', float())
        self.u_classification_car = kwargs.get('u_classification_car', int())
        self.u_classification_truck = kwargs.get('u_classification_truck', int())
        self.u_classification_motorcycle = kwargs.get('u_classification_motorcycle', int())
        self.u_classification_bicycle = kwargs.get('u_classification_bicycle', int())
        self.u_classification_pedestrian = kwargs.get('u_classification_pedestrian', int())
        self.u_classification_animal = kwargs.get('u_classification_animal', int())
        self.u_classification_hazard = kwargs.get('u_classification_hazard', int())
        self.u_classification_unknown = kwargs.get('u_classification_unknown', int())
        self.u_classification_overdrivable = kwargs.get('u_classification_overdrivable', int())
        self.u_classification_underdrivable = kwargs.get('u_classification_underdrivable', int())
        self.u_dynamics_absvel_invalidflags = kwargs.get('u_dynamics_absvel_invalidflags', int())
        self.f_dynamics_absvel_x = kwargs.get('f_dynamics_absvel_x', float())
        self.f_dynamics_absvel_x_std = kwargs.get('f_dynamics_absvel_x_std', float())
        self.f_dynamics_absvel_y = kwargs.get('f_dynamics_absvel_y', float())
        self.f_dynamics_absvel_y_std = kwargs.get('f_dynamics_absvel_y_std', float())
        self.f_dynamics_absvel_covariancexy = kwargs.get('f_dynamics_absvel_covariancexy', float())
        self.u_dynamics_relvel_invalidflags = kwargs.get('u_dynamics_relvel_invalidflags', int())
        self.f_dynamics_relvel_x = kwargs.get('f_dynamics_relvel_x', float())
        self.f_dynamics_relvel_x_std = kwargs.get('f_dynamics_relvel_x_std', float())
        self.f_dynamics_relvel_y = kwargs.get('f_dynamics_relvel_y', float())
        self.f_dynamics_relvel_y_std = kwargs.get('f_dynamics_relvel_y_std', float())
        self.f_dynamics_relvel_covariancexy = kwargs.get('f_dynamics_relvel_covariancexy', float())
        self.u_dynamics_absaccel_invalidflags = kwargs.get('u_dynamics_absaccel_invalidflags', int())
        self.f_dynamics_absaccel_x = kwargs.get('f_dynamics_absaccel_x', float())
        self.f_dynamics_absaccel_x_std = kwargs.get('f_dynamics_absaccel_x_std', float())
        self.f_dynamics_absaccel_y = kwargs.get('f_dynamics_absaccel_y', float())
        self.f_dynamics_absaccel_y_std = kwargs.get('f_dynamics_absaccel_y_std', float())
        self.f_dynamics_absaccel_covariancexy = kwargs.get('f_dynamics_absaccel_covariancexy', float())
        self.u_dynamics_relaccel_invalidflags = kwargs.get('u_dynamics_relaccel_invalidflags', int())
        self.f_dynamics_relaccel_x = kwargs.get('f_dynamics_relaccel_x', float())
        self.f_dynamics_relaccel_x_std = kwargs.get('f_dynamics_relaccel_x_std', float())
        self.f_dynamics_relaccel_y = kwargs.get('f_dynamics_relaccel_y', float())
        self.f_dynamics_relaccel_y_std = kwargs.get('f_dynamics_relaccel_y_std', float())
        self.f_dynamics_relaccel_covariancexy = kwargs.get('f_dynamics_relaccel_covariancexy', float())
        self.u_dynamics_orientation_invalidflags = kwargs.get('u_dynamics_orientation_invalidflags', int())
        self.u_dynamics_orientation_rate_mean = kwargs.get('u_dynamics_orientation_rate_mean', float())
        self.u_dynamics_orientation_rate_std = kwargs.get('u_dynamics_orientation_rate_std', float())
        self.u_shape_length_status = kwargs.get('u_shape_length_status', int())
        self.u_shape_length_edge_invalidflags = kwargs.get('u_shape_length_edge_invalidflags', int())
        self.u_shape_length_edge_mean = kwargs.get('u_shape_length_edge_mean', float())
        self.u_shape_length_edge_std = kwargs.get('u_shape_length_edge_std', float())
        self.u_shape_width_status = kwargs.get('u_shape_width_status', int())
        self.u_shape_width_edge_invalidflags = kwargs.get('u_shape_width_edge_invalidflags', int())
        self.u_shape_width_edge_mean = kwargs.get('u_shape_width_edge_mean', float())
        self.u_shape_width_edge_std = kwargs.get('u_shape_width_edge_std', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.u_statussensor != other.u_statussensor:
            return False
        if self.u_id != other.u_id:
            return False
        if self.u_age != other.u_age:
            return False
        if self.u_statusmeasurement != other.u_statusmeasurement:
            return False
        if self.u_statusmovement != other.u_statusmovement:
            return False
        if self.u_position_invalidflags != other.u_position_invalidflags:
            return False
        if self.u_position_reference != other.u_position_reference:
            return False
        if self.u_position_x != other.u_position_x:
            return False
        if self.u_position_x_std != other.u_position_x_std:
            return False
        if self.u_position_y != other.u_position_y:
            return False
        if self.u_position_y_std != other.u_position_y_std:
            return False
        if self.u_position_z != other.u_position_z:
            return False
        if self.u_position_z_std != other.u_position_z_std:
            return False
        if self.u_position_covariancexy != other.u_position_covariancexy:
            return False
        if self.u_position_orientation != other.u_position_orientation:
            return False
        if self.u_position_orientation_std != other.u_position_orientation_std:
            return False
        if self.u_existence_invalidflags != other.u_existence_invalidflags:
            return False
        if self.u_existence_probability != other.u_existence_probability:
            return False
        if self.u_existence_ppv != other.u_existence_ppv:
            return False
        if self.u_classification_car != other.u_classification_car:
            return False
        if self.u_classification_truck != other.u_classification_truck:
            return False
        if self.u_classification_motorcycle != other.u_classification_motorcycle:
            return False
        if self.u_classification_bicycle != other.u_classification_bicycle:
            return False
        if self.u_classification_pedestrian != other.u_classification_pedestrian:
            return False
        if self.u_classification_animal != other.u_classification_animal:
            return False
        if self.u_classification_hazard != other.u_classification_hazard:
            return False
        if self.u_classification_unknown != other.u_classification_unknown:
            return False
        if self.u_classification_overdrivable != other.u_classification_overdrivable:
            return False
        if self.u_classification_underdrivable != other.u_classification_underdrivable:
            return False
        if self.u_dynamics_absvel_invalidflags != other.u_dynamics_absvel_invalidflags:
            return False
        if self.f_dynamics_absvel_x != other.f_dynamics_absvel_x:
            return False
        if self.f_dynamics_absvel_x_std != other.f_dynamics_absvel_x_std:
            return False
        if self.f_dynamics_absvel_y != other.f_dynamics_absvel_y:
            return False
        if self.f_dynamics_absvel_y_std != other.f_dynamics_absvel_y_std:
            return False
        if self.f_dynamics_absvel_covariancexy != other.f_dynamics_absvel_covariancexy:
            return False
        if self.u_dynamics_relvel_invalidflags != other.u_dynamics_relvel_invalidflags:
            return False
        if self.f_dynamics_relvel_x != other.f_dynamics_relvel_x:
            return False
        if self.f_dynamics_relvel_x_std != other.f_dynamics_relvel_x_std:
            return False
        if self.f_dynamics_relvel_y != other.f_dynamics_relvel_y:
            return False
        if self.f_dynamics_relvel_y_std != other.f_dynamics_relvel_y_std:
            return False
        if self.f_dynamics_relvel_covariancexy != other.f_dynamics_relvel_covariancexy:
            return False
        if self.u_dynamics_absaccel_invalidflags != other.u_dynamics_absaccel_invalidflags:
            return False
        if self.f_dynamics_absaccel_x != other.f_dynamics_absaccel_x:
            return False
        if self.f_dynamics_absaccel_x_std != other.f_dynamics_absaccel_x_std:
            return False
        if self.f_dynamics_absaccel_y != other.f_dynamics_absaccel_y:
            return False
        if self.f_dynamics_absaccel_y_std != other.f_dynamics_absaccel_y_std:
            return False
        if self.f_dynamics_absaccel_covariancexy != other.f_dynamics_absaccel_covariancexy:
            return False
        if self.u_dynamics_relaccel_invalidflags != other.u_dynamics_relaccel_invalidflags:
            return False
        if self.f_dynamics_relaccel_x != other.f_dynamics_relaccel_x:
            return False
        if self.f_dynamics_relaccel_x_std != other.f_dynamics_relaccel_x_std:
            return False
        if self.f_dynamics_relaccel_y != other.f_dynamics_relaccel_y:
            return False
        if self.f_dynamics_relaccel_y_std != other.f_dynamics_relaccel_y_std:
            return False
        if self.f_dynamics_relaccel_covariancexy != other.f_dynamics_relaccel_covariancexy:
            return False
        if self.u_dynamics_orientation_invalidflags != other.u_dynamics_orientation_invalidflags:
            return False
        if self.u_dynamics_orientation_rate_mean != other.u_dynamics_orientation_rate_mean:
            return False
        if self.u_dynamics_orientation_rate_std != other.u_dynamics_orientation_rate_std:
            return False
        if self.u_shape_length_status != other.u_shape_length_status:
            return False
        if self.u_shape_length_edge_invalidflags != other.u_shape_length_edge_invalidflags:
            return False
        if self.u_shape_length_edge_mean != other.u_shape_length_edge_mean:
            return False
        if self.u_shape_length_edge_std != other.u_shape_length_edge_std:
            return False
        if self.u_shape_width_status != other.u_shape_width_status:
            return False
        if self.u_shape_width_edge_invalidflags != other.u_shape_width_edge_invalidflags:
            return False
        if self.u_shape_width_edge_mean != other.u_shape_width_edge_mean:
            return False
        if self.u_shape_width_edge_std != other.u_shape_width_edge_std:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def u_statussensor(self):
        """Message field 'u_statussensor'."""
        return self._u_statussensor

    @u_statussensor.setter
    def u_statussensor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_statussensor' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'u_statussensor' field must be an unsigned integer in [0, 65535]"
        self._u_statussensor = value

    @builtins.property
    def u_id(self):
        """Message field 'u_id'."""
        return self._u_id

    @u_id.setter
    def u_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'u_id' field must be an unsigned integer in [0, 4294967295]"
        self._u_id = value

    @builtins.property
    def u_age(self):
        """Message field 'u_age'."""
        return self._u_age

    @u_age.setter
    def u_age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_age' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'u_age' field must be an unsigned integer in [0, 65535]"
        self._u_age = value

    @builtins.property
    def u_statusmeasurement(self):
        """Message field 'u_statusmeasurement'."""
        return self._u_statusmeasurement

    @u_statusmeasurement.setter
    def u_statusmeasurement(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_statusmeasurement' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_statusmeasurement' field must be an unsigned integer in [0, 255]"
        self._u_statusmeasurement = value

    @builtins.property
    def u_statusmovement(self):
        """Message field 'u_statusmovement'."""
        return self._u_statusmovement

    @u_statusmovement.setter
    def u_statusmovement(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_statusmovement' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_statusmovement' field must be an unsigned integer in [0, 255]"
        self._u_statusmovement = value

    @builtins.property
    def u_position_invalidflags(self):
        """Message field 'u_position_invalidflags'."""
        return self._u_position_invalidflags

    @u_position_invalidflags.setter
    def u_position_invalidflags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_position_invalidflags' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'u_position_invalidflags' field must be an unsigned integer in [0, 65535]"
        self._u_position_invalidflags = value

    @builtins.property
    def u_position_reference(self):
        """Message field 'u_position_reference'."""
        return self._u_position_reference

    @u_position_reference.setter
    def u_position_reference(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_position_reference' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_position_reference' field must be an unsigned integer in [0, 255]"
        self._u_position_reference = value

    @builtins.property
    def u_position_x(self):
        """Message field 'u_position_x'."""
        return self._u_position_x

    @u_position_x.setter
    def u_position_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u_position_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'u_position_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._u_position_x = value

    @builtins.property
    def u_position_x_std(self):
        """Message field 'u_position_x_std'."""
        return self._u_position_x_std

    @u_position_x_std.setter
    def u_position_x_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u_position_x_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'u_position_x_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._u_position_x_std = value

    @builtins.property
    def u_position_y(self):
        """Message field 'u_position_y'."""
        return self._u_position_y

    @u_position_y.setter
    def u_position_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u_position_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'u_position_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._u_position_y = value

    @builtins.property
    def u_position_y_std(self):
        """Message field 'u_position_y_std'."""
        return self._u_position_y_std

    @u_position_y_std.setter
    def u_position_y_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u_position_y_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'u_position_y_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._u_position_y_std = value

    @builtins.property
    def u_position_z(self):
        """Message field 'u_position_z'."""
        return self._u_position_z

    @u_position_z.setter
    def u_position_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u_position_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'u_position_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._u_position_z = value

    @builtins.property
    def u_position_z_std(self):
        """Message field 'u_position_z_std'."""
        return self._u_position_z_std

    @u_position_z_std.setter
    def u_position_z_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u_position_z_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'u_position_z_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._u_position_z_std = value

    @builtins.property
    def u_position_covariancexy(self):
        """Message field 'u_position_covariancexy'."""
        return self._u_position_covariancexy

    @u_position_covariancexy.setter
    def u_position_covariancexy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u_position_covariancexy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'u_position_covariancexy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._u_position_covariancexy = value

    @builtins.property
    def u_position_orientation(self):
        """Message field 'u_position_orientation'."""
        return self._u_position_orientation

    @u_position_orientation.setter
    def u_position_orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u_position_orientation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'u_position_orientation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._u_position_orientation = value

    @builtins.property
    def u_position_orientation_std(self):
        """Message field 'u_position_orientation_std'."""
        return self._u_position_orientation_std

    @u_position_orientation_std.setter
    def u_position_orientation_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u_position_orientation_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'u_position_orientation_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._u_position_orientation_std = value

    @builtins.property
    def u_existence_invalidflags(self):
        """Message field 'u_existence_invalidflags'."""
        return self._u_existence_invalidflags

    @u_existence_invalidflags.setter
    def u_existence_invalidflags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_existence_invalidflags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_existence_invalidflags' field must be an unsigned integer in [0, 255]"
        self._u_existence_invalidflags = value

    @builtins.property
    def u_existence_probability(self):
        """Message field 'u_existence_probability'."""
        return self._u_existence_probability

    @u_existence_probability.setter
    def u_existence_probability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u_existence_probability' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'u_existence_probability' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._u_existence_probability = value

    @builtins.property
    def u_existence_ppv(self):
        """Message field 'u_existence_ppv'."""
        return self._u_existence_ppv

    @u_existence_ppv.setter
    def u_existence_ppv(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u_existence_ppv' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'u_existence_ppv' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._u_existence_ppv = value

    @builtins.property
    def u_classification_car(self):
        """Message field 'u_classification_car'."""
        return self._u_classification_car

    @u_classification_car.setter
    def u_classification_car(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_classification_car' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_classification_car' field must be an unsigned integer in [0, 255]"
        self._u_classification_car = value

    @builtins.property
    def u_classification_truck(self):
        """Message field 'u_classification_truck'."""
        return self._u_classification_truck

    @u_classification_truck.setter
    def u_classification_truck(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_classification_truck' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_classification_truck' field must be an unsigned integer in [0, 255]"
        self._u_classification_truck = value

    @builtins.property
    def u_classification_motorcycle(self):
        """Message field 'u_classification_motorcycle'."""
        return self._u_classification_motorcycle

    @u_classification_motorcycle.setter
    def u_classification_motorcycle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_classification_motorcycle' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_classification_motorcycle' field must be an unsigned integer in [0, 255]"
        self._u_classification_motorcycle = value

    @builtins.property
    def u_classification_bicycle(self):
        """Message field 'u_classification_bicycle'."""
        return self._u_classification_bicycle

    @u_classification_bicycle.setter
    def u_classification_bicycle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_classification_bicycle' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_classification_bicycle' field must be an unsigned integer in [0, 255]"
        self._u_classification_bicycle = value

    @builtins.property
    def u_classification_pedestrian(self):
        """Message field 'u_classification_pedestrian'."""
        return self._u_classification_pedestrian

    @u_classification_pedestrian.setter
    def u_classification_pedestrian(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_classification_pedestrian' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_classification_pedestrian' field must be an unsigned integer in [0, 255]"
        self._u_classification_pedestrian = value

    @builtins.property
    def u_classification_animal(self):
        """Message field 'u_classification_animal'."""
        return self._u_classification_animal

    @u_classification_animal.setter
    def u_classification_animal(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_classification_animal' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_classification_animal' field must be an unsigned integer in [0, 255]"
        self._u_classification_animal = value

    @builtins.property
    def u_classification_hazard(self):
        """Message field 'u_classification_hazard'."""
        return self._u_classification_hazard

    @u_classification_hazard.setter
    def u_classification_hazard(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_classification_hazard' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_classification_hazard' field must be an unsigned integer in [0, 255]"
        self._u_classification_hazard = value

    @builtins.property
    def u_classification_unknown(self):
        """Message field 'u_classification_unknown'."""
        return self._u_classification_unknown

    @u_classification_unknown.setter
    def u_classification_unknown(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_classification_unknown' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_classification_unknown' field must be an unsigned integer in [0, 255]"
        self._u_classification_unknown = value

    @builtins.property
    def u_classification_overdrivable(self):
        """Message field 'u_classification_overdrivable'."""
        return self._u_classification_overdrivable

    @u_classification_overdrivable.setter
    def u_classification_overdrivable(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_classification_overdrivable' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_classification_overdrivable' field must be an unsigned integer in [0, 255]"
        self._u_classification_overdrivable = value

    @builtins.property
    def u_classification_underdrivable(self):
        """Message field 'u_classification_underdrivable'."""
        return self._u_classification_underdrivable

    @u_classification_underdrivable.setter
    def u_classification_underdrivable(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_classification_underdrivable' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_classification_underdrivable' field must be an unsigned integer in [0, 255]"
        self._u_classification_underdrivable = value

    @builtins.property
    def u_dynamics_absvel_invalidflags(self):
        """Message field 'u_dynamics_absvel_invalidflags'."""
        return self._u_dynamics_absvel_invalidflags

    @u_dynamics_absvel_invalidflags.setter
    def u_dynamics_absvel_invalidflags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_dynamics_absvel_invalidflags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_dynamics_absvel_invalidflags' field must be an unsigned integer in [0, 255]"
        self._u_dynamics_absvel_invalidflags = value

    @builtins.property
    def f_dynamics_absvel_x(self):
        """Message field 'f_dynamics_absvel_x'."""
        return self._f_dynamics_absvel_x

    @f_dynamics_absvel_x.setter
    def f_dynamics_absvel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_absvel_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_absvel_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_absvel_x = value

    @builtins.property
    def f_dynamics_absvel_x_std(self):
        """Message field 'f_dynamics_absvel_x_std'."""
        return self._f_dynamics_absvel_x_std

    @f_dynamics_absvel_x_std.setter
    def f_dynamics_absvel_x_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_absvel_x_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_absvel_x_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_absvel_x_std = value

    @builtins.property
    def f_dynamics_absvel_y(self):
        """Message field 'f_dynamics_absvel_y'."""
        return self._f_dynamics_absvel_y

    @f_dynamics_absvel_y.setter
    def f_dynamics_absvel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_absvel_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_absvel_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_absvel_y = value

    @builtins.property
    def f_dynamics_absvel_y_std(self):
        """Message field 'f_dynamics_absvel_y_std'."""
        return self._f_dynamics_absvel_y_std

    @f_dynamics_absvel_y_std.setter
    def f_dynamics_absvel_y_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_absvel_y_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_absvel_y_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_absvel_y_std = value

    @builtins.property
    def f_dynamics_absvel_covariancexy(self):
        """Message field 'f_dynamics_absvel_covariancexy'."""
        return self._f_dynamics_absvel_covariancexy

    @f_dynamics_absvel_covariancexy.setter
    def f_dynamics_absvel_covariancexy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_absvel_covariancexy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_absvel_covariancexy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_absvel_covariancexy = value

    @builtins.property
    def u_dynamics_relvel_invalidflags(self):
        """Message field 'u_dynamics_relvel_invalidflags'."""
        return self._u_dynamics_relvel_invalidflags

    @u_dynamics_relvel_invalidflags.setter
    def u_dynamics_relvel_invalidflags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_dynamics_relvel_invalidflags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_dynamics_relvel_invalidflags' field must be an unsigned integer in [0, 255]"
        self._u_dynamics_relvel_invalidflags = value

    @builtins.property
    def f_dynamics_relvel_x(self):
        """Message field 'f_dynamics_relvel_x'."""
        return self._f_dynamics_relvel_x

    @f_dynamics_relvel_x.setter
    def f_dynamics_relvel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_relvel_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_relvel_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_relvel_x = value

    @builtins.property
    def f_dynamics_relvel_x_std(self):
        """Message field 'f_dynamics_relvel_x_std'."""
        return self._f_dynamics_relvel_x_std

    @f_dynamics_relvel_x_std.setter
    def f_dynamics_relvel_x_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_relvel_x_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_relvel_x_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_relvel_x_std = value

    @builtins.property
    def f_dynamics_relvel_y(self):
        """Message field 'f_dynamics_relvel_y'."""
        return self._f_dynamics_relvel_y

    @f_dynamics_relvel_y.setter
    def f_dynamics_relvel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_relvel_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_relvel_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_relvel_y = value

    @builtins.property
    def f_dynamics_relvel_y_std(self):
        """Message field 'f_dynamics_relvel_y_std'."""
        return self._f_dynamics_relvel_y_std

    @f_dynamics_relvel_y_std.setter
    def f_dynamics_relvel_y_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_relvel_y_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_relvel_y_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_relvel_y_std = value

    @builtins.property
    def f_dynamics_relvel_covariancexy(self):
        """Message field 'f_dynamics_relvel_covariancexy'."""
        return self._f_dynamics_relvel_covariancexy

    @f_dynamics_relvel_covariancexy.setter
    def f_dynamics_relvel_covariancexy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_relvel_covariancexy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_relvel_covariancexy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_relvel_covariancexy = value

    @builtins.property
    def u_dynamics_absaccel_invalidflags(self):
        """Message field 'u_dynamics_absaccel_invalidflags'."""
        return self._u_dynamics_absaccel_invalidflags

    @u_dynamics_absaccel_invalidflags.setter
    def u_dynamics_absaccel_invalidflags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_dynamics_absaccel_invalidflags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_dynamics_absaccel_invalidflags' field must be an unsigned integer in [0, 255]"
        self._u_dynamics_absaccel_invalidflags = value

    @builtins.property
    def f_dynamics_absaccel_x(self):
        """Message field 'f_dynamics_absaccel_x'."""
        return self._f_dynamics_absaccel_x

    @f_dynamics_absaccel_x.setter
    def f_dynamics_absaccel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_absaccel_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_absaccel_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_absaccel_x = value

    @builtins.property
    def f_dynamics_absaccel_x_std(self):
        """Message field 'f_dynamics_absaccel_x_std'."""
        return self._f_dynamics_absaccel_x_std

    @f_dynamics_absaccel_x_std.setter
    def f_dynamics_absaccel_x_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_absaccel_x_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_absaccel_x_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_absaccel_x_std = value

    @builtins.property
    def f_dynamics_absaccel_y(self):
        """Message field 'f_dynamics_absaccel_y'."""
        return self._f_dynamics_absaccel_y

    @f_dynamics_absaccel_y.setter
    def f_dynamics_absaccel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_absaccel_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_absaccel_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_absaccel_y = value

    @builtins.property
    def f_dynamics_absaccel_y_std(self):
        """Message field 'f_dynamics_absaccel_y_std'."""
        return self._f_dynamics_absaccel_y_std

    @f_dynamics_absaccel_y_std.setter
    def f_dynamics_absaccel_y_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_absaccel_y_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_absaccel_y_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_absaccel_y_std = value

    @builtins.property
    def f_dynamics_absaccel_covariancexy(self):
        """Message field 'f_dynamics_absaccel_covariancexy'."""
        return self._f_dynamics_absaccel_covariancexy

    @f_dynamics_absaccel_covariancexy.setter
    def f_dynamics_absaccel_covariancexy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_absaccel_covariancexy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_absaccel_covariancexy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_absaccel_covariancexy = value

    @builtins.property
    def u_dynamics_relaccel_invalidflags(self):
        """Message field 'u_dynamics_relaccel_invalidflags'."""
        return self._u_dynamics_relaccel_invalidflags

    @u_dynamics_relaccel_invalidflags.setter
    def u_dynamics_relaccel_invalidflags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_dynamics_relaccel_invalidflags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_dynamics_relaccel_invalidflags' field must be an unsigned integer in [0, 255]"
        self._u_dynamics_relaccel_invalidflags = value

    @builtins.property
    def f_dynamics_relaccel_x(self):
        """Message field 'f_dynamics_relaccel_x'."""
        return self._f_dynamics_relaccel_x

    @f_dynamics_relaccel_x.setter
    def f_dynamics_relaccel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_relaccel_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_relaccel_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_relaccel_x = value

    @builtins.property
    def f_dynamics_relaccel_x_std(self):
        """Message field 'f_dynamics_relaccel_x_std'."""
        return self._f_dynamics_relaccel_x_std

    @f_dynamics_relaccel_x_std.setter
    def f_dynamics_relaccel_x_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_relaccel_x_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_relaccel_x_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_relaccel_x_std = value

    @builtins.property
    def f_dynamics_relaccel_y(self):
        """Message field 'f_dynamics_relaccel_y'."""
        return self._f_dynamics_relaccel_y

    @f_dynamics_relaccel_y.setter
    def f_dynamics_relaccel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_relaccel_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_relaccel_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_relaccel_y = value

    @builtins.property
    def f_dynamics_relaccel_y_std(self):
        """Message field 'f_dynamics_relaccel_y_std'."""
        return self._f_dynamics_relaccel_y_std

    @f_dynamics_relaccel_y_std.setter
    def f_dynamics_relaccel_y_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_relaccel_y_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_relaccel_y_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_relaccel_y_std = value

    @builtins.property
    def f_dynamics_relaccel_covariancexy(self):
        """Message field 'f_dynamics_relaccel_covariancexy'."""
        return self._f_dynamics_relaccel_covariancexy

    @f_dynamics_relaccel_covariancexy.setter
    def f_dynamics_relaccel_covariancexy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f_dynamics_relaccel_covariancexy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f_dynamics_relaccel_covariancexy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f_dynamics_relaccel_covariancexy = value

    @builtins.property
    def u_dynamics_orientation_invalidflags(self):
        """Message field 'u_dynamics_orientation_invalidflags'."""
        return self._u_dynamics_orientation_invalidflags

    @u_dynamics_orientation_invalidflags.setter
    def u_dynamics_orientation_invalidflags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_dynamics_orientation_invalidflags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_dynamics_orientation_invalidflags' field must be an unsigned integer in [0, 255]"
        self._u_dynamics_orientation_invalidflags = value

    @builtins.property
    def u_dynamics_orientation_rate_mean(self):
        """Message field 'u_dynamics_orientation_rate_mean'."""
        return self._u_dynamics_orientation_rate_mean

    @u_dynamics_orientation_rate_mean.setter
    def u_dynamics_orientation_rate_mean(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u_dynamics_orientation_rate_mean' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'u_dynamics_orientation_rate_mean' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._u_dynamics_orientation_rate_mean = value

    @builtins.property
    def u_dynamics_orientation_rate_std(self):
        """Message field 'u_dynamics_orientation_rate_std'."""
        return self._u_dynamics_orientation_rate_std

    @u_dynamics_orientation_rate_std.setter
    def u_dynamics_orientation_rate_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u_dynamics_orientation_rate_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'u_dynamics_orientation_rate_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._u_dynamics_orientation_rate_std = value

    @builtins.property
    def u_shape_length_status(self):
        """Message field 'u_shape_length_status'."""
        return self._u_shape_length_status

    @u_shape_length_status.setter
    def u_shape_length_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_shape_length_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'u_shape_length_status' field must be an unsigned integer in [0, 4294967295]"
        self._u_shape_length_status = value

    @builtins.property
    def u_shape_length_edge_invalidflags(self):
        """Message field 'u_shape_length_edge_invalidflags'."""
        return self._u_shape_length_edge_invalidflags

    @u_shape_length_edge_invalidflags.setter
    def u_shape_length_edge_invalidflags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_shape_length_edge_invalidflags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_shape_length_edge_invalidflags' field must be an unsigned integer in [0, 255]"
        self._u_shape_length_edge_invalidflags = value

    @builtins.property
    def u_shape_length_edge_mean(self):
        """Message field 'u_shape_length_edge_mean'."""
        return self._u_shape_length_edge_mean

    @u_shape_length_edge_mean.setter
    def u_shape_length_edge_mean(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u_shape_length_edge_mean' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'u_shape_length_edge_mean' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._u_shape_length_edge_mean = value

    @builtins.property
    def u_shape_length_edge_std(self):
        """Message field 'u_shape_length_edge_std'."""
        return self._u_shape_length_edge_std

    @u_shape_length_edge_std.setter
    def u_shape_length_edge_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u_shape_length_edge_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'u_shape_length_edge_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._u_shape_length_edge_std = value

    @builtins.property
    def u_shape_width_status(self):
        """Message field 'u_shape_width_status'."""
        return self._u_shape_width_status

    @u_shape_width_status.setter
    def u_shape_width_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_shape_width_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'u_shape_width_status' field must be an unsigned integer in [0, 4294967295]"
        self._u_shape_width_status = value

    @builtins.property
    def u_shape_width_edge_invalidflags(self):
        """Message field 'u_shape_width_edge_invalidflags'."""
        return self._u_shape_width_edge_invalidflags

    @u_shape_width_edge_invalidflags.setter
    def u_shape_width_edge_invalidflags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u_shape_width_edge_invalidflags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u_shape_width_edge_invalidflags' field must be an unsigned integer in [0, 255]"
        self._u_shape_width_edge_invalidflags = value

    @builtins.property
    def u_shape_width_edge_mean(self):
        """Message field 'u_shape_width_edge_mean'."""
        return self._u_shape_width_edge_mean

    @u_shape_width_edge_mean.setter
    def u_shape_width_edge_mean(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u_shape_width_edge_mean' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'u_shape_width_edge_mean' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._u_shape_width_edge_mean = value

    @builtins.property
    def u_shape_width_edge_std(self):
        """Message field 'u_shape_width_edge_std'."""
        return self._u_shape_width_edge_std

    @u_shape_width_edge_std.setter
    def u_shape_width_edge_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u_shape_width_edge_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'u_shape_width_edge_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._u_shape_width_edge_std = value
