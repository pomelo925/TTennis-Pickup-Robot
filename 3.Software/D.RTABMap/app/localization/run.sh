#!/bin/bash

# Check if a map file argument was provided
if [ -z "$1" ]; then
    echo "Usage: $0 MAP_NAME"
    exit 1
fi

## 0. Define the variables
RVIZ_ENABLED=false
FOXGLOVE_ENABLED=true

MAP_NAME="$1"
MAP_DIR="/home/app/_map_database"
DATABASE_PATH="${MAP_DIR}/${MAP_NAME}.db"

# Check if the specified database file exists
if [ ! -f "$DATABASE_PATH" ]; then
    echo "Error: ${DATABASE_PATH} does not exist."
    exit 1
fi


## 1. Launch Foxglove Bridge
if [ "$FOXGLOVE_ENABLED" = true ]; then
    ros2 launch foxglove_bridge foxglove_bridge_launch.xml address:=127.0.0.1 port:=32000 &
    sleep 3
fi


## 2. Launch Intel Realsense D435
ros2 launch realsense2_camera rs_launch.py align_depth.enable:=true &


# 3. Launch RTAB-Map (Localization Mode)
ros2 launch rtabmap_launch rtabmap.launch.py \
  frame_id:=camera_link \
  rgb_topic:=/camera/camera/color/image_raw \
  camera_info_topic:=/camera/camera/color/camera_info \
  depth_topic:=/camera/camera/aligned_depth_to_color/image_raw \
  database_path:=${DATABASE_PATH} \
  localization:=true \
  approx_sync:=true \
  rviz:=false \
  qos:=2 &
  
# Optionally launch RViz
if [ "$RVIZ_ENABLED" = true ]; then
    rviz2 -d /home/app/_gui_config/basic.rviz &
fi

echo "Localization using ${DATABASE_PATH} initiated."

tail -f /dev/null