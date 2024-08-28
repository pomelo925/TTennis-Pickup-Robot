# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dwb_msgs:msg/TrajectoryScore.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrajectoryScore(type):
    """Metaclass of message 'TrajectoryScore'."""

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
                'dwb_msgs.msg.TrajectoryScore')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trajectory_score
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trajectory_score
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trajectory_score
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trajectory_score
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trajectory_score

            from dwb_msgs.msg import CriticScore
            if CriticScore.__class__._TYPE_SUPPORT is None:
                CriticScore.__class__.__import_type_support__()

            from dwb_msgs.msg import Trajectory2D
            if Trajectory2D.__class__._TYPE_SUPPORT is None:
                Trajectory2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryScore(metaclass=Metaclass_TrajectoryScore):
    """Message class 'TrajectoryScore'."""

    __slots__ = [
        '_traj',
        '_scores',
        '_total',
    ]

    _fields_and_field_types = {
        'traj': 'dwb_msgs/Trajectory2D',
        'scores': 'sequence<dwb_msgs/CriticScore>',
        'total': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['dwb_msgs', 'msg'], 'Trajectory2D'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['dwb_msgs', 'msg'], 'CriticScore')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from dwb_msgs.msg import Trajectory2D
        self.traj = kwargs.get('traj', Trajectory2D())
        self.scores = kwargs.get('scores', [])
        self.total = kwargs.get('total', float())

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
        if self.traj != other.traj:
            return False
        if self.scores != other.scores:
            return False
        if self.total != other.total:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def traj(self):
        """Message field 'traj'."""
        return self._traj

    @traj.setter
    def traj(self, value):
        if __debug__:
            from dwb_msgs.msg import Trajectory2D
            assert \
                isinstance(value, Trajectory2D), \
                "The 'traj' field must be a sub message of type 'Trajectory2D'"
        self._traj = value

    @builtins.property
    def scores(self):
        """Message field 'scores'."""
        return self._scores

    @scores.setter
    def scores(self, value):
        if __debug__:
            from dwb_msgs.msg import CriticScore
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
                 all(isinstance(v, CriticScore) for v in value) and
                 True), \
                "The 'scores' field must be a set or sequence and each value of type 'CriticScore'"
        self._scores = value

    @builtins.property
    def total(self):
        """Message field 'total'."""
        return self._total

    @total.setter
    def total(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total = value
