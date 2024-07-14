# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtabmap_msgs:msg/Node.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'word_id_keys'
# Member 'word_id_values'
# Member 'word_descriptors'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Node(type):
    """Metaclass of message 'Node'."""

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
            module = import_type_support('rtabmap_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rtabmap_msgs.msg.Node')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__node
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__node
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__node
            cls._TYPE_SUPPORT = module.type_support_msg__msg__node
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__node

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from rtabmap_msgs.msg import KeyPoint
            if KeyPoint.__class__._TYPE_SUPPORT is None:
                KeyPoint.__class__.__import_type_support__()

            from rtabmap_msgs.msg import Point3f
            if Point3f.__class__._TYPE_SUPPORT is None:
                Point3f.__class__.__import_type_support__()

            from rtabmap_msgs.msg import SensorData
            if SensorData.__class__._TYPE_SUPPORT is None:
                SensorData.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Node(metaclass=Metaclass_Node):
    """Message class 'Node'."""

    __slots__ = [
        '_id',
        '_map_id',
        '_weight',
        '_stamp',
        '_label',
        '_pose',
        '_word_id_keys',
        '_word_id_values',
        '_word_kpts',
        '_word_pts',
        '_word_descriptors',
        '_data',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'map_id': 'int32',
        'weight': 'int32',
        'stamp': 'double',
        'label': 'string',
        'pose': 'geometry_msgs/Pose',
        'word_id_keys': 'sequence<int32>',
        'word_id_values': 'sequence<int32>',
        'word_kpts': 'sequence<rtabmap_msgs/KeyPoint>',
        'word_pts': 'sequence<rtabmap_msgs/Point3f>',
        'word_descriptors': 'sequence<uint8>',
        'data': 'rtabmap_msgs/SensorData',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'KeyPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'Point3f')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'SensorData'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.map_id = kwargs.get('map_id', int())
        self.weight = kwargs.get('weight', int())
        self.stamp = kwargs.get('stamp', float())
        self.label = kwargs.get('label', str())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        self.word_id_keys = array.array('i', kwargs.get('word_id_keys', []))
        self.word_id_values = array.array('i', kwargs.get('word_id_values', []))
        self.word_kpts = kwargs.get('word_kpts', [])
        self.word_pts = kwargs.get('word_pts', [])
        self.word_descriptors = array.array('B', kwargs.get('word_descriptors', []))
        from rtabmap_msgs.msg import SensorData
        self.data = kwargs.get('data', SensorData())

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
        if self.id != other.id:
            return False
        if self.map_id != other.map_id:
            return False
        if self.weight != other.weight:
            return False
        if self.stamp != other.stamp:
            return False
        if self.label != other.label:
            return False
        if self.pose != other.pose:
            return False
        if self.word_id_keys != other.word_id_keys:
            return False
        if self.word_id_values != other.word_id_values:
            return False
        if self.word_kpts != other.word_kpts:
            return False
        if self.word_pts != other.word_pts:
            return False
        if self.word_descriptors != other.word_descriptors:
            return False
        if self.data != other.data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property
    def map_id(self):
        """Message field 'map_id'."""
        return self._map_id

    @map_id.setter
    def map_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'map_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'map_id' field must be an integer in [-2147483648, 2147483647]"
        self._map_id = value

    @builtins.property
    def weight(self):
        """Message field 'weight'."""
        return self._weight

    @weight.setter
    def weight(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'weight' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'weight' field must be an integer in [-2147483648, 2147483647]"
        self._weight = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'stamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._stamp = value

    @builtins.property
    def label(self):
        """Message field 'label'."""
        return self._label

    @label.setter
    def label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'label' field must be of type 'str'"
        self._label = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def word_id_keys(self):
        """Message field 'word_id_keys'."""
        return self._word_id_keys

    @word_id_keys.setter
    def word_id_keys(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'word_id_keys' array.array() must have the type code of 'i'"
            self._word_id_keys = value
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
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'word_id_keys' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._word_id_keys = array.array('i', value)

    @builtins.property
    def word_id_values(self):
        """Message field 'word_id_values'."""
        return self._word_id_values

    @word_id_values.setter
    def word_id_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'word_id_values' array.array() must have the type code of 'i'"
            self._word_id_values = value
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
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'word_id_values' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._word_id_values = array.array('i', value)

    @builtins.property
    def word_kpts(self):
        """Message field 'word_kpts'."""
        return self._word_kpts

    @word_kpts.setter
    def word_kpts(self, value):
        if __debug__:
            from rtabmap_msgs.msg import KeyPoint
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
                 all(isinstance(v, KeyPoint) for v in value) and
                 True), \
                "The 'word_kpts' field must be a set or sequence and each value of type 'KeyPoint'"
        self._word_kpts = value

    @builtins.property
    def word_pts(self):
        """Message field 'word_pts'."""
        return self._word_pts

    @word_pts.setter
    def word_pts(self, value):
        if __debug__:
            from rtabmap_msgs.msg import Point3f
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
                 all(isinstance(v, Point3f) for v in value) and
                 True), \
                "The 'word_pts' field must be a set or sequence and each value of type 'Point3f'"
        self._word_pts = value

    @builtins.property
    def word_descriptors(self):
        """Message field 'word_descriptors'."""
        return self._word_descriptors

    @word_descriptors.setter
    def word_descriptors(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'word_descriptors' array.array() must have the type code of 'B'"
            self._word_descriptors = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'word_descriptors' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._word_descriptors = array.array('B', value)

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if __debug__:
            from rtabmap_msgs.msg import SensorData
            assert \
                isinstance(value, SensorData), \
                "The 'data' field must be a sub message of type 'SensorData'"
        self._data = value
