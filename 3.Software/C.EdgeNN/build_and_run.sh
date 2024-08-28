#!/bin/bash

# Usage function
usage() {
  echo "usage: $0 [mode]"
  echo "mode:"
  echo "- rgb2d         Turn on OAK-D & detect objects (YOLOv8) & show 2D bounding boxes"
  echo "- spatial       Turn on OAK-D & detect objects (YOLOv8) & show spatial information"
  echo "- spatial-ros   Turn on OAK-D & detect objects (YOLOv8) & publish spatial information to ROS"
  echo "- null          To start without running any node"
  exit 1
}


# Ensure mode argument is provided
if [ $# -ne 1 ]; then
  usage
fi

# Determine the command based on the mode argument
case "$1" in
  rgb2d)
    COMMAND="/home/app/rgb2d/run.sh"
    ;;
  spatial)
    COMMAND="/home/app/spatial/run.sh"
    ;;
  spatial-ros)
    COMMAND="/home/app/spatial-ros/run.sh"
    ;;
  null)
    COMMAND="/bin/bash"
    ;;
  *)
    echo "Invalid mode: $1"
    usage
    ;;
esac



## 0. clean container within same group
echo "=== [EdgeNN] Build & Run ==="
echo "[EdgeNN] Remove Containers ..."
docker compose -p edgenn down --volumes --remove-orphans

## 1. make scripts & library executable
find ../C.EdgeNN -type f -name "*.sh" -exec sudo chmod +x {} \;

## 2. environment setup  
export COMMAND 
export DISPLAY=localhost:10.0
xhost +local:docker
cd docker

## 2. build image
echo "[EdgeNN] Building..."
docker compose -p edgenn build

## 3. deployment
echo "[EdgeNN] Deploying..."
docker compose -p edgenn up -d 