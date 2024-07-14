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
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y \
    net-tools \
    ssh \
    nano \
    git \
    usbutils \
    x11-apps \
    apt-utils \
    udev \
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
# Note that this workspace would be replaced by the one in the host machine via docker compose volomes.
# I just want to show the initial installation process here.

WORKDIR /home/user/slam-ws
# ref: https://github.com/introlab/rtabmap_ros/tree/humble-devel?tab=readme-ov-file#installation
RUN apt-get update && \
    git clone https://github.com/introlab/rtabmap.git src/rtabmap && \ 
    git clone --branch ros2 https://github.com/introlab/rtabmap_ros.git src/rtabmap_ros && \ 
    rosdep update && rosdep install --from-paths src --ignore-src -r -y && \ 
    # Caution: You can ignore settings "MAKEFLAGS" and "--parallel-workers" if memory is enough
    # Increasing jobs can exhaust memory and thus system crush.   
    export MAKEFLAGS="-j2" && \
    echo "source /opt/ros/$ROS_DISTRO/setup.bash" >> ~/.bashrc && \
    /bin/bash -c 'source /opt/ros/$ROS_DISTRO/setup.bash; colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release --parallel-workers 2'

    
##########################
## Final Touch
##########################
# USER $USERNAME

## set the entrypoint
ENV SHELL /bin/bash
CMD ["/bin/bash"]