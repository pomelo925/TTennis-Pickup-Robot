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
## Depth-AI
##########################
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


##########################
## Depth-AI Viewer
##########################
RUN sudo apt-get update && sudo apt-get install -y \
    libclang-dev libatk-bridge2.0 libfontconfig1-dev \
    libfreetype6-dev libglib2.0-dev libgtk-3-dev \
    libssl-dev libxcb-render0-dev libxcb-shape0-dev \
    libxcb-xfixes0-dev libxkbcommon-dev patchelf \
    python3-pip python-is-python3 

RUN python3 -m pip install --upgrade pip \
    && python3 -m pip install depthai-viewer \
    && echo 'export PATH=$PATH:/home/user/.local/bin' >> ~/.bashrc


##########################
## Final Touch
##########################
# USER $USERNAME
ENV SHELL /bin/bash
CMD ["/bin/bash"]