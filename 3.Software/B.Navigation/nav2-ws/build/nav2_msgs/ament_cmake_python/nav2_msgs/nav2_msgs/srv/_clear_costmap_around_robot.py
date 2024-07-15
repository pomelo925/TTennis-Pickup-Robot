# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nav2_msgs:srv/ClearCostmapAroundRobot.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ClearCostmapAroundRobot_Request(type):
    """Metaclass of message 'ClearCostmapAroundRobot_Request'."""

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
                'nav2_msgs.srv.ClearCostmapAroundRobot_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__clear_costmap_around_robot__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__clear_costmap_around_robot__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__clear_costmap_around_robot__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__clear_costmap_around_robot__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__clear_costmap_around_robot__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ClearCostmapAroundRobot_Request(metaclass=Metaclass_ClearCostmapAroundRobot_Request):
    """Message class 'ClearCostmapAroundRobot_Request'."""

    __slots__ = [
        '_reset_distance',
    ]

    _fields_and_field_types = {
        'reset_distance': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.reset_distance = kwargs.get('reset_distance', float())

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
        if self.reset_distance != other.reset_distance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def reset_distance(self):
        """Message field 'reset_distance'."""
        return self._reset_distance

    @reset_distance.setter
    def reset_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reset_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'reset_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._reset_distance = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ClearCostmapAroundRobot_Response(type):
    """Metaclass of message 'ClearCostmapAroundRobot_Response'."""

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
                'nav2_msgs.srv.ClearCostmapAroundRobot_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__clear_costmap_around_robot__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__clear_costmap_around_robot__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__clear_costmap_around_robot__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__clear_costmap_around_robot__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__clear_costmap_around_robot__response

            from std_msgs.msg import Empty
            if Empty.__class__._TYPE_SUPPORT is None:
                Empty.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ClearCostmapAroundRobot_Response(metaclass=Metaclass_ClearCostmapAroundRobot_Response):
    """Message class 'ClearCostmapAroundRobot_Response'."""

    __slots__ = [
        '_response',
    ]

    _fields_and_field_types = {
        'response': 'std_msgs/Empty',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Empty'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Empty
        self.response = kwargs.get('response', Empty())

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
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if __debug__:
            from std_msgs.msg import Empty
            assert \
                isinstance(value, Empty), \
                "The 'response' field must be a sub message of type 'Empty'"
        self._response = value


class Metaclass_ClearCostmapAroundRobot(type):
    """Metaclass of service 'ClearCostmapAroundRobot'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.srv.ClearCostmapAroundRobot')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__clear_costmap_around_robot

            from nav2_msgs.srv import _clear_costmap_around_robot
            if _clear_costmap_around_robot.Metaclass_ClearCostmapAroundRobot_Request._TYPE_SUPPORT is None:
                _clear_costmap_around_robot.Metaclass_ClearCostmapAroundRobot_Request.__import_type_support__()
            if _clear_costmap_around_robot.Metaclass_ClearCostmapAroundRobot_Response._TYPE_SUPPORT is None:
                _clear_costmap_around_robot.Metaclass_ClearCostmapAroundRobot_Response.__import_type_support__()


class ClearCostmapAroundRobot(metaclass=Metaclass_ClearCostmapAroundRobot):
    from nav2_msgs.srv._clear_costmap_around_robot import ClearCostmapAroundRobot_Request as Request
    from nav2_msgs.srv._clear_costmap_around_robot import ClearCostmapAroundRobot_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
