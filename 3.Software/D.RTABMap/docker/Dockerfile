################################################################################################
# - Base stage
#   - This stage serves as the foundational stage for all other stages.
#   - Base image: OSRF ROS Humble Desktop Full
#       - https://hub.docker.com/r/osrf/ros/tags?page=1&name=humble-desktop-full
################################################################################################

FROM osrf/ros:humble-desktop-full AS base

LABEL org.opencontainers.image.title="RTAB-Map Docker Image"
LABEL org.opencontainers.image.authors="yoseph.huang@gmail.com"
LABEL org.opencontainers.image.licenses="MIT"
LABEL org.opencontainers.image.source="https://github.com/pomelo925/TTennis-Pickup-Robot/blob/main/3.Software/D.RTABMap/docker/Dockerfile"

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
# - Final stage
#   - In this stage, I will install required packages for RTAB-Map and Intel RealSense.
#   - Reference:
#       - https://github.com/introlab/rtabmap_ros/tree/humble-devel?tab=readme-ov-file#installation
#       - https://github.com/introlab/rtabmap_ros.git
################################################################################################

FROM tools AS final

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    DEBIAN_FRONTEND=noninteractive apt-get install -y \
    ## Install Intel RealSense dependencies
    ros-humble-librealsense2* \
    ros-humble-realsense2-* \
    ## Install RTAB-Map dependencies
    ros-humble-rtabmap-ros \
    ## Install foxglove-bridge
    ros-humble-foxglove-bridge && \
    rm -rf /var/lib/apt/lists/*


## Set working directory
RUN echo "source /opt/ros/$ROS_DISTRO/setup.bash" >> ~/.bashrc
WORKDIR /home/slam-ws

## Final configurations
# USER $USERNAME
CMD ["/bin/bash"]
