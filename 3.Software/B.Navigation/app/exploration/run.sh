#!/bin/bash

## 0. Define the variables
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
    ros2 launch foxglove_bridge foxglove_bridge_launch.xml address:=127.0.0.1 port:=10000 &
    sleep 3
fi

tail -f /dev/null
