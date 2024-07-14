# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtabmap_msgs:srv/GetMap.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetMap_Request(type):
    """Metaclass of message 'GetMap_Request'."""

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
                'rtabmap_msgs.srv.GetMap_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_map__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_map__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_map__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_map__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_map__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetMap_Request(metaclass=Metaclass_GetMap_Request):
    """Message class 'GetMap_Request'."""

    __slots__ = [
        '_global_map',
        '_optimized',
        '_graph_only',
    ]

    _fields_and_field_types = {
        'global_map': 'boolean',
        'optimized': 'boolean',
        'graph_only': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.global_map = kwargs.get('global_map', bool())
        self.optimized = kwargs.get('optimized', bool())
        self.graph_only = kwargs.get('graph_only', bool())

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
        if self.global_map != other.global_map:
            return False
        if self.optimized != other.optimized:
            return False
        if self.graph_only != other.graph_only:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def global_map(self):
        """Message field 'global_map'."""
        return self._global_map

    @global_map.setter
    def global_map(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'global_map' field must be of type 'bool'"
        self._global_map = value

    @builtins.property
    def optimized(self):
        """Message field 'optimized'."""
        return self._optimized

    @optimized.setter
    def optimized(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'optimized' field must be of type 'bool'"
        self._optimized = value

    @builtins.property
    def graph_only(self):
        """Message field 'graph_only'."""
        return self._graph_only

    @graph_only.setter
    def graph_only(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'graph_only' field must be of type 'bool'"
        self._graph_only = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetMap_Response(type):
    """Metaclass of message 'GetMap_Response'."""

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
                'rtabmap_msgs.srv.GetMap_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_map__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_map__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_map__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_map__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_map__response

            from rtabmap_msgs.msg import MapData
            if MapData.__class__._TYPE_SUPPORT is None:
                MapData.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetMap_Response(metaclass=Metaclass_GetMap_Response):
    """Message class 'GetMap_Response'."""

    __slots__ = [
        '_data',
    ]

    _fields_and_field_types = {
        'data': 'rtabmap_msgs/MapData',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'MapData'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from rtabmap_msgs.msg import MapData
        self.data = kwargs.get('data', MapData())

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
        if self.data != other.data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if __debug__:
            from rtabmap_msgs.msg import MapData
            assert \
                isinstance(value, MapData), \
                "The 'data' field must be a sub message of type 'MapData'"
        self._data = value


class Metaclass_GetMap(type):
    """Metaclass of service 'GetMap'."""

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
                'rtabmap_msgs.srv.GetMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_map

            from rtabmap_msgs.srv import _get_map
            if _get_map.Metaclass_GetMap_Request._TYPE_SUPPORT is None:
                _get_map.Metaclass_GetMap_Request.__import_type_support__()
            if _get_map.Metaclass_GetMap_Response._TYPE_SUPPORT is None:
                _get_map.Metaclass_GetMap_Response.__import_type_support__()


class GetMap(metaclass=Metaclass_GetMap):
    from rtabmap_msgs.srv._get_map import GetMap_Request as Request
    from rtabmap_msgs.srv._get_map import GetMap_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
