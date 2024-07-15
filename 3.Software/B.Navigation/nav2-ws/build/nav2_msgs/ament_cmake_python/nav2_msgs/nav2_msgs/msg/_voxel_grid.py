# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nav2_msgs:msg/VoxelGrid.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VoxelGrid(type):
    """Metaclass of message 'VoxelGrid'."""

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
                'nav2_msgs.msg.VoxelGrid')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__voxel_grid
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__voxel_grid
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__voxel_grid
            cls._TYPE_SUPPORT = module.type_support_msg__msg__voxel_grid
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__voxel_grid

            from geometry_msgs.msg import Point32
            if Point32.__class__._TYPE_SUPPORT is None:
                Point32.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VoxelGrid(metaclass=Metaclass_VoxelGrid):
    """Message class 'VoxelGrid'."""

    __slots__ = [
        '_header',
        '_data',
        '_origin',
        '_resolutions',
        '_size_x',
        '_size_y',
        '_size_z',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'data': 'sequence<uint32>',
        'origin': 'geometry_msgs/Point32',
        'resolutions': 'geometry_msgs/Vector3',
        'size_x': 'uint32',
        'size_y': 'uint32',
        'size_z': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.data = array.array('I', kwargs.get('data', []))
        from geometry_msgs.msg import Point32
        self.origin = kwargs.get('origin', Point32())
        from geometry_msgs.msg import Vector3
        self.resolutions = kwargs.get('resolutions', Vector3())
        self.size_x = kwargs.get('size_x', int())
        self.size_y = kwargs.get('size_y', int())
        self.size_z = kwargs.get('size_z', int())

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
        if self.header != other.header:
            return False
        if self.data != other.data:
            return False
        if self.origin != other.origin:
            return False
        if self.resolutions != other.resolutions:
            return False
        if self.size_x != other.size_x:
            return False
        if self.size_y != other.size_y:
            return False
        if self.size_z != other.size_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'data' array.array() must have the type code of 'I'"
            self._data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._data = array.array('I', value)

    @builtins.property
    def origin(self):
        """Message field 'origin'."""
        return self._origin

    @origin.setter
    def origin(self, value):
        if __debug__:
            from geometry_msgs.msg import Point32
            assert \
                isinstance(value, Point32), \
                "The 'origin' field must be a sub message of type 'Point32'"
        self._origin = value

    @builtins.property
    def resolutions(self):
        """Message field 'resolutions'."""
        return self._resolutions

    @resolutions.setter
    def resolutions(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'resolutions' field must be a sub message of type 'Vector3'"
        self._resolutions = value

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
    def size_z(self):
        """Message field 'size_z'."""
        return self._size_z

    @size_z.setter
    def size_z(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'size_z' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'size_z' field must be an unsigned integer in [0, 4294967295]"
        self._size_z = value
