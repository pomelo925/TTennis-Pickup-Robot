## AMD64 architecture ##
FROM osrf/ros:noetic-desktop-full

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
    net-tools ssh nano git usbutils x11-apps apt-utils udev \
    && rm -rf /var/lib/apt/lists/*d


##########################
## Intel Realsense SDK
##########################
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y \
    libssl-dev libusb-1.0-0-dev libudev-dev pkg-config udev \
    libx11-dev libxrandr-dev libxinerama-dev libxcursor-dev \
    libglu1-mesa-dev libglew-dev mesa-common-dev libxi-dev \
    ros-noetic-tf* ros-noetic-diagnostic-updater ros-noetic-rviz ros-noetic-robot-state-publisher \
    ros-noetic-pcl-conversions ros-noetic-pcl-ros pcl-tools \
    && rm -rf /var/lib/apt/lists/*

COPY /bugs-fix/tf2-nodelet.sh /tf2-nodelet.sh
RUN /bin/bash /tf2-nodelet.sh 

WORKDIR /opt/librealsense
RUN git clone https://github.com/IntelRealSense/librealsense.git /opt/librealsense \
    && rm -rf .git

COPY /bugs-fix/rm-controlTransfer-warning.sh /rm-controlTransfer-warning.sh
RUN /bin/bash /rm-controlTransfer-warning.sh

WORKDIR /opt/librealsense/build
RUN cmake ../ -DBUILD_EXAMPLES=true -DCMAKE_BUILD_TYPE=Release \
    && make -j4 && make install

## workspace setup
WORKDIR /root/slam-ws/src
RUN git clone --branch 0.3.7 https://github.com/ros-drivers/usb_cam.git && \
    git clone --branch noetic https://github.com/ros-perception/image_pipeline.git && \
    git clone --branch kinetic-devel https://github.com/pal-robotics/ddynamic_reconfigure.git && \
    git clone --branch ros1-legacy --single-branch https://github.com/IntelRealSense/realsense-ros.git && \
    (cd realsense-ros && git checkout $(git tag | sort -V | grep -P "^2.\\d+\\.\\d+" | tail -1)) \
    && rm -rf .git

RUN apt-get update && rosdep update && \
    rosdep install --from-paths . --ignore-src -r -y && \
    cd .. && \
    /bin/bash -c 'source /opt/ros/$ROS_DISTRO/setup.bash; catkin_make' && \
    echo "source /opt/ros/$ROS_DISTRO/setup.bash" >> ~/.bashrc \
    && rm -rf /var/lib/apt/lists/* 


##########################
## RTABMap dependencies
##########################
# pkg: rtabmap
WORKDIR /root/slam-ws
RUN apt-get update && apt install -y ros-noetic-rtabmap* && \
    git clone https://github.com/introlab/rtabmap.git src/rtabmap && \
    cd src/rtabmap/build && \
    cmake .. && \
    make -j6 && make install \
    && rm -rf /var/lib/apt/lists/*

# pkg: rtabmap_ros
WORKDIR /root/slam-ws
RUN git clone https://github.com/introlab/rtabmap_ros.git src/rtabmap_ros && \
    /bin/bash -c 'source /opt/ros/$ROS_DISTRO/setup.bash; catkin_make_isolated -j4 --install'


##########################
## Final Touch
##########################
# USER $USERNAME
ENV SHELL /bin/bash
CMD ["/bin/bash"]