# Base Image : https://github.com/osrf/docker_images/tree/master
FROM ros:humble-ros-core

LABEL org.opencontainers.image.authors="yoseph.huang@gmail.com"
LABEL description = \
        "An Image for ROS2 Navigation System"
    
ARG USERNAME=pomelo
ARG USER_UID=1000
ARG USER_GID=$USER_UID

# ********************************************************
# * Create a non-root user to use if preferred.          *
# ********************************************************

RUN groupadd --gid $USER_GID $USERNAME \
    && useradd --uid $USER_UID --gid $USER_GID -m $USERNAME \
    && apt-get update \
    && apt-get install -y sudo \
    && echo $USERNAME ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME \
    && chmod 0440 /etc/sudoers.d/$USERNAME \
    && rm -rf /var/lib/apt/lists/*

RUN apt-get update && apt-get upgrade -y \
    && rm -rf /var/lib/apt/lists/*
RUN apt-get update && apt-get install -y python3-pip \
    && rm -rf /var/lib/apt/lists/*
ENV SHELL /bin/bash


# ********************************************************
# * Install common tools                                 *
# ********************************************************

RUN apt-get update && apt-get install -y \
    curl wget \
    git git-extras \
    htop net-tools \
    tmux \
    net-tools \
    x11-apps \
    && rm -rf /var/lib/apt/lists/*


# ********************************************************
# * Installl ROS2 tools                                 *
# ********************************************************

# ********************************************************
# * Final touch                                         *
# ********************************************************

USER $USERNAME
CMD ["/bin/bash"]