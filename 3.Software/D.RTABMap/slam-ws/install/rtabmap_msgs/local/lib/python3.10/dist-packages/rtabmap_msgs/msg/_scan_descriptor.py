# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtabmap_msgs:msg/ScanDescriptor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ScanDescriptor(type):
    """Metaclass of message 'ScanDescriptor'."""

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
                'rtabmap_msgs.msg.ScanDescriptor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__scan_descriptor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__scan_descriptor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__scan_descriptor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__scan_descriptor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__scan_descriptor

            from rtabmap_msgs.msg import GlobalDescriptor
            if GlobalDescriptor.__class__._TYPE_SUPPORT is None:
                GlobalDescriptor.__class__.__import_type_support__()

            from sensor_msgs.msg import LaserScan
            if LaserScan.__class__._TYPE_SUPPORT is None:
                LaserScan.__class__.__import_type_support__()

            from sensor_msgs.msg import PointCloud2
            if PointCloud2.__class__._TYPE_SUPPORT is None:
                PointCloud2.__class__.__import_type_support__()

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


class ScanDescriptor(metaclass=Metaclass_ScanDescriptor):
    """Message class 'ScanDescriptor'."""

    __slots__ = [
        '_header',
        '_scan',
        '_scan_cloud',
        '_global_descriptor',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'scan': 'sensor_msgs/LaserScan',
        'scan_cloud': 'sensor_msgs/PointCloud2',
        'global_descriptor': 'rtabmap_msgs/GlobalDescriptor',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'LaserScan'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'GlobalDescriptor'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from sensor_msgs.msg import LaserScan
        self.scan = kwargs.get('scan', LaserScan())
        from sensor_msgs.msg import PointCloud2
        self.scan_cloud = kwargs.get('scan_cloud', PointCloud2())
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
        if self.scan != other.scan:
            return False
        if self.scan_cloud != other.scan_cloud:
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
    def scan(self):
        """Message field 'scan'."""
        return self._scan

    @scan.setter
    def scan(self, value):
        if __debug__:
            from sensor_msgs.msg import LaserScan
            assert \
                isinstance(value, LaserScan), \
                "The 'scan' field must be a sub message of type 'LaserScan'"
        self._scan = value

    @builtins.property
    def scan_cloud(self):
        """Message field 'scan_cloud'."""
        return self._scan_cloud

    @scan_cloud.setter
    def scan_cloud(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'scan_cloud' field must be a sub message of type 'PointCloud2'"
        self._scan_cloud = value

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
