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
    if [ -f "./../D.RTABMap/app/_map_database/$2.db" ]; then
      echo "Map $2 already exists. Please enter a new map name."
      exit 1
    fi
    COMMAND="/home/app/exploration/run.sh $2"
    ;;
  localization)
    if [ ! -f "./../D.RTABMap/app/_map_database/$2.db" ]; then
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
echo "=== [NAVIGATION] Build & Run ==="
echo "[NAVIGATION] Remove Containers ..."
docker compose -p navigation down --volumes --remove-orphans

## 1. make scripts & library executable
find ../B.Navigation -type f -name "*.sh" -exec sudo chmod +x {} \;
find ../B.Navigation/nav2-ws/install -type f -exec sudo chmod +x {} \;

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