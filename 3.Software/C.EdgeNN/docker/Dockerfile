################################################################################################
# - Base stage
#   - This stage serves as the foundational stage for all other stages.
#   - Base image: OSRF ROS Humble Desktop Full
#       - https://hub.docker.com/r/osrf/ros/tags?page=1&name=humble-desktop-full
################################################################################################

FROM ros:humble-ros-base AS base

LABEL org.opencontainers.image.authors="yoseph.huang@gmail.com"

ARG USERNAME=user
ARG USER_UID=1000
ARG USER_GID=$USER_UID

SHELL ["/bin/bash", "-c"]


################################################################################################
# - User Setup stage
#   - In this stage, I will create a non-root user and configure passwordless sudo.
################################################################################################

FROM base AS user-setup

## Create a non-root user
RUN groupadd --gid $USER_GID $USERNAME && \
    useradd --uid $USER_UID --gid $USER_GID -m $USERNAME -s /bin/bash && \
    apt-get update && \
    apt-get install -y sudo && \
    echo $USERNAME ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME && \
    chmod 0440 /etc/sudoers.d/$USERNAME && \
    rm -rf /var/lib/apt/lists/*


################################################################################################
# - Tools Installation stage
#   - In this stage, I will install convenient tools for development.
################################################################################################

FROM user-setup AS tools

## Install necessary packages
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


################################################################################################
# - DepthAI ROS Build stage
#   - In this stage, I will clone and build the DepthAI ROS package.
#   - reference: 
#       - https://github.com/luxonis/depthai-ros/tree/ros-release
################################################################################################
FROM tools AS final

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    DEBIAN_FRONTEND=noninteractive apt-get install -y \
    libusb-1.0-0-dev \
    python3-colcon-common-extensions \
    software-properties-common \
    && rm -rf /var/lib/apt/lists/

ENV WS=/home/edgeNN-ws
WORKDIR $WS

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    git clone -b humble https://github.com/luxonis/depthai-ros.git src/depthai-ros && \
    rosdep install --from-paths src --ignore-src -y && \
    . /opt/ros/humble/setup.sh && \
    ./src/depthai-ros/build.sh -s 0 -r 1 -m 1 && \
    rm -rf $WS/src $WS/log && \
    rm -rf /var/lib/apt/lists/*

RUN echo "source /opt/ros/$ROS_DISTRO/setup.bash" >> ~/.bashrc && \
   echo "source $WS/install/setup.bash" >> ~/.bashrc 

CMD ["/bin/bash"]