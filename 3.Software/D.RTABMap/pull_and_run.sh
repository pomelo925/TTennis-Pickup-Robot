#!/bin/bash

# Usage function
usage() {
  echo "usage: $0 [mode] [map_name]"
  echo "mode:"
  echo "- exploration   To create a new map"
  echo "- localization  To localize the robot in an existing map"
  echo "- null          To start without running any ROS node"
  exit 1
}


# Ensure mode argument is provided
if [ $# -lt 2 ]; then
  usage
fi

# Determine the command based on the mode argument
case "$1" in
  exploration)
    if [ -f "./app/_map_database/$2.db" ]; then
      echo "Map '$2' already exists. Please enter a new map name."
      exit 1
    fi
    COMMAND="/home/app/exploration/run.sh $2"
    ;;
  localization)
    if [ ! -f "./app/_map_database/$2.db" ]; then
      echo "Map '$2' does not exist. Terminating."
      exit 1
    fi
    COMMAND="/home/app/localization/run.sh $2"
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
echo "=== [RTAB-MAP] Pull & Run ==="
echo "[RTAB-Map]  Remove Containers ..."
docker compose -p rtabmap down --volumes --remove-orphans

## 1. make scripts & library executable
find ../D.RTABMap -type f -name "*.sh" -exec sudo chmod +x {} \;

## 2. environment setup  
export COMMAND 
# export DISPLAY=localhost:10.0
export DISPLAY=:0
xhost +local:docker
cd docker

## 2. pull image
echo "[RTAB-Map] Pull Images ..."
docker pull pomelo925/ttennis-humble:rtabmap

## 3. deployment
echo "[RTAB-Map] Deploying ..."
docker compose -p rtabmap up -d 