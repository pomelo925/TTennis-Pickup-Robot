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

SHELL ["/bin/bash", "-c"]


################################################################################################
# - User Setup stage
#   - In this stage, create a non-root user and configure passwordless sudo.
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
#   - In this stage, I will install required packages for Navigation2.
#   - Reference:
#       - https://github.com/ros-navigation/navigation2
################################################################################################

FROM tools AS final

## Set working directory
RUN echo "source /opt/ros/$ROS_DISTRO/setup.bash" >> ~/.bashrc
WORKDIR /home/nav2-ws

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    DEBIAN_FRONTEND=noninteractive apt-get install -y \
    ## Install ROS Humble Foxglove
    ros-humble-foxglove-bridge \
    && rm -rf /var/lib/apt/lists/


##### NOTE #####
## Steps below should ideally  performed in a seperate container, and then mounted as a volume to the main container, 
## as they require modifications that are better handled outside the Dockerfile.

# WORKDIR /home/nav2-ws
# RUN apt-get update && \
#     git clone https://github.com/ros-planning/navigation2.git --branch $ROS_DISTRO src/navigation2 && \
#     rosdep install -y -r -q --from-paths src --ignore-src --rosdistro $ROS_DISTRO && \
#     /bin/bash -c 'source /opt/ros/$ROS_DISTRO/setup.bash; colcon build --symlink-install' \
#     && rm -rf /var/lib/apt/lists/*

#####


## Final configurations
# USER $USERNAME
CMD ["/bin/bash"]