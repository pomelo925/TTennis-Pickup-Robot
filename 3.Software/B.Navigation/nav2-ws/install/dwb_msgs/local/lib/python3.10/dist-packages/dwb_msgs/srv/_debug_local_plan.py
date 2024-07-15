# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dwb_msgs:srv/DebugLocalPlan.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DebugLocalPlan_Request(type):
    """Metaclass of message 'DebugLocalPlan_Request'."""

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
                'dwb_msgs.srv.DebugLocalPlan_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__debug_local_plan__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__debug_local_plan__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__debug_local_plan__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__debug_local_plan__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__debug_local_plan__request

            from nav_2d_msgs.msg import Path2D
            if Path2D.__class__._TYPE_SUPPORT is None:
                Path2D.__class__.__import_type_support__()

            from nav_2d_msgs.msg import Pose2DStamped
            if Pose2DStamped.__class__._TYPE_SUPPORT is None:
                Pose2DStamped.__class__.__import_type_support__()

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


class DebugLocalPlan_Request(metaclass=Metaclass_DebugLocalPlan_Request):
    """Message class 'DebugLocalPlan_Request'."""

    __slots__ = [
        '_pose',
        '_velocity',
        '_global_plan',
    ]

    _fields_and_field_types = {
        'pose': 'nav_2d_msgs/Pose2DStamped',
        'velocity': 'nav_2d_msgs/Twist2D',
        'global_plan': 'nav_2d_msgs/Path2D',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nav_2d_msgs', 'msg'], 'Pose2DStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_2d_msgs', 'msg'], 'Twist2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_2d_msgs', 'msg'], 'Path2D'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from nav_2d_msgs.msg import Pose2DStamped
        self.pose = kwargs.get('pose', Pose2DStamped())
        from nav_2d_msgs.msg import Twist2D
        self.velocity = kwargs.get('velocity', Twist2D())
        from nav_2d_msgs.msg import Path2D
        self.global_plan = kwargs.get('global_plan', Path2D())

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
        if self.pose != other.pose:
            return False
        if self.velocity != other.velocity:
            return False
        if self.global_plan != other.global_plan:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from nav_2d_msgs.msg import Pose2DStamped
            assert \
                isinstance(value, Pose2DStamped), \
                "The 'pose' field must be a sub message of type 'Pose2DStamped'"
        self._pose = value

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
    def global_plan(self):
        """Message field 'global_plan'."""
        return self._global_plan

    @global_plan.setter
    def global_plan(self, value):
        if __debug__:
            from nav_2d_msgs.msg import Path2D
            assert \
                isinstance(value, Path2D), \
                "The 'global_plan' field must be a sub message of type 'Path2D'"
        self._global_plan = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DebugLocalPlan_Response(type):
    """Metaclass of message 'DebugLocalPlan_Response'."""

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
                'dwb_msgs.srv.DebugLocalPlan_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__debug_local_plan__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__debug_local_plan__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__debug_local_plan__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__debug_local_plan__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__debug_local_plan__response

            from dwb_msgs.msg import LocalPlanEvaluation
            if LocalPlanEvaluation.__class__._TYPE_SUPPORT is None:
                LocalPlanEvaluation.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DebugLocalPlan_Response(metaclass=Metaclass_DebugLocalPlan_Response):
    """Message class 'DebugLocalPlan_Response'."""

    __slots__ = [
        '_results',
    ]

    _fields_and_field_types = {
        'results': 'dwb_msgs/LocalPlanEvaluation',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['dwb_msgs', 'msg'], 'LocalPlanEvaluation'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from dwb_msgs.msg import LocalPlanEvaluation
        self.results = kwargs.get('results', LocalPlanEvaluation())

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
        if self.results != other.results:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def results(self):
        """Message field 'results'."""
        return self._results

    @results.setter
    def results(self, value):
        if __debug__:
            from dwb_msgs.msg import LocalPlanEvaluation
            assert \
                isinstance(value, LocalPlanEvaluation), \
                "The 'results' field must be a sub message of type 'LocalPlanEvaluation'"
        self._results = value


class Metaclass_DebugLocalPlan(type):
    """Metaclass of service 'DebugLocalPlan'."""

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
                'dwb_msgs.srv.DebugLocalPlan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__debug_local_plan

            from dwb_msgs.srv import _debug_local_plan
            if _debug_local_plan.Metaclass_DebugLocalPlan_Request._TYPE_SUPPORT is None:
                _debug_local_plan.Metaclass_DebugLocalPlan_Request.__import_type_support__()
            if _debug_local_plan.Metaclass_DebugLocalPlan_Response._TYPE_SUPPORT is None:
                _debug_local_plan.Metaclass_DebugLocalPlan_Response.__import_type_support__()


class DebugLocalPlan(metaclass=Metaclass_DebugLocalPlan):
    from dwb_msgs.srv._debug_local_plan import DebugLocalPlan_Request as Request
    from dwb_msgs.srv._debug_local_plan import DebugLocalPlan_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
