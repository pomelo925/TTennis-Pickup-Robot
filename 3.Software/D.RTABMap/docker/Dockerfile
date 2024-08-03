################################################################################################
# - Base stage
#   - This stage serves as the foundational stage for all other stages.
#   - Base image: OSRF ROS Humble Desktop Full
#       - https://hub.docker.com/r/osrf/ros/tags?page=1&name=humble-desktop-full
################################################################################################

FROM osrf/ros:humble-desktop-full AS base

LABEL org.opencontainers.image.authors="yoseph.huang@gmail.com"

ARG USERNAME=user
ARG USER_UID=1000
ARG USER_GID=$USER_UID

# Set locale
ENV LC_ALL=en_US.UTF-8
ENV LANG=en_US.UTF-8

SHELL ["/bin/bash", "-c"]

################################################################################################
# - User Setup stage
#   - In this stage, create a non-root user and configure passwordless sudo.
################################################################################################

FROM base AS user-setup

# Create a non-root user
RUN groupadd --gid $USER_GID $USERNAME && \
    useradd --uid $USER_UID --gid $USER_GID -m $USERNAME -s /bin/bash && \
    apt-get update && \
    apt-get install -y sudo && \
    echo $USERNAME ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME && \
    chmod 0440 /etc/sudoers.d/$USERNAME && \
    rm -rf /var/lib/apt/lists/*

################################################################################################
# - Tools Installation stage
#   - In this stage, install convenient tools for development.
################################################################################################

FROM user-setup AS tools

# Install necessary packages
RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    DEBIAN_FRONTEND=noninteractive apt-get install -y \
    apt-utils \
    git \
    nano \
    net-tools \
    ssh \
    usbutils \
    udev \
    x11-apps && \
    rm -rf /var/lib/apt/lists/*


################################################################################################
# - Final stage
#   - In this stage, install required packages for RTAB-Map and Intel RealSense.
#   - Reference:
#       - https://github.com/introlab/rtabmap_ros/tree/humble-devel?tab=readme-ov-file#installation
#       - https://github.com/introlab/rtabmap_ros.git
################################################################################################

FROM tools AS final

# Install Intel RealSense dependencies
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y \
    ros-humble-librealsense2* \
    ros-humble-realsense2-* && \
    rm -rf /var/lib/apt/lists/*

# Install RTAB-Map dependencies
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y \
    ros-humble-rtabmap-ros \
    rm -rf /var/lib/apt/lists/*

# Set working directory
WORKDIR /home/slam-ws

# Final configurations
USER $USERNAME
CMD ["/bin/bash"]