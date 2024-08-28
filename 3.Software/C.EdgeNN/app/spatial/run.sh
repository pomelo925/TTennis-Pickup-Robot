#!/bin/bash
source /home/dai-ws/install/setup.bash

## launch Foxglove Bridge
ros2 launch foxglove_bridge foxglove_bridge_launch.xml address:=127.0.0.1 port:=8010 &

## launch spatial.py
cd /home/dai-ws/src/device-decoding
python3 spatial.py