#!/bin/bash

# Usage function
usage() {
  echo "usage: $0 [mode]"
  echo "mode:"
  echo "- demo1   Nav + Retrieval"
  echo "- demo2   Retrieval + Supply"
  echo "- null    To start without running any ROS node"
  exit 1
}


# Ensure mode argument is provided
if [ $# -lt 1 ]; then
  usage
fi

# Determine the command based on the mode argument
case "$1" in
  demo1)
    COMMAND="/home/app/nav_retrieval.sh"
    ;;
  demo2)
    COMMAND="/home/app/retrieval_supply.sh"
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
echo "=== [COORDINATOR] Pull & Run ==="
echo "[COORDINATOR] Remove Containers ..."
docker compose -p coordinator down --volumes --remove-orphans

## 1. make scripts & library executable
find ../A.Coordinator -type f -name "*.sh" -exec sudo chmod +x {} \;

## 2. environment setup
export COMMAND
export DISPLAY=:0
xhost +local:docker
cd docker

## 3. build image
echo "[COORDINATOR] Pull Images ..."
docker pull pomelo925/ttennis-humble:coordinator

## 4. deployment
echo "[COORDINATOR] Deploying..."
docker compose -p coordinator up -d