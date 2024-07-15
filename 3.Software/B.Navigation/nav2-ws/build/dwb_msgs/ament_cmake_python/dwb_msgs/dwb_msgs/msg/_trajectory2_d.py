# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dwb_msgs:msg/Trajectory2D.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Trajectory2D(type):
    """Metaclass of message 'Trajectory2D'."""

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
            module = import_type_support('dwb_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dwb_msgs.msg.Trajectory2D')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trajectory2_d
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trajectory2_d
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trajectory2_d
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trajectory2_d
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trajectory2_d

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose2D
            if Pose2D.__class__._TYPE_SUPPORT is None:
                Pose2D.__class__.__import_type_support__()

            from nav_2d_msgs.msg import Twist2D
            if Twist2D.__class__._TYPE_SUPPORT is None:
                Twist2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Trajectory2D(metaclass=Metaclass_Trajectory2D):
    """Message class 'Trajectory2D'."""

    __slots__ = [
        '_velocity',
        '_time_offsets',
        '_poses',
    ]

    _fields_and_field_types = {
        'velocity': 'nav_2d_msgs/Twist2D',
        'time_offsets': 'sequence<builtin_interfaces/Duration>',
        'poses': 'sequence<geometry_msgs/Pose2D>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nav_2d_msgs', 'msg'], 'Twist2D'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose2D')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from nav_2d_msgs.msg import Twist2D
        self.velocity = kwargs.get('velocity', Twist2D())
        self.time_offsets = kwargs.get('time_offsets', [])
        self.poses = kwargs.get('poses', [])

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
        if self.velocity != other.velocity:
            return False
        if self.time_offsets != other.time_offsets:
            return False
        if self.poses != other.poses:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from nav_2d_msgs.msg import Twist2D
            assert \
                isinstance(value, Twist2D), \
                "The 'velocity' field must be a sub message of type 'Twist2D'"
        self._velocity = value

    @builtins.property
    def time_offsets(self):
        """Message field 'time_offsets'."""
        return self._time_offsets

    @time_offsets.setter
    def time_offsets(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
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
                 all(isinstance(v, Duration) for v in value) and
                 True), \
                "The 'time_offsets' field must be a set or sequence and each value of type 'Duration'"
        self._time_offsets = value

    @builtins.property
    def poses(self):
        """Message field 'poses'."""
        return self._poses

    @poses.setter
    def poses(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose2D
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
                 all(isinstance(v, Pose2D) for v in value) and
                 True), \
                "The 'poses' field must be a set or sequence and each value of type 'Pose2D'"
        self._poses = value
