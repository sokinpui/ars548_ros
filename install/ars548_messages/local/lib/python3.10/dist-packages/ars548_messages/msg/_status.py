# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ars548_messages:msg/Status.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Status(type):
    """Metaclass of message 'Status'."""

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
                'ars548_messages.msg.Status')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Status(metaclass=Metaclass_Status):
    """Message class 'Status'."""

    __slots__ = [
        '_timestamp_nanoseconds',
        '_timestamp_seconds',
        '_timestamp_syncstatus',
        '_swversion_major',
        '_swversion_minor',
        '_swversion_patch',
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
        '_frequencyslot',
        '_cycletime',
        '_timeslot',
        '_hcc',
        '_powersave_standstill',
        '_sensoripaddress_0',
        '_sensoripaddress_1',
        '_configurationcounter',
        '_status_longitudinalvelocity',
        '_status_longitudinalacceleration',
        '_status_lateralacceleration',
        '_status_yawrate',
        '_status_steeringangle',
        '_status_drivingdirection',
        '_status_characteristicspeed',
        '_status_radarstatus',
        '_status_voltagestatus',
        '_status_temperaturestatus',
        '_status_blockagestatus',
    ]

    _fields_and_field_types = {
        'timestamp_nanoseconds': 'uint32',
        'timestamp_seconds': 'uint32',
        'timestamp_syncstatus': 'uint8',
        'swversion_major': 'uint8',
        'swversion_minor': 'uint8',
        'swversion_patch': 'uint8',
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
        'frequencyslot': 'uint8',
        'cycletime': 'uint8',
        'timeslot': 'uint8',
        'hcc': 'uint8',
        'powersave_standstill': 'uint8',
        'sensoripaddress_0': 'uint32',
        'sensoripaddress_1': 'uint32',
        'configurationcounter': 'uint8',
        'status_longitudinalvelocity': 'uint8',
        'status_longitudinalacceleration': 'uint8',
        'status_lateralacceleration': 'uint8',
        'status_yawrate': 'uint8',
        'status_steeringangle': 'uint8',
        'status_drivingdirection': 'uint8',
        'status_characteristicspeed': 'uint8',
        'status_radarstatus': 'uint8',
        'status_voltagestatus': 'uint8',
        'status_temperaturestatus': 'uint8',
        'status_blockagestatus': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp_nanoseconds = kwargs.get('timestamp_nanoseconds', int())
        self.timestamp_seconds = kwargs.get('timestamp_seconds', int())
        self.timestamp_syncstatus = kwargs.get('timestamp_syncstatus', int())
        self.swversion_major = kwargs.get('swversion_major', int())
        self.swversion_minor = kwargs.get('swversion_minor', int())
        self.swversion_patch = kwargs.get('swversion_patch', int())
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
        self.frequencyslot = kwargs.get('frequencyslot', int())
        self.cycletime = kwargs.get('cycletime', int())
        self.timeslot = kwargs.get('timeslot', int())
        self.hcc = kwargs.get('hcc', int())
        self.powersave_standstill = kwargs.get('powersave_standstill', int())
        self.sensoripaddress_0 = kwargs.get('sensoripaddress_0', int())
        self.sensoripaddress_1 = kwargs.get('sensoripaddress_1', int())
        self.configurationcounter = kwargs.get('configurationcounter', int())
        self.status_longitudinalvelocity = kwargs.get('status_longitudinalvelocity', int())
        self.status_longitudinalacceleration = kwargs.get('status_longitudinalacceleration', int())
        self.status_lateralacceleration = kwargs.get('status_lateralacceleration', int())
        self.status_yawrate = kwargs.get('status_yawrate', int())
        self.status_steeringangle = kwargs.get('status_steeringangle', int())
        self.status_drivingdirection = kwargs.get('status_drivingdirection', int())
        self.status_characteristicspeed = kwargs.get('status_characteristicspeed', int())
        self.status_radarstatus = kwargs.get('status_radarstatus', int())
        self.status_voltagestatus = kwargs.get('status_voltagestatus', int())
        self.status_temperaturestatus = kwargs.get('status_temperaturestatus', int())
        self.status_blockagestatus = kwargs.get('status_blockagestatus', int())

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
        if self.timestamp_nanoseconds != other.timestamp_nanoseconds:
            return False
        if self.timestamp_seconds != other.timestamp_seconds:
            return False
        if self.timestamp_syncstatus != other.timestamp_syncstatus:
            return False
        if self.swversion_major != other.swversion_major:
            return False
        if self.swversion_minor != other.swversion_minor:
            return False
        if self.swversion_patch != other.swversion_patch:
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
        if self.frequencyslot != other.frequencyslot:
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
        if self.configurationcounter != other.configurationcounter:
            return False
        if self.status_longitudinalvelocity != other.status_longitudinalvelocity:
            return False
        if self.status_longitudinalacceleration != other.status_longitudinalacceleration:
            return False
        if self.status_lateralacceleration != other.status_lateralacceleration:
            return False
        if self.status_yawrate != other.status_yawrate:
            return False
        if self.status_steeringangle != other.status_steeringangle:
            return False
        if self.status_drivingdirection != other.status_drivingdirection:
            return False
        if self.status_characteristicspeed != other.status_characteristicspeed:
            return False
        if self.status_radarstatus != other.status_radarstatus:
            return False
        if self.status_voltagestatus != other.status_voltagestatus:
            return False
        if self.status_temperaturestatus != other.status_temperaturestatus:
            return False
        if self.status_blockagestatus != other.status_blockagestatus:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp_nanoseconds(self):
        """Message field 'timestamp_nanoseconds'."""
        return self._timestamp_nanoseconds

    @timestamp_nanoseconds.setter
    def timestamp_nanoseconds(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_nanoseconds' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'timestamp_nanoseconds' field must be an unsigned integer in [0, 4294967295]"
        self._timestamp_nanoseconds = value

    @builtins.property
    def timestamp_seconds(self):
        """Message field 'timestamp_seconds'."""
        return self._timestamp_seconds

    @timestamp_seconds.setter
    def timestamp_seconds(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_seconds' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'timestamp_seconds' field must be an unsigned integer in [0, 4294967295]"
        self._timestamp_seconds = value

    @builtins.property
    def timestamp_syncstatus(self):
        """Message field 'timestamp_syncstatus'."""
        return self._timestamp_syncstatus

    @timestamp_syncstatus.setter
    def timestamp_syncstatus(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_syncstatus' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'timestamp_syncstatus' field must be an unsigned integer in [0, 255]"
        self._timestamp_syncstatus = value

    @builtins.property
    def swversion_major(self):
        """Message field 'swversion_major'."""
        return self._swversion_major

    @swversion_major.setter
    def swversion_major(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'swversion_major' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'swversion_major' field must be an unsigned integer in [0, 255]"
        self._swversion_major = value

    @builtins.property
    def swversion_minor(self):
        """Message field 'swversion_minor'."""
        return self._swversion_minor

    @swversion_minor.setter
    def swversion_minor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'swversion_minor' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'swversion_minor' field must be an unsigned integer in [0, 255]"
        self._swversion_minor = value

    @builtins.property
    def swversion_patch(self):
        """Message field 'swversion_patch'."""
        return self._swversion_patch

    @swversion_patch.setter
    def swversion_patch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'swversion_patch' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'swversion_patch' field must be an unsigned integer in [0, 255]"
        self._swversion_patch = value

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
    def frequencyslot(self):
        """Message field 'frequencyslot'."""
        return self._frequencyslot

    @frequencyslot.setter
    def frequencyslot(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frequencyslot' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'frequencyslot' field must be an unsigned integer in [0, 255]"
        self._frequencyslot = value

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
    def configurationcounter(self):
        """Message field 'configurationcounter'."""
        return self._configurationcounter

    @configurationcounter.setter
    def configurationcounter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'configurationcounter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'configurationcounter' field must be an unsigned integer in [0, 255]"
        self._configurationcounter = value

    @builtins.property
    def status_longitudinalvelocity(self):
        """Message field 'status_longitudinalvelocity'."""
        return self._status_longitudinalvelocity

    @status_longitudinalvelocity.setter
    def status_longitudinalvelocity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_longitudinalvelocity' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_longitudinalvelocity' field must be an unsigned integer in [0, 255]"
        self._status_longitudinalvelocity = value

    @builtins.property
    def status_longitudinalacceleration(self):
        """Message field 'status_longitudinalacceleration'."""
        return self._status_longitudinalacceleration

    @status_longitudinalacceleration.setter
    def status_longitudinalacceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_longitudinalacceleration' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_longitudinalacceleration' field must be an unsigned integer in [0, 255]"
        self._status_longitudinalacceleration = value

    @builtins.property
    def status_lateralacceleration(self):
        """Message field 'status_lateralacceleration'."""
        return self._status_lateralacceleration

    @status_lateralacceleration.setter
    def status_lateralacceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_lateralacceleration' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_lateralacceleration' field must be an unsigned integer in [0, 255]"
        self._status_lateralacceleration = value

    @builtins.property
    def status_yawrate(self):
        """Message field 'status_yawrate'."""
        return self._status_yawrate

    @status_yawrate.setter
    def status_yawrate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_yawrate' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_yawrate' field must be an unsigned integer in [0, 255]"
        self._status_yawrate = value

    @builtins.property
    def status_steeringangle(self):
        """Message field 'status_steeringangle'."""
        return self._status_steeringangle

    @status_steeringangle.setter
    def status_steeringangle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_steeringangle' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_steeringangle' field must be an unsigned integer in [0, 255]"
        self._status_steeringangle = value

    @builtins.property
    def status_drivingdirection(self):
        """Message field 'status_drivingdirection'."""
        return self._status_drivingdirection

    @status_drivingdirection.setter
    def status_drivingdirection(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_drivingdirection' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_drivingdirection' field must be an unsigned integer in [0, 255]"
        self._status_drivingdirection = value

    @builtins.property
    def status_characteristicspeed(self):
        """Message field 'status_characteristicspeed'."""
        return self._status_characteristicspeed

    @status_characteristicspeed.setter
    def status_characteristicspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_characteristicspeed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_characteristicspeed' field must be an unsigned integer in [0, 255]"
        self._status_characteristicspeed = value

    @builtins.property
    def status_radarstatus(self):
        """Message field 'status_radarstatus'."""
        return self._status_radarstatus

    @status_radarstatus.setter
    def status_radarstatus(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_radarstatus' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_radarstatus' field must be an unsigned integer in [0, 255]"
        self._status_radarstatus = value

    @builtins.property
    def status_voltagestatus(self):
        """Message field 'status_voltagestatus'."""
        return self._status_voltagestatus

    @status_voltagestatus.setter
    def status_voltagestatus(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_voltagestatus' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_voltagestatus' field must be an unsigned integer in [0, 255]"
        self._status_voltagestatus = value

    @builtins.property
    def status_temperaturestatus(self):
        """Message field 'status_temperaturestatus'."""
        return self._status_temperaturestatus

    @status_temperaturestatus.setter
    def status_temperaturestatus(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_temperaturestatus' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_temperaturestatus' field must be an unsigned integer in [0, 255]"
        self._status_temperaturestatus = value

    @builtins.property
    def status_blockagestatus(self):
        """Message field 'status_blockagestatus'."""
        return self._status_blockagestatus

    @status_blockagestatus.setter
    def status_blockagestatus(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_blockagestatus' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_blockagestatus' field must be an unsigned integer in [0, 255]"
        self._status_blockagestatus = value
