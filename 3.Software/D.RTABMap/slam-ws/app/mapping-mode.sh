#!/bin/bash

## Turn on the camera
roslaunch realsense2_camera rs_camera.launch align_depth:=true &
sleep 2

## Run the SLAM (Mapping Mode)
roslaunch rtabmap_ros rtabmap.launch rtabmap_args:='--delete_db_on_start --Optimizer/GravitySigma 0.3' depth_topic:=/camera/aligned_depth_to_color/image_raw rgb_topic:=/camera/color/image_raw camera_info_topic:=/camera/color/camera_info approx_sync:=false
