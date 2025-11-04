# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ars548_messages:msg/SensorConfiguration.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorConfiguration(type):
    """Metaclass of message 'SensorConfiguration'."""

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
                'ars548_messages.msg.SensorConfiguration')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_configuration
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_configuration
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_configuration
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_configuration
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_configuration

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorConfiguration(metaclass=Metaclass_SensorConfiguration):
    """Message class 'SensorConfiguration'."""

    __slots__ = [
        '_longitudinal',
        '_lateral',
        '_vertical',
        '_yaw',
        '_pitch',
        '_plugorientation',
        '_length',
        '_width',
        '_height',
        '_wheelbase',
        '_maximumdistance',
        '_frequencslot',
        '_cycletime',
        '_timeslot',
        '_hcc',
        '_powersave_standstill',
        '_sensoripaddress_0',
        '_sensoripaddress_1',
        '_newsensormounting',
        '_newvehicleparameters',
        '_newradarparameters',
        '_newnetworkconfiguration',
    ]

    _fields_and_field_types = {
        'longitudinal': 'float',
        'lateral': 'float',
        'vertical': 'float',
        'yaw': 'float',
        'pitch': 'float',
        'plugorientation': 'uint8',
        'length': 'float',
        'width': 'float',
        'height': 'float',
        'wheelbase': 'float',
        'maximumdistance': 'uint16',
        'frequencslot': 'uint8',
        'cycletime': 'uint8',
        'timeslot': 'uint8',
        'hcc': 'uint8',
        'powersave_standstill': 'uint8',
        'sensoripaddress_0': 'uint32',
        'sensoripaddress_1': 'uint32',
        'newsensormounting': 'uint8',
        'newvehicleparameters': 'uint8',
        'newradarparameters': 'uint8',
        'newnetworkconfiguration': 'uint8',
    }

    SLOT_TYPES = (
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
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.longitudinal = kwargs.get('longitudinal', float())
        self.lateral = kwargs.get('lateral', float())
        self.vertical = kwargs.get('vertical', float())
        self.yaw = kwargs.get('yaw', float())
        self.pitch = kwargs.get('pitch', float())
        self.plugorientation = kwargs.get('plugorientation', int())
        self.length = kwargs.get('length', float())
        self.width = kwargs.get('width', float())
        self.height = kwargs.get('height', float())
        self.wheelbase = kwargs.get('wheelbase', float())
        self.maximumdistance = kwargs.get('maximumdistance', int())
        self.frequencslot = kwargs.get('frequencslot', int())
        self.cycletime = kwargs.get('cycletime', int())
        self.timeslot = kwargs.get('timeslot', int())
        self.hcc = kwargs.get('hcc', int())
        self.powersave_standstill = kwargs.get('powersave_standstill', int())
        self.sensoripaddress_0 = kwargs.get('sensoripaddress_0', int())
        self.sensoripaddress_1 = kwargs.get('sensoripaddress_1', int())
        self.newsensormounting = kwargs.get('newsensormounting', int())
        self.newvehicleparameters = kwargs.get('newvehicleparameters', int())
        self.newradarparameters = kwargs.get('newradarparameters', int())
        self.newnetworkconfiguration = kwargs.get('newnetworkconfiguration', int())

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
        if self.longitudinal != other.longitudinal:
            return False
        if self.lateral != other.lateral:
            return False
        if self.vertical != other.vertical:
            return False
        if self.yaw != other.yaw:
            return False
        if self.pitch != other.pitch:
            return False
        if self.plugorientation != other.plugorientation:
            return False
        if self.length != other.length:
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.wheelbase != other.wheelbase:
            return False
        if self.maximumdistance != other.maximumdistance:
            return False
        if self.frequencslot != other.frequencslot:
            return False
        if self.cycletime != other.cycletime:
            return False
        if self.timeslot != other.timeslot:
            return False
        if self.hcc != other.hcc:
            return False
        if self.powersave_standstill != other.powersave_standstill:
            return False
        if self.sensoripaddress_0 != other.sensoripaddress_0:
            return False
        if self.sensoripaddress_1 != other.sensoripaddress_1:
            return False
        if self.newsensormounting != other.newsensormounting:
            return False
        if self.newvehicleparameters != other.newvehicleparameters:
            return False
        if self.newradarparameters != other.newradarparameters:
            return False
        if self.newnetworkconfiguration != other.newnetworkconfiguration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def longitudinal(self):
        """Message field 'longitudinal'."""
        return self._longitudinal

    @longitudinal.setter
    def longitudinal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitudinal' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'longitudinal' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._longitudinal = value

    @builtins.property
    def lateral(self):
        """Message field 'lateral'."""
        return self._lateral

    @lateral.setter
    def lateral(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lateral' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lateral = value

    @builtins.property
    def vertical(self):
        """Message field 'vertical'."""
        return self._vertical

    @vertical.setter
    def vertical(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vertical' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vertical' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vertical = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch = value

    @builtins.property
    def plugorientation(self):
        """Message field 'plugorientation'."""
        return self._plugorientation

    @plugorientation.setter
    def plugorientation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plugorientation' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'plugorientation' field must be an unsigned integer in [0, 255]"
        self._plugorientation = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'length' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'length' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._length = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'width' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'width' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._width = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'height' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._height = value

    @builtins.property
    def wheelbase(self):
        """Message field 'wheelbase'."""
        return self._wheelbase

    @wheelbase.setter
    def wheelbase(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheelbase' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheelbase' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheelbase = value

    @builtins.property
    def maximumdistance(self):
        """Message field 'maximumdistance'."""
        return self._maximumdistance

    @maximumdistance.setter
    def maximumdistance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maximumdistance' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'maximumdistance' field must be an unsigned integer in [0, 65535]"
        self._maximumdistance = value

    @builtins.property
    def frequencslot(self):
        """Message field 'frequencslot'."""
        return self._frequencslot

    @frequencslot.setter
    def frequencslot(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frequencslot' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'frequencslot' field must be an unsigned integer in [0, 255]"
        self._frequencslot = value

    @builtins.property
    def cycletime(self):
        """Message field 'cycletime'."""
        return self._cycletime

    @cycletime.setter
    def cycletime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cycletime' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cycletime' field must be an unsigned integer in [0, 255]"
        self._cycletime = value

    @builtins.property
    def timeslot(self):
        """Message field 'timeslot'."""
        return self._timeslot

    @timeslot.setter
    def timeslot(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timeslot' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'timeslot' field must be an unsigned integer in [0, 255]"
        self._timeslot = value

    @builtins.property
    def hcc(self):
        """Message field 'hcc'."""
        return self._hcc

    @hcc.setter
    def hcc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hcc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hcc' field must be an unsigned integer in [0, 255]"
        self._hcc = value

    @builtins.property
    def powersave_standstill(self):
        """Message field 'powersave_standstill'."""
        return self._powersave_standstill

    @powersave_standstill.setter
    def powersave_standstill(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'powersave_standstill' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'powersave_standstill' field must be an unsigned integer in [0, 255]"
        self._powersave_standstill = value

    @builtins.property
    def sensoripaddress_0(self):
        """Message field 'sensoripaddress_0'."""
        return self._sensoripaddress_0

    @sensoripaddress_0.setter
    def sensoripaddress_0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensoripaddress_0' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sensoripaddress_0' field must be an unsigned integer in [0, 4294967295]"
        self._sensoripaddress_0 = value

    @builtins.property
    def sensoripaddress_1(self):
        """Message field 'sensoripaddress_1'."""
        return self._sensoripaddress_1

    @sensoripaddress_1.setter
    def sensoripaddress_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensoripaddress_1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sensoripaddress_1' field must be an unsigned integer in [0, 4294967295]"
        self._sensoripaddress_1 = value

    @builtins.property
    def newsensormounting(self):
        """Message field 'newsensormounting'."""
        return self._newsensormounting

    @newsensormounting.setter
    def newsensormounting(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'newsensormounting' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'newsensormounting' field must be an unsigned integer in [0, 255]"
        self._newsensormounting = value

    @builtins.property
    def newvehicleparameters(self):
        """Message field 'newvehicleparameters'."""
        return self._newvehicleparameters

    @newvehicleparameters.setter
    def newvehicleparameters(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'newvehicleparameters' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'newvehicleparameters' field must be an unsigned integer in [0, 255]"
        self._newvehicleparameters = value

    @builtins.property
    def newradarparameters(self):
        """Message field 'newradarparameters'."""
        return self._newradarparameters

    @newradarparameters.setter
    def newradarparameters(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'newradarparameters' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'newradarparameters' field must be an unsigned integer in [0, 255]"
        self._newradarparameters = value

    @builtins.property
    def newnetworkconfiguration(self):
        """Message field 'newnetworkconfiguration'."""
        return self._newnetworkconfiguration

    @newnetworkconfiguration.setter
    def newnetworkconfiguration(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'newnetworkconfiguration' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'newnetworkconfiguration' field must be an unsigned integer in [0, 255]"
        self._newnetworkconfiguration = value
