#!/bin/bash

# Usage function
usage() {
  echo "usage: $0 [mode]"
  echo "mode:"
  echo "- mapping       To create a new map"
  echo "- localization  To localize the robot in an existing map"
  exit 1
}


# Ensure mode argument is provided
if [ $# -ne 1 ]; then
  usage
fi

# Determine the command based on the mode argument
case "$1" in
  mapping)
    COMMAND="/home/user/slam-ws/src/app/mapping-mode/run.sh"
    ;;
  localization)
    COMMAND="/home/user/slam-ws/src/app/localization-mode/run.sh"
    ;;
  *)
    echo "Invalid mode: $1"
    usage
    ;;
esac



## 0. clean container within same group
echo "[RTAB-Map] Removing..."
docker compose -p rtabmap down --volumes --remove-orphans

## 1. make scripts & library executable
find ../D.RTABMap -type f -name "*.sh" -exec sudo chmod +x {} \;
find ../D.RTABMap/slam-ws/install -type f -exec chmod +x {} \;

## 2. environment setup  
export COMMAND 
export DISPLAY=:0
xhost +local:docker
cd docker

## 2. build image
echo "[RTAB-Map] Building..."
docker compose -p rtabmap build

## 3. deployment
echo "[RTAB-Map] Deploying..."
docker compose -p rtabmap up -d 