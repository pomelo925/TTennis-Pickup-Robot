## AMD64 architecture ##
FROM osrf/ros:noetic-desktop-full

LABEL org.opencontainers.image.authors="yoseph.huang@gmail.com"

## pkgs installation
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y \
    net-tools ssh nano git usbutils x11-apps apt-utils udev \
    && rm -rf /var/lib/apt/lists/*d

## Depth-AI
RUN git clone https://github.com/luxonis/depthai-core.git && \
    cd depthai-core && \
    git submodule update --init --recursive && \
    rm -rf .git

WORKDIR /depthai-core/build
RUN cmake .. && \ 
    cmake --build . --parallel $(nproc) && \
    cmake --install . --prefix /usr/local && \
    cd .. && cmake -S. -Bbuild -D'DEPTHAI_BUILD_EXAMPLES=ON' && \
    cmake --build build
      
### install and build dependencies
# RUN sudo apt-get update && \
#     rosdep update && \
#     rosdep install --from-paths . --ignore-src -r -y && \
#     cd .. && \
#     /bin/bash -c 'source /opt/ros/$ROS_DISTRO/setup.bash; catkin_make' && \
#     echo "source /opt/ros/$ROS_DISTRO/setup.bash" >> ~/.bashrc \
#     && sudo rm -rf /var/lib/apt/lists/* 