# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtabmap_msgs:srv/GetNodeData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetNodeData_Request(type):
    """Metaclass of message 'GetNodeData_Request'."""

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
                'rtabmap_msgs.srv.GetNodeData_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_node_data__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_node_data__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_node_data__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_node_data__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_node_data__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetNodeData_Request(metaclass=Metaclass_GetNodeData_Request):
    """Message class 'GetNodeData_Request'."""

    __slots__ = [
        '_ids',
        '_images',
        '_scan',
        '_grid',
        '_user_data',
    ]

    _fields_and_field_types = {
        'ids': 'sequence<int32>',
        'images': 'boolean',
        'scan': 'boolean',
        'grid': 'boolean',
        'user_data': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ids = array.array('i', kwargs.get('ids', []))
        self.images = kwargs.get('images', bool())
        self.scan = kwargs.get('scan', bool())
        self.grid = kwargs.get('grid', bool())
        self.user_data = kwargs.get('user_data', bool())

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
        if self.ids != other.ids:
            return False
        if self.images != other.images:
            return False
        if self.scan != other.scan:
            return False
        if self.grid != other.grid:
            return False
        if self.user_data != other.user_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ids(self):
        """Message field 'ids'."""
        return self._ids

    @ids.setter
    def ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'ids' array.array() must have the type code of 'i'"
            self._ids = value
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
                "The 'ids' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._ids = array.array('i', value)

    @builtins.property
    def images(self):
        """Message field 'images'."""
        return self._images

    @images.setter
    def images(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'images' field must be of type 'bool'"
        self._images = value

    @builtins.property
    def scan(self):
        """Message field 'scan'."""
        return self._scan

    @scan.setter
    def scan(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'scan' field must be of type 'bool'"
        self._scan = value

    @builtins.property
    def grid(self):
        """Message field 'grid'."""
        return self._grid

    @grid.setter
    def grid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'grid' field must be of type 'bool'"
        self._grid = value

    @builtins.property
    def user_data(self):
        """Message field 'user_data'."""
        return self._user_data

    @user_data.setter
    def user_data(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'user_data' field must be of type 'bool'"
        self._user_data = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetNodeData_Response(type):
    """Metaclass of message 'GetNodeData_Response'."""

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
                'rtabmap_msgs.srv.GetNodeData_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_node_data__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_node_data__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_node_data__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_node_data__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_node_data__response

            from rtabmap_msgs.msg import Node
            if Node.__class__._TYPE_SUPPORT is None:
                Node.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetNodeData_Response(metaclass=Metaclass_GetNodeData_Response):
    """Message class 'GetNodeData_Response'."""

    __slots__ = [
        '_data',
    ]

    _fields_and_field_types = {
        'data': 'sequence<rtabmap_msgs/Node>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'Node')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.data = kwargs.get('data', [])

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
            from rtabmap_msgs.msg import Node
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
                 all(isinstance(v, Node) for v in value) and
                 True), \
                "The 'data' field must be a set or sequence and each value of type 'Node'"
        self._data = value


class Metaclass_GetNodeData(type):
    """Metaclass of service 'GetNodeData'."""

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
                'rtabmap_msgs.srv.GetNodeData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_node_data

            from rtabmap_msgs.srv import _get_node_data
            if _get_node_data.Metaclass_GetNodeData_Request._TYPE_SUPPORT is None:
                _get_node_data.Metaclass_GetNodeData_Request.__import_type_support__()
            if _get_node_data.Metaclass_GetNodeData_Response._TYPE_SUPPORT is None:
                _get_node_data.Metaclass_GetNodeData_Response.__import_type_support__()


class GetNodeData(metaclass=Metaclass_GetNodeData):
    from rtabmap_msgs.srv._get_node_data import GetNodeData_Request as Request
    from rtabmap_msgs.srv._get_node_data import GetNodeData_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
