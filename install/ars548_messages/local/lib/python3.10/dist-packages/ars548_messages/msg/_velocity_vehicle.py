# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ars548_messages:msg/VelocityVehicle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VelocityVehicle(type):
    """Metaclass of message 'VelocityVehicle'."""

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
                'ars548_messages.msg.VelocityVehicle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__velocity_vehicle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__velocity_vehicle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__velocity_vehicle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__velocity_vehicle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__velocity_vehicle

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VelocityVehicle(metaclass=Metaclass_VelocityVehicle):
    """Message class 'VelocityVehicle'."""

    __slots__ = [
        '_statusvelocitynearstandstill',
        '_qualifiervelocityvehicle',
        '_velocityvehicleeventdataqualifier',
        '_velocityvehicle',
        '_velocityvehicle_invalidflag',
    ]

    _fields_and_field_types = {
        'statusvelocitynearstandstill': 'uint8',
        'qualifiervelocityvehicle': 'uint8',
        'velocityvehicleeventdataqualifier': 'uint8',
        'velocityvehicle': 'float',
        'velocityvehicle_invalidflag': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.statusvelocitynearstandstill = kwargs.get('statusvelocitynearstandstill', int())
        self.qualifiervelocityvehicle = kwargs.get('qualifiervelocityvehicle', int())
        self.velocityvehicleeventdataqualifier = kwargs.get('velocityvehicleeventdataqualifier', int())
        self.velocityvehicle = kwargs.get('velocityvehicle', float())
        self.velocityvehicle_invalidflag = kwargs.get('velocityvehicle_invalidflag', int())

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
        if self.statusvelocitynearstandstill != other.statusvelocitynearstandstill:
            return False
        if self.qualifiervelocityvehicle != other.qualifiervelocityvehicle:
            return False
        if self.velocityvehicleeventdataqualifier != other.velocityvehicleeventdataqualifier:
            return False
        if self.velocityvehicle != other.velocityvehicle:
            return False
        if self.velocityvehicle_invalidflag != other.velocityvehicle_invalidflag:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def statusvelocitynearstandstill(self):
        """Message field 'statusvelocitynearstandstill'."""
        return self._statusvelocitynearstandstill

    @statusvelocitynearstandstill.setter
    def statusvelocitynearstandstill(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'statusvelocitynearstandstill' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'statusvelocitynearstandstill' field must be an unsigned integer in [0, 255]"
        self._statusvelocitynearstandstill = value

    @builtins.property
    def qualifiervelocityvehicle(self):
        """Message field 'qualifiervelocityvehicle'."""
        return self._qualifiervelocityvehicle

    @qualifiervelocityvehicle.setter
    def qualifiervelocityvehicle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'qualifiervelocityvehicle' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'qualifiervelocityvehicle' field must be an unsigned integer in [0, 255]"
        self._qualifiervelocityvehicle = value

    @builtins.property
    def velocityvehicleeventdataqualifier(self):
        """Message field 'velocityvehicleeventdataqualifier'."""
        return self._velocityvehicleeventdataqualifier

    @velocityvehicleeventdataqualifier.setter
    def velocityvehicleeventdataqualifier(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'velocityvehicleeventdataqualifier' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'velocityvehicleeventdataqualifier' field must be an unsigned integer in [0, 255]"
        self._velocityvehicleeventdataqualifier = value

    @builtins.property
    def velocityvehicle(self):
        """Message field 'velocityvehicle'."""
        return self._velocityvehicle

    @velocityvehicle.setter
    def velocityvehicle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocityvehicle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocityvehicle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocityvehicle = value

    @builtins.property
    def velocityvehicle_invalidflag(self):
        """Message field 'velocityvehicle_invalidflag'."""
        return self._velocityvehicle_invalidflag

    @velocityvehicle_invalidflag.setter
    def velocityvehicle_invalidflag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'velocityvehicle_invalidflag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'velocityvehicle_invalidflag' field must be an unsigned integer in [0, 255]"
        self._velocityvehicle_invalidflag = value
