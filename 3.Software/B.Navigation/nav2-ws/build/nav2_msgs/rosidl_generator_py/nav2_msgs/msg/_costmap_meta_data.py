# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nav2_msgs:msg/CostmapMetaData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CostmapMetaData(type):
    """Metaclass of message 'CostmapMetaData'."""

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
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.msg.CostmapMetaData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__costmap_meta_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__costmap_meta_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__costmap_meta_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__costmap_meta_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__costmap_meta_data

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CostmapMetaData(metaclass=Metaclass_CostmapMetaData):
    """Message class 'CostmapMetaData'."""

    __slots__ = [
        '_map_load_time',
        '_update_time',
        '_layer',
        '_resolution',
        '_size_x',
        '_size_y',
        '_origin',
    ]

    _fields_and_field_types = {
        'map_load_time': 'builtin_interfaces/Time',
        'update_time': 'builtin_interfaces/Time',
        'layer': 'string',
        'resolution': 'float',
        'size_x': 'uint32',
        'size_y': 'uint32',
        'origin': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.map_load_time = kwargs.get('map_load_time', Time())
        from builtin_interfaces.msg import Time
        self.update_time = kwargs.get('update_time', Time())
        self.layer = kwargs.get('layer', str())
        self.resolution = kwargs.get('resolution', float())
        self.size_x = kwargs.get('size_x', int())
        self.size_y = kwargs.get('size_y', int())
        from geometry_msgs.msg import Pose
        self.origin = kwargs.get('origin', Pose())

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
        if self.map_load_time != other.map_load_time:
            return False
        if self.update_time != other.update_time:
            return False
        if self.layer != other.layer:
            return False
        if self.resolution != other.resolution:
            return False
        if self.size_x != other.size_x:
            return False
        if self.size_y != other.size_y:
            return False
        if self.origin != other.origin:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def map_load_time(self):
        """Message field 'map_load_time'."""
        return self._map_load_time

    @map_load_time.setter
    def map_load_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'map_load_time' field must be a sub message of type 'Time'"
        self._map_load_time = value

    @builtins.property
    def update_time(self):
        """Message field 'update_time'."""
        return self._update_time

    @update_time.setter
    def update_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'update_time' field must be a sub message of type 'Time'"
        self._update_time = value

    @builtins.property
    def layer(self):
        """Message field 'layer'."""
        return self._layer

    @layer.setter
    def layer(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'layer' field must be of type 'str'"
        self._layer = value

    @builtins.property
    def resolution(self):
        """Message field 'resolution'."""
        return self._resolution

    @resolution.setter
    def resolution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'resolution' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'resolution' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._resolution = value

    @builtins.property
    def size_x(self):
        """Message field 'size_x'."""
        return self._size_x

    @size_x.setter
    def size_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'size_x' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'size_x' field must be an unsigned integer in [0, 4294967295]"
        self._size_x = value

    @builtins.property
    def size_y(self):
        """Message field 'size_y'."""
        return self._size_y

    @size_y.setter
    def size_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'size_y' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'size_y' field must be an unsigned integer in [0, 4294967295]"
        self._size_y = value

    @builtins.property
    def origin(self):
        """Message field 'origin'."""
        return self._origin

    @origin.setter
    def origin(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'origin' field must be a sub message of type 'Pose'"
        self._origin = value
