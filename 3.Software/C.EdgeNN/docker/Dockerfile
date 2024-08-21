################################################################################################
# - Base stage
#   - This stage serves as the foundational stage for all other stages.
#   - Base image: OSRF ROS Humble Desktop Full
#       - https://hub.docker.com/r/osrf/ros/tags?page=1&name=humble-desktop-full
################################################################################################

FROM ros:humble-ros-base AS base

LABEL org.opencontainers.image.title="EdgeNN Docker Image"
LABEL org.opencontainers.image.authors="yoseph.huang@gmail.com"
LABEL org.opencontainers.image.licenses="MIT"
LABEL org.opencontainers.image.source="https://github.com/pomelo925/TTennis-Pickup-Robot/blob/main/3.Software/C.EdgeNN/docker/Dockerfile"

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
#   - In this stage, I will clone and build the DepthAI ROS package & foxglove.
#   - reference: 
#       - https://github.com/luxonis/depthai-ros/tree/ros-release
################################################################################################
FROM tools AS final

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    DEBIAN_FRONTEND=noninteractive apt-get install -y \
    ## Install ROS Humble Foxglove
    ros-humble-foxglove-bridge \
    ## Python
    python3 pip \
    ## OpenGL dependencies
    libgl1-mesa-glx  libglib2.0-0 \
    && rm -rf /var/lib/apt/lists/

## Install device-decoding dependencies
RUN pip install \
    depthai>=2.19.1.0 \
    opencv-python \
    depthai-sdk>=1.9.1.1 \
    numpy>=1.18.5 

ENV WS=/home/dai-ws
WORKDIR $WS

RUN echo "source /opt/ros/$ROS_DISTRO/setup.bash" >> ~/.bashrc && \
   echo "source $WS/install/setup.bash" >> ~/.bashrc 

CMD ["/bin/bash"]