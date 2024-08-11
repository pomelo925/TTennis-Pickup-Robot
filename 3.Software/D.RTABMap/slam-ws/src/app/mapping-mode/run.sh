#!/bin/bash
source /home/user/slam-ws/install/setup.bash

## launch Foxglove Bridge
ros2 launch foxglove_bridge foxglove_bridge_launch.xml address:=127.0.0.1 &
sleep 2

## launch Intel Realsense D435
ros2 launch realsense2_camera rs_launch.py align_depth.enable:=true &

## launch RTAB-Map (Mapping Mode)
ros2 launch rtabmap_launch rtabmap.launch.py \
  args:="-d" \
  frame_id:=camera_link \
  rgb_topic:=/camera/camera/color/image_raw \
  camera_info_topic:=/camera/camera/color/camera_info \
  depth_topic:=/camera/camera/aligned_depth_to_color/image_raw \
  approx_sync:=true \
  rviz:=false \
  qos:=2 

## launch rviz 
# rviz2 -d /home/user/slam-ws/src/app/mapping-mode/run.rviz