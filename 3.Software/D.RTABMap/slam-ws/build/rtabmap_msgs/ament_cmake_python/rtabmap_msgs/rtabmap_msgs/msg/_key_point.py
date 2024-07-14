# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtabmap_msgs:msg/KeyPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_KeyPoint(type):
    """Metaclass of message 'KeyPoint'."""

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
                'rtabmap_msgs.msg.KeyPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__key_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__key_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__key_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__key_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__key_point

            from rtabmap_msgs.msg import Point2f
            if Point2f.__class__._TYPE_SUPPORT is None:
                Point2f.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class KeyPoint(metaclass=Metaclass_KeyPoint):
    """Message class 'KeyPoint'."""

    __slots__ = [
        '_pt',
        '_size',
        '_angle',
        '_response',
        '_octave',
        '_class_id',
    ]

    _fields_and_field_types = {
        'pt': 'rtabmap_msgs/Point2f',
        'size': 'float',
        'angle': 'float',
        'response': 'float',
        'octave': 'int32',
        'class_id': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'Point2f'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from rtabmap_msgs.msg import Point2f
        self.pt = kwargs.get('pt', Point2f())
        self.size = kwargs.get('size', float())
        self.angle = kwargs.get('angle', float())
        self.response = kwargs.get('response', float())
        self.octave = kwargs.get('octave', int())
        self.class_id = kwargs.get('class_id', int())

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
        if self.pt != other.pt:
            return False
        if self.size != other.size:
            return False
        if self.angle != other.angle:
            return False
        if self.response != other.response:
            return False
        if self.octave != other.octave:
            return False
        if self.class_id != other.class_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pt(self):
        """Message field 'pt'."""
        return self._pt

    @pt.setter
    def pt(self, value):
        if __debug__:
            from rtabmap_msgs.msg import Point2f
            assert \
                isinstance(value, Point2f), \
                "The 'pt' field must be a sub message of type 'Point2f'"
        self._pt = value

    @builtins.property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'size' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'size' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._size = value

    @builtins.property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'response' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'response' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._response = value

    @builtins.property
    def octave(self):
        """Message field 'octave'."""
        return self._octave

    @octave.setter
    def octave(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'octave' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'octave' field must be an integer in [-2147483648, 2147483647]"
        self._octave = value

    @builtins.property
    def class_id(self):
        """Message field 'class_id'."""
        return self._class_id

    @class_id.setter
    def class_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'class_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'class_id' field must be an integer in [-2147483648, 2147483647]"
        self._class_id = value
