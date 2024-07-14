# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtabmap_msgs:msg/RGBDImage.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'descriptors'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RGBDImage(type):
    """Metaclass of message 'RGBDImage'."""

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
                'rtabmap_msgs.msg.RGBDImage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rgbd_image
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rgbd_image
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rgbd_image
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rgbd_image
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rgbd_image

            from rtabmap_msgs.msg import GlobalDescriptor
            if GlobalDescriptor.__class__._TYPE_SUPPORT is None:
                GlobalDescriptor.__class__.__import_type_support__()

            from rtabmap_msgs.msg import KeyPoint
            if KeyPoint.__class__._TYPE_SUPPORT is None:
                KeyPoint.__class__.__import_type_support__()

            from rtabmap_msgs.msg import Point3f
            if Point3f.__class__._TYPE_SUPPORT is None:
                Point3f.__class__.__import_type_support__()

            from sensor_msgs.msg import CameraInfo
            if CameraInfo.__class__._TYPE_SUPPORT is None:
                CameraInfo.__class__.__import_type_support__()

            from sensor_msgs.msg import CompressedImage
            if CompressedImage.__class__._TYPE_SUPPORT is None:
                CompressedImage.__class__.__import_type_support__()

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RGBDImage(metaclass=Metaclass_RGBDImage):
    """Message class 'RGBDImage'."""

    __slots__ = [
        '_header',
        '_rgb_camera_info',
        '_depth_camera_info',
        '_rgb',
        '_depth',
        '_rgb_compressed',
        '_depth_compressed',
        '_key_points',
        '_points',
        '_descriptors',
        '_global_descriptor',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'rgb_camera_info': 'sensor_msgs/CameraInfo',
        'depth_camera_info': 'sensor_msgs/CameraInfo',
        'rgb': 'sensor_msgs/Image',
        'depth': 'sensor_msgs/Image',
        'rgb_compressed': 'sensor_msgs/CompressedImage',
        'depth_compressed': 'sensor_msgs/CompressedImage',
        'key_points': 'sequence<rtabmap_msgs/KeyPoint>',
        'points': 'sequence<rtabmap_msgs/Point3f>',
        'descriptors': 'sequence<uint8>',
        'global_descriptor': 'rtabmap_msgs/GlobalDescriptor',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'CameraInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'CameraInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'CompressedImage'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'CompressedImage'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'KeyPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'Point3f')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'GlobalDescriptor'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from sensor_msgs.msg import CameraInfo
        self.rgb_camera_info = kwargs.get('rgb_camera_info', CameraInfo())
        from sensor_msgs.msg import CameraInfo
        self.depth_camera_info = kwargs.get('depth_camera_info', CameraInfo())
        from sensor_msgs.msg import Image
        self.rgb = kwargs.get('rgb', Image())
        from sensor_msgs.msg import Image
        self.depth = kwargs.get('depth', Image())
        from sensor_msgs.msg import CompressedImage
        self.rgb_compressed = kwargs.get('rgb_compressed', CompressedImage())
        from sensor_msgs.msg import CompressedImage
        self.depth_compressed = kwargs.get('depth_compressed', CompressedImage())
        self.key_points = kwargs.get('key_points', [])
        self.points = kwargs.get('points', [])
        self.descriptors = array.array('B', kwargs.get('descriptors', []))
        from rtabmap_msgs.msg import GlobalDescriptor
        self.global_descriptor = kwargs.get('global_descriptor', GlobalDescriptor())

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
        if self.header != other.header:
            return False
        if self.rgb_camera_info != other.rgb_camera_info:
            return False
        if self.depth_camera_info != other.depth_camera_info:
            return False
        if self.rgb != other.rgb:
            return False
        if self.depth != other.depth:
            return False
        if self.rgb_compressed != other.rgb_compressed:
            return False
        if self.depth_compressed != other.depth_compressed:
            return False
        if self.key_points != other.key_points:
            return False
        if self.points != other.points:
            return False
        if self.descriptors != other.descriptors:
            return False
        if self.global_descriptor != other.global_descriptor:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def rgb_camera_info(self):
        """Message field 'rgb_camera_info'."""
        return self._rgb_camera_info

    @rgb_camera_info.setter
    def rgb_camera_info(self, value):
        if __debug__:
            from sensor_msgs.msg import CameraInfo
            assert \
                isinstance(value, CameraInfo), \
                "The 'rgb_camera_info' field must be a sub message of type 'CameraInfo'"
        self._rgb_camera_info = value

    @builtins.property
    def depth_camera_info(self):
        """Message field 'depth_camera_info'."""
        return self._depth_camera_info

    @depth_camera_info.setter
    def depth_camera_info(self, value):
        if __debug__:
            from sensor_msgs.msg import CameraInfo
            assert \
                isinstance(value, CameraInfo), \
                "The 'depth_camera_info' field must be a sub message of type 'CameraInfo'"
        self._depth_camera_info = value

    @builtins.property
    def rgb(self):
        """Message field 'rgb'."""
        return self._rgb

    @rgb.setter
    def rgb(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'rgb' field must be a sub message of type 'Image'"
        self._rgb = value

    @builtins.property
    def depth(self):
        """Message field 'depth'."""
        return self._depth

    @depth.setter
    def depth(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'depth' field must be a sub message of type 'Image'"
        self._depth = value

    @builtins.property
    def rgb_compressed(self):
        """Message field 'rgb_compressed'."""
        return self._rgb_compressed

    @rgb_compressed.setter
    def rgb_compressed(self, value):
        if __debug__:
            from sensor_msgs.msg import CompressedImage
            assert \
                isinstance(value, CompressedImage), \
                "The 'rgb_compressed' field must be a sub message of type 'CompressedImage'"
        self._rgb_compressed = value

    @builtins.property
    def depth_compressed(self):
        """Message field 'depth_compressed'."""
        return self._depth_compressed

    @depth_compressed.setter
    def depth_compressed(self, value):
        if __debug__:
            from sensor_msgs.msg import CompressedImage
            assert \
                isinstance(value, CompressedImage), \
                "The 'depth_compressed' field must be a sub message of type 'CompressedImage'"
        self._depth_compressed = value

    @builtins.property
    def key_points(self):
        """Message field 'key_points'."""
        return self._key_points

    @key_points.setter
    def key_points(self, value):
        if __debug__:
            from rtabmap_msgs.msg import KeyPoint
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
                 all(isinstance(v, KeyPoint) for v in value) and
                 True), \
                "The 'key_points' field must be a set or sequence and each value of type 'KeyPoint'"
        self._key_points = value

    @builtins.property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
        if __debug__:
            from rtabmap_msgs.msg import Point3f
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
                 all(isinstance(v, Point3f) for v in value) and
                 True), \
                "The 'points' field must be a set or sequence and each value of type 'Point3f'"
        self._points = value

    @builtins.property
    def descriptors(self):
        """Message field 'descriptors'."""
        return self._descriptors

    @descriptors.setter
    def descriptors(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'descriptors' array.array() must have the type code of 'B'"
            self._descriptors = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'descriptors' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._descriptors = array.array('B', value)

    @builtins.property
    def global_descriptor(self):
        """Message field 'global_descriptor'."""
        return self._global_descriptor

    @global_descriptor.setter
    def global_descriptor(self, value):
        if __debug__:
            from rtabmap_msgs.msg import GlobalDescriptor
            assert \
                isinstance(value, GlobalDescriptor), \
                "The 'global_descriptor' field must be a sub message of type 'GlobalDescriptor'"
        self._global_descriptor = value
