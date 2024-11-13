#!/bin/bash

#######################
####  User Config  ####
FOXGLOVE_ENABLED=false

MAP_DIR="/home/app/_map_database"
#######################

# Check if a map file argument was provided
if [ -z "$1" ]; then
    echo "Usage: $0 MAP_NAME"
    exit 1
fi

## 1. Launch Foxglove Bridge
if [ "$FOXGLOVE_ENABLED" = true ]; then
    ros2 launch foxglove_bridge foxglove_bridge_launch.xml address:=127.0.0.1 port:=12000 &
    sleep 3
fi

## 2. Publish TF2
source install/setup.bash
ros2 run tf2_ros static_transform_publisher 0 0 0 0 0 0 odom base_link &

## 3. Launch NAV2
ros2 launch nav2_bringup navigation_launch.py use_sim_time:=False map:=/rtabmap/map &

## 4. Launch RVIZ
rviz2 -d /home/app/_gui_config/basic.rviz &

tail -f /dev/null
