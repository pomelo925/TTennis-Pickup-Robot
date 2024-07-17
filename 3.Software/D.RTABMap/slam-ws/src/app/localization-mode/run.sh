#!/bin/bash
source /home/user/slam-ws/install/setup.bash

## launch Intel Realsense D435
ros2 launch realsense2_camera rs_launch.py align_depth.enable:=true &

## launch RTAB-Map (Mapping Mode)
ros2 launch rtabmap_launch rtabmap.launch.py \
  frame_id:=camera_link \
  rgb_topic:=/camera/camera/color/image_raw \
  camera_info_topic:=/camera/camera/color/camera_info \
  depth_topic:=/camera/camera/aligned_depth_to_color/image_raw \
  database_path:=/home/user/slam-ws/src/app/00-map/rtabmap_1.db \
  localization:=true \
  approx_sync:=true \
  log_level:=debug \
  rviz:=true \
  qos:=2