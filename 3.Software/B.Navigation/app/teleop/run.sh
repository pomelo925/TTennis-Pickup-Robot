#!/bin/bash

source /home/nav2-ws/install/setup.bash

ros2 launch foxglove_bridge foxglove_bridge_launch.xml address:=127.0.0.1 port:=7020