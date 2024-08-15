#!/bin/bash

MAP_DIR="/home/user/slam-ws/src/app/00-map"
MAP_INDEX=1 

# Find the next available map index
while [ -e "${MAP_DIR}/map_${MAP_INDEX}.pgm" ]; do
    MAP_INDEX=$((MAP_INDEX + 1))
done

# Set the map name
MAP_NAME="map_${MAP_INDEX}"

# Use the map_saver_cli to save the map
ros2 run nav2_map_server map_saver_cli -t /rtabmap/map -f ${MAP_DIR}/${MAP_NAME}

echo "Map saved as ${MAP_DIR}/${MAP_NAME}.pgm and ${MAP_DIR}/${MAP_NAME}.yaml"
