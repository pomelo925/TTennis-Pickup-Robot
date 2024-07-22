FROM osrf/ros:humble-desktop-full

LABEL org.opencontainers.image.authors="yoseph.huang@gmail.com"

ARG USERNAME=user
ARG USER_UID=1000
ARG USER_GID=$USER_UID

##########################
## create non-root user
##########################
RUN groupadd --gid $USER_GID $USERNAME \
    && useradd --uid $USER_UID --gid $USER_GID -m $USERNAME -s /bin/bash \
    ## passwordless
    && apt-get update \
    && apt-get install -y sudo \
    && echo $USERNAME ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME \
    && chmod 0440 /etc/sudoers.d/$USERNAME \
    && rm -rf /var/lib/apt/lists/*

    
##########################
## pkgs installation
##########################
RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    DEBIAN_FRONTEND=noninteractive apt-get install -y \
    apt-utils \
    git \
    nano \
    net-tools \
    ssh \
    usbutils \
    udev \
    x11-apps \
    && rm -rf /var/lib/apt/lists/*


######################################
## Intel® RealSense™ dependencies 
######################################
# ref: https://github.com/IntelRealSense/realsense-ros/blob/ros2-master/README.md
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y \
    # Intel® RealSense™ SDK 2.0 
    ros-humble-librealsense2* \
    # Intel® RealSense™ ROS2 wrapper
    ros-humble-realsense2-* \
    && rm -rf /var/lib/apt/lists/*


##########################
## RTABMap
##########################
WORKDIR /home/slam-ws

# Note that this workspace should be mounted from the host via Docker Compose.
# ref: https://github.com/introlab/rtabmap_ros/tree/humble-devel?tab=readme-ov-file#installation
# ref: https://github.com/introlab/rtabmap_ros.git


    
##########################
## Final Touch
##########################
# USER $USERNAME

## set the entrypoint
CMD ["/bin/bash"]