#!/bin/bash

## 0. Define the variables
RVIZ_ENABLED=true
FOXGLOVE_ENABLED=true

MAP_DIR="/home/app/_map_database"
MAP_INDEX=1

# Find the next available map index
while [ -e "${MAP_DIR}/MAP_${MAP_INDEX}.db" ]; do
    MAP_INDEX=$((MAP_INDEX + 1))
done

# Set the database file name
DATABASE_PATH="${MAP_DIR}/MAP_${MAP_INDEX}.db"

## 1. Launch Foxglove Bridge
if [ "$FOXGLOVE_ENABLED" = true ]; then
    ros2 launch foxglove_bridge foxglove_bridge_launch.xml address:=127.0.0.1 port:=30000 &
    sleep 8
fi

## 2. Launch Intel Realsense D435
ros2 launch realsense2_camera rs_launch.py align_depth.enable:=true &

## 3. Launch RTAB-Map (Mapping Mode)
ros2 launch rtabmap_launch rtabmap.launch.py \
  args:="-d" \
  frame_id:=camera_link \
  rgb_topic:=/camera/camera/color/image_raw \
  camera_info_topic:=/camera/camera/color/camera_info \
  depth_topic:=/camera/camera/aligned_depth_to_color/image_raw \
  database_path:=${DATABASE_PATH} \
  approx_sync:=true \
  rviz:=false \
  qos:=2 &


# Optionally launch RViz
if [ "$RVIZ_ENABLED" = true ]; then
    rviz2 -d /home/app/_gui_config/basic.rviz &
fi

echo "RTAB-Map database saved as ${DATABASE_PATH}"

tail -f /dev/null
