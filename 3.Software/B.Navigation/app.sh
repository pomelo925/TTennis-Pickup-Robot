#!/bin/bash

# Usage function
usage() {
  echo "usage: $0 [mode]"
  echo "mode:"
  echo "- exploration   To control the robot to explore the environment"
  echo "- waypoint      To navigate the robot to a specific waypoint"
  exit 1
}


# Ensure mode argument is provided
if [ $# -ne 1 ]; then
  usage
fi

# Determine the command based on the mode argument
case "$1" in
  exploration)
    COMMAND="/home/user/nav2-ws/src/app/exploration-mode/run.sh"
    ;;
  waypoint)
    COMMAND="/home/user/nav2-ws/src/app/waypoint-mode/run.sh"
    ;;
  *)
    echo "Invalid mode: $1"
    usage
    ;;
esac



## 0. clean container within same group
echo "[NAVIGATION] Removing..."
docker compose -p navigation down --volumes --remove-orphans

## 1. make scripts & library executable
find ../B.Navigation -type f -name "*.sh" -exec sudo chmod +x {} \;
find ../B.Navigation/nav2-ws/install -type f -exec chmod +x {} \;

## 2. environment setup  
export COMMAND 
export DISPLAY=:0
xhost +local:docker
cd docker

## 3. build image
echo "[NAVIGATION] Building..."
docker compose -p navigation build

## 4. deployment
echo "[NAVIGATION] Deploying..."
docker compose -p navigation up -d 