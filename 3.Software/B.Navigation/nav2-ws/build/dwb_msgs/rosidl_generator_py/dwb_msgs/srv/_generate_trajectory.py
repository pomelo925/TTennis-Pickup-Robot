# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dwb_msgs:srv/GenerateTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GenerateTrajectory_Request(type):
    """Metaclass of message 'GenerateTrajectory_Request'."""

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
                'dwb_msgs.srv.GenerateTrajectory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__generate_trajectory__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__generate_trajectory__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__generate_trajectory__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__generate_trajectory__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__generate_trajectory__request

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


class GenerateTrajectory_Request(metaclass=Metaclass_GenerateTrajectory_Request):
    """Message class 'GenerateTrajectory_Request'."""

    __slots__ = [
        '_start_pose',
        '_start_vel',
        '_cmd_vel',
    ]

    _fields_and_field_types = {
        'start_pose': 'geometry_msgs/Pose2D',
        'start_vel': 'nav_2d_msgs/Twist2D',
        'cmd_vel': 'nav_2d_msgs/Twist2D',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_2d_msgs', 'msg'], 'Twist2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_2d_msgs', 'msg'], 'Twist2D'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose2D
        self.start_pose = kwargs.get('start_pose', Pose2D())
        from nav_2d_msgs.msg import Twist2D
        self.start_vel = kwargs.get('start_vel', Twist2D())
        from nav_2d_msgs.msg import Twist2D
        self.cmd_vel = kwargs.get('cmd_vel', Twist2D())

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
        if self.start_pose != other.start_pose:
            return False
        if self.start_vel != other.start_vel:
            return False
        if self.cmd_vel != other.cmd_vel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def start_pose(self):
        """Message field 'start_pose'."""
        return self._start_pose

    @start_pose.setter
    def start_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose2D
            assert \
                isinstance(value, Pose2D), \
                "The 'start_pose' field must be a sub message of type 'Pose2D'"
        self._start_pose = value

    @builtins.property
    def start_vel(self):
        """Message field 'start_vel'."""
        return self._start_vel

    @start_vel.setter
    def start_vel(self, value):
        if __debug__:
            from nav_2d_msgs.msg import Twist2D
            assert \
                isinstance(value, Twist2D), \
                "The 'start_vel' field must be a sub message of type 'Twist2D'"
        self._start_vel = value

    @builtins.property
    def cmd_vel(self):
        """Message field 'cmd_vel'."""
        return self._cmd_vel

    @cmd_vel.setter
    def cmd_vel(self, value):
        if __debug__:
            from nav_2d_msgs.msg import Twist2D
            assert \
                isinstance(value, Twist2D), \
                "The 'cmd_vel' field must be a sub message of type 'Twist2D'"
        self._cmd_vel = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GenerateTrajectory_Response(type):
    """Metaclass of message 'GenerateTrajectory_Response'."""

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
                'dwb_msgs.srv.GenerateTrajectory_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__generate_trajectory__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__generate_trajectory__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__generate_trajectory__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__generate_trajectory__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__generate_trajectory__response

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


class GenerateTrajectory_Response(metaclass=Metaclass_GenerateTrajectory_Response):
    """Message class 'GenerateTrajectory_Response'."""

    __slots__ = [
        '_traj',
    ]

    _fields_and_field_types = {
        'traj': 'dwb_msgs/Trajectory2D',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['dwb_msgs', 'msg'], 'Trajectory2D'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from dwb_msgs.msg import Trajectory2D
        self.traj = kwargs.get('traj', Trajectory2D())

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


class Metaclass_GenerateTrajectory(type):
    """Metaclass of service 'GenerateTrajectory'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dwb_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dwb_msgs.srv.GenerateTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__generate_trajectory

            from dwb_msgs.srv import _generate_trajectory
            if _generate_trajectory.Metaclass_GenerateTrajectory_Request._TYPE_SUPPORT is None:
                _generate_trajectory.Metaclass_GenerateTrajectory_Request.__import_type_support__()
            if _generate_trajectory.Metaclass_GenerateTrajectory_Response._TYPE_SUPPORT is None:
                _generate_trajectory.Metaclass_GenerateTrajectory_Response.__import_type_support__()


class GenerateTrajectory(metaclass=Metaclass_GenerateTrajectory):
    from dwb_msgs.srv._generate_trajectory import GenerateTrajectory_Request as Request
    from dwb_msgs.srv._generate_trajectory import GenerateTrajectory_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
