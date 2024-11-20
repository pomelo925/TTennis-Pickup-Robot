#!/bin/bash

FOXGLOVE_ENABLED=false

## Check if enable_foxglove is set to true
if [ "$FOXGLOVE_ENABLED" = "true" ]; then
  ## launch Foxglove Bridge
  ros2 launch foxglove_bridge foxglove_bridge_launch.xml address:=127.0.0.1 port:=8010 &
fi

## launch spatial.py
cd /home/dai-ws/device-decoding
python3 spatial.py