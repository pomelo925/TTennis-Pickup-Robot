# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "roscpp;rosserial_msgs;std_msgs;topic_tools".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lrosserial_server_lookup".split(';') if "-lrosserial_server_lookup" != "" else []
PROJECT_NAME = "rosserial_server"
PROJECT_SPACE_DIR = "/root/comm-ws/install"
PROJECT_VERSION = "0.9.2"
