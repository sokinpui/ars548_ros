# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ars548_messages:msg/SteeringAngleFrontAxle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SteeringAngleFrontAxle(type):
    """Metaclass of message 'SteeringAngleFrontAxle'."""

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
                'ars548_messages.msg.SteeringAngleFrontAxle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__steering_angle_front_axle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__steering_angle_front_axle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__steering_angle_front_axle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__steering_angle_front_axle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__steering_angle_front_axle

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SteeringAngleFrontAxle(metaclass=Metaclass_SteeringAngleFrontAxle):
    """Message class 'SteeringAngleFrontAxle'."""

    __slots__ = [
        '_qualifiersteeringanglefrontaxle',
        '_steeringanglefrontaxleerramp',
        '_steeringanglefrontaxleerramp_invalidflag',
        '_steeringanglefrontaxle',
        '_steeringanglefrontaxle_invalidflag',
        '_steeringanglefrontaxleeventdataqualifier',
    ]

    _fields_and_field_types = {
        'qualifiersteeringanglefrontaxle': 'uint8',
        'steeringanglefrontaxleerramp': 'float',
        'steeringanglefrontaxleerramp_invalidflag': 'uint8',
        'steeringanglefrontaxle': 'float',
        'steeringanglefrontaxle_invalidflag': 'uint8',
        'steeringanglefrontaxleeventdataqualifier': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.qualifiersteeringanglefrontaxle = kwargs.get('qualifiersteeringanglefrontaxle', int())
        self.steeringanglefrontaxleerramp = kwargs.get('steeringanglefrontaxleerramp', float())
        self.steeringanglefrontaxleerramp_invalidflag = kwargs.get('steeringanglefrontaxleerramp_invalidflag', int())
        self.steeringanglefrontaxle = kwargs.get('steeringanglefrontaxle', float())
        self.steeringanglefrontaxle_invalidflag = kwargs.get('steeringanglefrontaxle_invalidflag', int())
        self.steeringanglefrontaxleeventdataqualifier = kwargs.get('steeringanglefrontaxleeventdataqualifier', int())

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
        if self.qualifiersteeringanglefrontaxle != other.qualifiersteeringanglefrontaxle:
            return False
        if self.steeringanglefrontaxleerramp != other.steeringanglefrontaxleerramp:
            return False
        if self.steeringanglefrontaxleerramp_invalidflag != other.steeringanglefrontaxleerramp_invalidflag:
            return False
        if self.steeringanglefrontaxle != other.steeringanglefrontaxle:
            return False
        if self.steeringanglefrontaxle_invalidflag != other.steeringanglefrontaxle_invalidflag:
            return False
        if self.steeringanglefrontaxleeventdataqualifier != other.steeringanglefrontaxleeventdataqualifier:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def qualifiersteeringanglefrontaxle(self):
        """Message field 'qualifiersteeringanglefrontaxle'."""
        return self._qualifiersteeringanglefrontaxle

    @qualifiersteeringanglefrontaxle.setter
    def qualifiersteeringanglefrontaxle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'qualifiersteeringanglefrontaxle' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'qualifiersteeringanglefrontaxle' field must be an unsigned integer in [0, 255]"
        self._qualifiersteeringanglefrontaxle = value

    @builtins.property
    def steeringanglefrontaxleerramp(self):
        """Message field 'steeringanglefrontaxleerramp'."""
        return self._steeringanglefrontaxleerramp

    @steeringanglefrontaxleerramp.setter
    def steeringanglefrontaxleerramp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steeringanglefrontaxleerramp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steeringanglefrontaxleerramp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steeringanglefrontaxleerramp = value

    @builtins.property
    def steeringanglefrontaxleerramp_invalidflag(self):
        """Message field 'steeringanglefrontaxleerramp_invalidflag'."""
        return self._steeringanglefrontaxleerramp_invalidflag

    @steeringanglefrontaxleerramp_invalidflag.setter
    def steeringanglefrontaxleerramp_invalidflag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steeringanglefrontaxleerramp_invalidflag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'steeringanglefrontaxleerramp_invalidflag' field must be an unsigned integer in [0, 255]"
        self._steeringanglefrontaxleerramp_invalidflag = value

    @builtins.property
    def steeringanglefrontaxle(self):
        """Message field 'steeringanglefrontaxle'."""
        return self._steeringanglefrontaxle

    @steeringanglefrontaxle.setter
    def steeringanglefrontaxle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steeringanglefrontaxle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steeringanglefrontaxle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steeringanglefrontaxle = value

    @builtins.property
    def steeringanglefrontaxle_invalidflag(self):
        """Message field 'steeringanglefrontaxle_invalidflag'."""
        return self._steeringanglefrontaxle_invalidflag

    @steeringanglefrontaxle_invalidflag.setter
    def steeringanglefrontaxle_invalidflag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steeringanglefrontaxle_invalidflag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'steeringanglefrontaxle_invalidflag' field must be an unsigned integer in [0, 255]"
        self._steeringanglefrontaxle_invalidflag = value

    @builtins.property
    def steeringanglefrontaxleeventdataqualifier(self):
        """Message field 'steeringanglefrontaxleeventdataqualifier'."""
        return self._steeringanglefrontaxleeventdataqualifier

    @steeringanglefrontaxleeventdataqualifier.setter
    def steeringanglefrontaxleeventdataqualifier(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steeringanglefrontaxleeventdataqualifier' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'steeringanglefrontaxleeventdataqualifier' field must be an unsigned integer in [0, 255]"
        self._steeringanglefrontaxleeventdataqualifier = value
