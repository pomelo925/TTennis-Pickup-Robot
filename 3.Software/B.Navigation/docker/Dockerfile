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
    net-tools ssh nano git usbutils x11-apps apt-utils udev \
    && rm -rf /var/lib/apt/lists/*d


##########################
## NAV2 Workspace
##########################
# Note that this workspace would be replaced by the one in the host machine via docker compose volomes.
# I just want to show the initial installation process here.
WORKDIR /home/user/nav2-ws
RUN apt-get update && \
    git clone https://github.com/ros-planning/navigation2.git --branch $ROS_DISTRO src/navigation2 && \
    rosdep install -y -r -q --from-paths src --ignore-src --rosdistro $ROS_DISTRO && \
    echo "source /opt/ros/$ROS_DISTRO/setup.bash" >> ~/.bashrc && \
    /bin/bash -c 'source /opt/ros/$ROS_DISTRO/setup.bash; colcon build --symlink-install' \
    && rm -rf /var/lib/apt/lists/*


##########################
## Final Touch
##########################
# USER $USERNAME

## set the entrypoint
ENV SHELL /bin/bash
CMD ["/bin/bash"]