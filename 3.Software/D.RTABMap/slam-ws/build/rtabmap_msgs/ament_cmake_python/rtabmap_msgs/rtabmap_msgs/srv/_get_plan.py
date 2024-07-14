# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtabmap_msgs:srv/GetPlan.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetPlan_Request(type):
    """Metaclass of message 'GetPlan_Request'."""

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
                'rtabmap_msgs.srv.GetPlan_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_plan__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_plan__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_plan__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_plan__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_plan__request

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPlan_Request(metaclass=Metaclass_GetPlan_Request):
    """Message class 'GetPlan_Request'."""

    __slots__ = [
        '_goal_node',
        '_goal',
        '_tolerance',
    ]

    _fields_and_field_types = {
        'goal_node': 'int32',
        'goal': 'geometry_msgs/PoseStamped',
        'tolerance': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.goal_node = kwargs.get('goal_node', int())
        from geometry_msgs.msg import PoseStamped
        self.goal = kwargs.get('goal', PoseStamped())
        self.tolerance = kwargs.get('tolerance', float())

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
        if self.goal_node != other.goal_node:
            return False
        if self.goal != other.goal:
            return False
        if self.tolerance != other.tolerance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_node(self):
        """Message field 'goal_node'."""
        return self._goal_node

    @goal_node.setter
    def goal_node(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'goal_node' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'goal_node' field must be an integer in [-2147483648, 2147483647]"
        self._goal_node = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'goal' field must be a sub message of type 'PoseStamped'"
        self._goal = value

    @builtins.property
    def tolerance(self):
        """Message field 'tolerance'."""
        return self._tolerance

    @tolerance.setter
    def tolerance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tolerance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tolerance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tolerance = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetPlan_Response(type):
    """Metaclass of message 'GetPlan_Response'."""

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
                'rtabmap_msgs.srv.GetPlan_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_plan__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_plan__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_plan__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_plan__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_plan__response

            from rtabmap_msgs.msg import Path
            if Path.__class__._TYPE_SUPPORT is None:
                Path.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPlan_Response(metaclass=Metaclass_GetPlan_Response):
    """Message class 'GetPlan_Response'."""

    __slots__ = [
        '_plan',
    ]

    _fields_and_field_types = {
        'plan': 'rtabmap_msgs/Path',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'Path'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from rtabmap_msgs.msg import Path
        self.plan = kwargs.get('plan', Path())

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
        if self.plan != other.plan:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def plan(self):
        """Message field 'plan'."""
        return self._plan

    @plan.setter
    def plan(self, value):
        if __debug__:
            from rtabmap_msgs.msg import Path
            assert \
                isinstance(value, Path), \
                "The 'plan' field must be a sub message of type 'Path'"
        self._plan = value


class Metaclass_GetPlan(type):
    """Metaclass of service 'GetPlan'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rtabmap_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rtabmap_msgs.srv.GetPlan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_plan

            from rtabmap_msgs.srv import _get_plan
            if _get_plan.Metaclass_GetPlan_Request._TYPE_SUPPORT is None:
                _get_plan.Metaclass_GetPlan_Request.__import_type_support__()
            if _get_plan.Metaclass_GetPlan_Response._TYPE_SUPPORT is None:
                _get_plan.Metaclass_GetPlan_Response.__import_type_support__()


class GetPlan(metaclass=Metaclass_GetPlan):
    from rtabmap_msgs.srv._get_plan import GetPlan_Request as Request
    from rtabmap_msgs.srv._get_plan import GetPlan_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
