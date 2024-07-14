# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtabmap_msgs:msg/SensorData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'left_compressed'
# Member 'right_compressed'
# Member 'laser_scan_compressed'
# Member 'user_data'
# Member 'grid_ground'
# Member 'grid_obstacles'
# Member 'grid_empty_cells'
# Member 'descriptors'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorData(type):
    """Metaclass of message 'SensorData'."""

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
                'rtabmap_msgs.msg.SensorData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_data

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Transform
            if Transform.__class__._TYPE_SUPPORT is None:
                Transform.__class__.__import_type_support__()

            from rtabmap_msgs.msg import EnvSensor
            if EnvSensor.__class__._TYPE_SUPPORT is None:
                EnvSensor.__class__.__import_type_support__()

            from rtabmap_msgs.msg import GPS
            if GPS.__class__._TYPE_SUPPORT is None:
                GPS.__class__.__import_type_support__()

            from rtabmap_msgs.msg import GlobalDescriptor
            if GlobalDescriptor.__class__._TYPE_SUPPORT is None:
                GlobalDescriptor.__class__.__import_type_support__()

            from rtabmap_msgs.msg import KeyPoint
            if KeyPoint.__class__._TYPE_SUPPORT is None:
                KeyPoint.__class__.__import_type_support__()

            from rtabmap_msgs.msg import LandmarkDetection
            if LandmarkDetection.__class__._TYPE_SUPPORT is None:
                LandmarkDetection.__class__.__import_type_support__()

            from rtabmap_msgs.msg import Point3f
            if Point3f.__class__._TYPE_SUPPORT is None:
                Point3f.__class__.__import_type_support__()

            from sensor_msgs.msg import CameraInfo
            if CameraInfo.__class__._TYPE_SUPPORT is None:
                CameraInfo.__class__.__import_type_support__()

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

            from sensor_msgs.msg import Imu
            if Imu.__class__._TYPE_SUPPORT is None:
                Imu.__class__.__import_type_support__()

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


class SensorData(metaclass=Metaclass_SensorData):
    """Message class 'SensorData'."""

    __slots__ = [
        '_header',
        '_left',
        '_right',
        '_left_compressed',
        '_right_compressed',
        '_left_camera_info',
        '_right_camera_info',
        '_local_transform',
        '_laser_scan',
        '_laser_scan_compressed',
        '_laser_scan_max_pts',
        '_laser_scan_max_range',
        '_laser_scan_format',
        '_laser_scan_local_transform',
        '_user_data',
        '_grid_ground',
        '_grid_obstacles',
        '_grid_empty_cells',
        '_grid_cell_size',
        '_grid_view_point',
        '_key_points',
        '_points',
        '_descriptors',
        '_global_descriptors',
        '_env_sensors',
        '_imu',
        '_imu_local_transform',
        '_landmarks',
        '_ground_truth_pose',
        '_gps',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'left': 'sensor_msgs/Image',
        'right': 'sensor_msgs/Image',
        'left_compressed': 'sequence<uint8>',
        'right_compressed': 'sequence<uint8>',
        'left_camera_info': 'sequence<sensor_msgs/CameraInfo>',
        'right_camera_info': 'sequence<sensor_msgs/CameraInfo>',
        'local_transform': 'sequence<geometry_msgs/Transform>',
        'laser_scan': 'sensor_msgs/PointCloud2',
        'laser_scan_compressed': 'sequence<uint8>',
        'laser_scan_max_pts': 'int32',
        'laser_scan_max_range': 'float',
        'laser_scan_format': 'int32',
        'laser_scan_local_transform': 'geometry_msgs/Transform',
        'user_data': 'sequence<uint8>',
        'grid_ground': 'sequence<uint8>',
        'grid_obstacles': 'sequence<uint8>',
        'grid_empty_cells': 'sequence<uint8>',
        'grid_cell_size': 'float',
        'grid_view_point': 'rtabmap_msgs/Point3f',
        'key_points': 'sequence<rtabmap_msgs/KeyPoint>',
        'points': 'sequence<rtabmap_msgs/Point3f>',
        'descriptors': 'sequence<uint8>',
        'global_descriptors': 'sequence<rtabmap_msgs/GlobalDescriptor>',
        'env_sensors': 'sequence<rtabmap_msgs/EnvSensor>',
        'imu': 'sensor_msgs/Imu',
        'imu_local_transform': 'geometry_msgs/Transform',
        'landmarks': 'sequence<rtabmap_msgs/LandmarkDetection>',
        'ground_truth_pose': 'geometry_msgs/Pose',
        'gps': 'rtabmap_msgs/GPS',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'CameraInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'CameraInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Transform')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Transform'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'Point3f'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'KeyPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'Point3f')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'GlobalDescriptor')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'EnvSensor')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Imu'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Transform'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'LandmarkDetection')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'msg'], 'GPS'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from sensor_msgs.msg import Image
        self.left = kwargs.get('left', Image())
        from sensor_msgs.msg import Image
        self.right = kwargs.get('right', Image())
        self.left_compressed = array.array('B', kwargs.get('left_compressed', []))
        self.right_compressed = array.array('B', kwargs.get('right_compressed', []))
        self.left_camera_info = kwargs.get('left_camera_info', [])
        self.right_camera_info = kwargs.get('right_camera_info', [])
        self.local_transform = kwargs.get('local_transform', [])
        from sensor_msgs.msg import PointCloud2
        self.laser_scan = kwargs.get('laser_scan', PointCloud2())
        self.laser_scan_compressed = array.array('B', kwargs.get('laser_scan_compressed', []))
        self.laser_scan_max_pts = kwargs.get('laser_scan_max_pts', int())
        self.laser_scan_max_range = kwargs.get('laser_scan_max_range', float())
        self.laser_scan_format = kwargs.get('laser_scan_format', int())
        from geometry_msgs.msg import Transform
        self.laser_scan_local_transform = kwargs.get('laser_scan_local_transform', Transform())
        self.user_data = array.array('B', kwargs.get('user_data', []))
        self.grid_ground = array.array('B', kwargs.get('grid_ground', []))
        self.grid_obstacles = array.array('B', kwargs.get('grid_obstacles', []))
        self.grid_empty_cells = array.array('B', kwargs.get('grid_empty_cells', []))
        self.grid_cell_size = kwargs.get('grid_cell_size', float())
        from rtabmap_msgs.msg import Point3f
        self.grid_view_point = kwargs.get('grid_view_point', Point3f())
        self.key_points = kwargs.get('key_points', [])
        self.points = kwargs.get('points', [])
        self.descriptors = array.array('B', kwargs.get('descriptors', []))
        self.global_descriptors = kwargs.get('global_descriptors', [])
        self.env_sensors = kwargs.get('env_sensors', [])
        from sensor_msgs.msg import Imu
        self.imu = kwargs.get('imu', Imu())
        from geometry_msgs.msg import Transform
        self.imu_local_transform = kwargs.get('imu_local_transform', Transform())
        self.landmarks = kwargs.get('landmarks', [])
        from geometry_msgs.msg import Pose
        self.ground_truth_pose = kwargs.get('ground_truth_pose', Pose())
        from rtabmap_msgs.msg import GPS
        self.gps = kwargs.get('gps', GPS())

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
        if self.left != other.left:
            return False
        if self.right != other.right:
            return False
        if self.left_compressed != other.left_compressed:
            return False
        if self.right_compressed != other.right_compressed:
            return False
        if self.left_camera_info != other.left_camera_info:
            return False
        if self.right_camera_info != other.right_camera_info:
            return False
        if self.local_transform != other.local_transform:
            return False
        if self.laser_scan != other.laser_scan:
            return False
        if self.laser_scan_compressed != other.laser_scan_compressed:
            return False
        if self.laser_scan_max_pts != other.laser_scan_max_pts:
            return False
        if self.laser_scan_max_range != other.laser_scan_max_range:
            return False
        if self.laser_scan_format != other.laser_scan_format:
            return False
        if self.laser_scan_local_transform != other.laser_scan_local_transform:
            return False
        if self.user_data != other.user_data:
            return False
        if self.grid_ground != other.grid_ground:
            return False
        if self.grid_obstacles != other.grid_obstacles:
            return False
        if self.grid_empty_cells != other.grid_empty_cells:
            return False
        if self.grid_cell_size != other.grid_cell_size:
            return False
        if self.grid_view_point != other.grid_view_point:
            return False
        if self.key_points != other.key_points:
            return False
        if self.points != other.points:
            return False
        if self.descriptors != other.descriptors:
            return False
        if self.global_descriptors != other.global_descriptors:
            return False
        if self.env_sensors != other.env_sensors:
            return False
        if self.imu != other.imu:
            return False
        if self.imu_local_transform != other.imu_local_transform:
            return False
        if self.landmarks != other.landmarks:
            return False
        if self.ground_truth_pose != other.ground_truth_pose:
            return False
        if self.gps != other.gps:
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
    def left(self):
        """Message field 'left'."""
        return self._left

    @left.setter
    def left(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'left' field must be a sub message of type 'Image'"
        self._left = value

    @builtins.property
    def right(self):
        """Message field 'right'."""
        return self._right

    @right.setter
    def right(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'right' field must be a sub message of type 'Image'"
        self._right = value

    @builtins.property
    def left_compressed(self):
        """Message field 'left_compressed'."""
        return self._left_compressed

    @left_compressed.setter
    def left_compressed(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'left_compressed' array.array() must have the type code of 'B'"
            self._left_compressed = value
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
                "The 'left_compressed' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._left_compressed = array.array('B', value)

    @builtins.property
    def right_compressed(self):
        """Message field 'right_compressed'."""
        return self._right_compressed

    @right_compressed.setter
    def right_compressed(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'right_compressed' array.array() must have the type code of 'B'"
            self._right_compressed = value
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
                "The 'right_compressed' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._right_compressed = array.array('B', value)

    @builtins.property
    def left_camera_info(self):
        """Message field 'left_camera_info'."""
        return self._left_camera_info

    @left_camera_info.setter
    def left_camera_info(self, value):
        if __debug__:
            from sensor_msgs.msg import CameraInfo
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
                 all(isinstance(v, CameraInfo) for v in value) and
                 True), \
                "The 'left_camera_info' field must be a set or sequence and each value of type 'CameraInfo'"
        self._left_camera_info = value

    @builtins.property
    def right_camera_info(self):
        """Message field 'right_camera_info'."""
        return self._right_camera_info

    @right_camera_info.setter
    def right_camera_info(self, value):
        if __debug__:
            from sensor_msgs.msg import CameraInfo
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
                 all(isinstance(v, CameraInfo) for v in value) and
                 True), \
                "The 'right_camera_info' field must be a set or sequence and each value of type 'CameraInfo'"
        self._right_camera_info = value

    @builtins.property
    def local_transform(self):
        """Message field 'local_transform'."""
        return self._local_transform

    @local_transform.setter
    def local_transform(self, value):
        if __debug__:
            from geometry_msgs.msg import Transform
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
                 all(isinstance(v, Transform) for v in value) and
                 True), \
                "The 'local_transform' field must be a set or sequence and each value of type 'Transform'"
        self._local_transform = value

    @builtins.property
    def laser_scan(self):
        """Message field 'laser_scan'."""
        return self._laser_scan

    @laser_scan.setter
    def laser_scan(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'laser_scan' field must be a sub message of type 'PointCloud2'"
        self._laser_scan = value

    @builtins.property
    def laser_scan_compressed(self):
        """Message field 'laser_scan_compressed'."""
        return self._laser_scan_compressed

    @laser_scan_compressed.setter
    def laser_scan_compressed(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'laser_scan_compressed' array.array() must have the type code of 'B'"
            self._laser_scan_compressed = value
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
                "The 'laser_scan_compressed' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._laser_scan_compressed = array.array('B', value)

    @builtins.property
    def laser_scan_max_pts(self):
        """Message field 'laser_scan_max_pts'."""
        return self._laser_scan_max_pts

    @laser_scan_max_pts.setter
    def laser_scan_max_pts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'laser_scan_max_pts' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'laser_scan_max_pts' field must be an integer in [-2147483648, 2147483647]"
        self._laser_scan_max_pts = value

    @builtins.property
    def laser_scan_max_range(self):
        """Message field 'laser_scan_max_range'."""
        return self._laser_scan_max_range

    @laser_scan_max_range.setter
    def laser_scan_max_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'laser_scan_max_range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'laser_scan_max_range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._laser_scan_max_range = value

    @builtins.property
    def laser_scan_format(self):
        """Message field 'laser_scan_format'."""
        return self._laser_scan_format

    @laser_scan_format.setter
    def laser_scan_format(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'laser_scan_format' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'laser_scan_format' field must be an integer in [-2147483648, 2147483647]"
        self._laser_scan_format = value

    @builtins.property
    def laser_scan_local_transform(self):
        """Message field 'laser_scan_local_transform'."""
        return self._laser_scan_local_transform

    @laser_scan_local_transform.setter
    def laser_scan_local_transform(self, value):
        if __debug__:
            from geometry_msgs.msg import Transform
            assert \
                isinstance(value, Transform), \
                "The 'laser_scan_local_transform' field must be a sub message of type 'Transform'"
        self._laser_scan_local_transform = value

    @builtins.property
    def user_data(self):
        """Message field 'user_data'."""
        return self._user_data

    @user_data.setter
    def user_data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'user_data' array.array() must have the type code of 'B'"
            self._user_data = value
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
                "The 'user_data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._user_data = array.array('B', value)

    @builtins.property
    def grid_ground(self):
        """Message field 'grid_ground'."""
        return self._grid_ground

    @grid_ground.setter
    def grid_ground(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'grid_ground' array.array() must have the type code of 'B'"
            self._grid_ground = value
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
                "The 'grid_ground' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._grid_ground = array.array('B', value)

    @builtins.property
    def grid_obstacles(self):
        """Message field 'grid_obstacles'."""
        return self._grid_obstacles

    @grid_obstacles.setter
    def grid_obstacles(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'grid_obstacles' array.array() must have the type code of 'B'"
            self._grid_obstacles = value
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
                "The 'grid_obstacles' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._grid_obstacles = array.array('B', value)

    @builtins.property
    def grid_empty_cells(self):
        """Message field 'grid_empty_cells'."""
        return self._grid_empty_cells

    @grid_empty_cells.setter
    def grid_empty_cells(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'grid_empty_cells' array.array() must have the type code of 'B'"
            self._grid_empty_cells = value
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
                "The 'grid_empty_cells' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._grid_empty_cells = array.array('B', value)

    @builtins.property
    def grid_cell_size(self):
        """Message field 'grid_cell_size'."""
        return self._grid_cell_size

    @grid_cell_size.setter
    def grid_cell_size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'grid_cell_size' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'grid_cell_size' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._grid_cell_size = value

    @builtins.property
    def grid_view_point(self):
        """Message field 'grid_view_point'."""
        return self._grid_view_point

    @grid_view_point.setter
    def grid_view_point(self, value):
        if __debug__:
            from rtabmap_msgs.msg import Point3f
            assert \
                isinstance(value, Point3f), \
                "The 'grid_view_point' field must be a sub message of type 'Point3f'"
        self._grid_view_point = value

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
    def global_descriptors(self):
        """Message field 'global_descriptors'."""
        return self._global_descriptors

    @global_descriptors.setter
    def global_descriptors(self, value):
        if __debug__:
            from rtabmap_msgs.msg import GlobalDescriptor
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
                 all(isinstance(v, GlobalDescriptor) for v in value) and
                 True), \
                "The 'global_descriptors' field must be a set or sequence and each value of type 'GlobalDescriptor'"
        self._global_descriptors = value

    @builtins.property
    def env_sensors(self):
        """Message field 'env_sensors'."""
        return self._env_sensors

    @env_sensors.setter
    def env_sensors(self, value):
        if __debug__:
            from rtabmap_msgs.msg import EnvSensor
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
                 all(isinstance(v, EnvSensor) for v in value) and
                 True), \
                "The 'env_sensors' field must be a set or sequence and each value of type 'EnvSensor'"
        self._env_sensors = value

    @builtins.property
    def imu(self):
        """Message field 'imu'."""
        return self._imu

    @imu.setter
    def imu(self, value):
        if __debug__:
            from sensor_msgs.msg import Imu
            assert \
                isinstance(value, Imu), \
                "The 'imu' field must be a sub message of type 'Imu'"
        self._imu = value

    @builtins.property
    def imu_local_transform(self):
        """Message field 'imu_local_transform'."""
        return self._imu_local_transform

    @imu_local_transform.setter
    def imu_local_transform(self, value):
        if __debug__:
            from geometry_msgs.msg import Transform
            assert \
                isinstance(value, Transform), \
                "The 'imu_local_transform' field must be a sub message of type 'Transform'"
        self._imu_local_transform = value

    @builtins.property
    def landmarks(self):
        """Message field 'landmarks'."""
        return self._landmarks

    @landmarks.setter
    def landmarks(self, value):
        if __debug__:
            from rtabmap_msgs.msg import LandmarkDetection
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
                 all(isinstance(v, LandmarkDetection) for v in value) and
                 True), \
                "The 'landmarks' field must be a set or sequence and each value of type 'LandmarkDetection'"
        self._landmarks = value

    @builtins.property
    def ground_truth_pose(self):
        """Message field 'ground_truth_pose'."""
        return self._ground_truth_pose

    @ground_truth_pose.setter
    def ground_truth_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'ground_truth_pose' field must be a sub message of type 'Pose'"
        self._ground_truth_pose = value

    @builtins.property
    def gps(self):
        """Message field 'gps'."""
        return self._gps

    @gps.setter
    def gps(self, value):
        if __debug__:
            from rtabmap_msgs.msg import GPS
            assert \
                isinstance(value, GPS), \
                "The 'gps' field must be a sub message of type 'GPS'"
        self._gps = value
