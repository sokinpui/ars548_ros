# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ars548_messages:msg/AccelerationLateralCoG.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AccelerationLateralCoG(type):
    """Metaclass of message 'AccelerationLateralCoG'."""

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
                'ars548_messages.msg.AccelerationLateralCoG')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__acceleration_lateral_co_g
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__acceleration_lateral_co_g
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__acceleration_lateral_co_g
            cls._TYPE_SUPPORT = module.type_support_msg__msg__acceleration_lateral_co_g
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__acceleration_lateral_co_g

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AccelerationLateralCoG(metaclass=Metaclass_AccelerationLateralCoG):
    """Message class 'AccelerationLateralCoG'."""

    __slots__ = [
        '_accelerationlateralerramp',
        '_accelerationlateralerramp_invalidflag',
        '_qualifieraccelerationlateral',
        '_accelerationlateral',
        '_accelerationlateral_invalidflag',
        '_accelerationlateraleventdataqualifier',
    ]

    _fields_and_field_types = {
        'accelerationlateralerramp': 'float',
        'accelerationlateralerramp_invalidflag': 'uint8',
        'qualifieraccelerationlateral': 'uint8',
        'accelerationlateral': 'float',
        'accelerationlateral_invalidflag': 'uint8',
        'accelerationlateraleventdataqualifier': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accelerationlateralerramp = kwargs.get('accelerationlateralerramp', float())
        self.accelerationlateralerramp_invalidflag = kwargs.get('accelerationlateralerramp_invalidflag', int())
        self.qualifieraccelerationlateral = kwargs.get('qualifieraccelerationlateral', int())
        self.accelerationlateral = kwargs.get('accelerationlateral', float())
        self.accelerationlateral_invalidflag = kwargs.get('accelerationlateral_invalidflag', int())
        self.accelerationlateraleventdataqualifier = kwargs.get('accelerationlateraleventdataqualifier', int())

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
        if self.accelerationlateralerramp != other.accelerationlateralerramp:
            return False
        if self.accelerationlateralerramp_invalidflag != other.accelerationlateralerramp_invalidflag:
            return False
        if self.qualifieraccelerationlateral != other.qualifieraccelerationlateral:
            return False
        if self.accelerationlateral != other.accelerationlateral:
            return False
        if self.accelerationlateral_invalidflag != other.accelerationlateral_invalidflag:
            return False
        if self.accelerationlateraleventdataqualifier != other.accelerationlateraleventdataqualifier:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accelerationlateralerramp(self):
        """Message field 'accelerationlateralerramp'."""
        return self._accelerationlateralerramp

    @accelerationlateralerramp.setter
    def accelerationlateralerramp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accelerationlateralerramp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accelerationlateralerramp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accelerationlateralerramp = value

    @builtins.property
    def accelerationlateralerramp_invalidflag(self):
        """Message field 'accelerationlateralerramp_invalidflag'."""
        return self._accelerationlateralerramp_invalidflag

    @accelerationlateralerramp_invalidflag.setter
    def accelerationlateralerramp_invalidflag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accelerationlateralerramp_invalidflag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'accelerationlateralerramp_invalidflag' field must be an unsigned integer in [0, 255]"
        self._accelerationlateralerramp_invalidflag = value

    @builtins.property
    def qualifieraccelerationlateral(self):
        """Message field 'qualifieraccelerationlateral'."""
        return self._qualifieraccelerationlateral

    @qualifieraccelerationlateral.setter
    def qualifieraccelerationlateral(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'qualifieraccelerationlateral' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'qualifieraccelerationlateral' field must be an unsigned integer in [0, 255]"
        self._qualifieraccelerationlateral = value

    @builtins.property
    def accelerationlateral(self):
        """Message field 'accelerationlateral'."""
        return self._accelerationlateral

    @accelerationlateral.setter
    def accelerationlateral(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accelerationlateral' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accelerationlateral' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accelerationlateral = value

    @builtins.property
    def accelerationlateral_invalidflag(self):
        """Message field 'accelerationlateral_invalidflag'."""
        return self._accelerationlateral_invalidflag

    @accelerationlateral_invalidflag.setter
    def accelerationlateral_invalidflag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accelerationlateral_invalidflag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'accelerationlateral_invalidflag' field must be an unsigned integer in [0, 255]"
        self._accelerationlateral_invalidflag = value

    @builtins.property
    def accelerationlateraleventdataqualifier(self):
        """Message field 'accelerationlateraleventdataqualifier'."""
        return self._accelerationlateraleventdataqualifier

    @accelerationlateraleventdataqualifier.setter
    def accelerationlateraleventdataqualifier(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accelerationlateraleventdataqualifier' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'accelerationlateraleventdataqualifier' field must be an unsigned integer in [0, 255]"
        self._accelerationlateraleventdataqualifier = value
