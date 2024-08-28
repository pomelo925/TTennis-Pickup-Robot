#!/bin/bash
source /home/dai-ws/install/setup.bash

## launch Foxglove Bridge
ros2 launch foxglove_bridge foxglove_bridge_launch.xml address:=127.0.0.1 port:=8000 &

## launch rgb2d.py
cd /home/dai-ws/src/device-decoding
python3 rgb2d.py -conf model/best.json

