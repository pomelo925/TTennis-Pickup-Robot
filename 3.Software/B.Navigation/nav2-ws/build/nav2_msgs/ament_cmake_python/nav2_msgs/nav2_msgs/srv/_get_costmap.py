# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nav2_msgs:srv/GetCostmap.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetCostmap_Request(type):
    """Metaclass of message 'GetCostmap_Request'."""

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
                'nav2_msgs.srv.GetCostmap_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_costmap__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_costmap__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_costmap__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_costmap__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_costmap__request

            from nav2_msgs.msg import CostmapMetaData
            if CostmapMetaData.__class__._TYPE_SUPPORT is None:
                CostmapMetaData.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetCostmap_Request(metaclass=Metaclass_GetCostmap_Request):
    """Message class 'GetCostmap_Request'."""

    __slots__ = [
        '_specs',
    ]

    _fields_and_field_types = {
        'specs': 'nav2_msgs/CostmapMetaData',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nav2_msgs', 'msg'], 'CostmapMetaData'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from nav2_msgs.msg import CostmapMetaData
        self.specs = kwargs.get('specs', CostmapMetaData())

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
        if self.specs != other.specs:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def specs(self):
        """Message field 'specs'."""
        return self._specs

    @specs.setter
    def specs(self, value):
        if __debug__:
            from nav2_msgs.msg import CostmapMetaData
            assert \
                isinstance(value, CostmapMetaData), \
                "The 'specs' field must be a sub message of type 'CostmapMetaData'"
        self._specs = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetCostmap_Response(type):
    """Metaclass of message 'GetCostmap_Response'."""

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
                'nav2_msgs.srv.GetCostmap_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_costmap__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_costmap__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_costmap__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_costmap__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_costmap__response

            from nav2_msgs.msg import Costmap
            if Costmap.__class__._TYPE_SUPPORT is None:
                Costmap.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetCostmap_Response(metaclass=Metaclass_GetCostmap_Response):
    """Message class 'GetCostmap_Response'."""

    __slots__ = [
        '_map',
    ]

    _fields_and_field_types = {
        'map': 'nav2_msgs/Costmap',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nav2_msgs', 'msg'], 'Costmap'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from nav2_msgs.msg import Costmap
        self.map = kwargs.get('map', Costmap())

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
        if self.map != other.map:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def map(self):  # noqa: A003
        """Message field 'map'."""
        return self._map

    @map.setter  # noqa: A003
    def map(self, value):  # noqa: A003
        if __debug__:
            from nav2_msgs.msg import Costmap
            assert \
                isinstance(value, Costmap), \
                "The 'map' field must be a sub message of type 'Costmap'"
        self._map = value


class Metaclass_GetCostmap(type):
    """Metaclass of service 'GetCostmap'."""

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
                'nav2_msgs.srv.GetCostmap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_costmap

            from nav2_msgs.srv import _get_costmap
            if _get_costmap.Metaclass_GetCostmap_Request._TYPE_SUPPORT is None:
                _get_costmap.Metaclass_GetCostmap_Request.__import_type_support__()
            if _get_costmap.Metaclass_GetCostmap_Response._TYPE_SUPPORT is None:
                _get_costmap.Metaclass_GetCostmap_Response.__import_type_support__()


class GetCostmap(metaclass=Metaclass_GetCostmap):
    from nav2_msgs.srv._get_costmap import GetCostmap_Request as Request
    from nav2_msgs.srv._get_costmap import GetCostmap_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
