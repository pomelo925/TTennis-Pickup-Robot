#!/bin/bash

# Usage function
usage() {
  echo "usage: $0 [mode] [map_name]"
  echo "mode:"
  echo "- exploration   To explore a new environment automatically."
  echo "- localization  To load an existed map and localize itself in it."
  echo "- null          To start without running any ROS node"
  exit 1
}


# Ensure mode argument is provided
if [ $# -ne 2 ]; then
  usage
fi

# Determine the command based on the mode argument
case "$1" in
  exploration)
    COMMAND="/home/app/exploration/run.sh $2"
    ;;
  localization)
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
echo "=== [NAVIGATION] Pull & Run ==="
echo "[NAVIGATION] Remove Containers ..."
docker compose -p navigation down --volumes --remove-orphans

## 1. make scripts & library executable
find ../B.Navigation -type f -name "*.sh" -exec sudo chmod +x {} \;

## 2. environment setup  
export COMMAND 
export DISPLAY=:0
xhost +local:docker
cd docker

## 3. build image
echo "[NAVIGATION] Pull Images ..."
docker pull pomelo925/ttennis-humble:nav2

## 4. deployment
echo "[NAVIGATION] Deploying..."
docker compose -p navigation up -d 