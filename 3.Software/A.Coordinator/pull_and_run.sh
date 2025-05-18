#!/bin/bash

# Usage function
usage() {
  echo "usage: $0 [mode]"
  echo "mode:"
  echo "- nav_retrieval      Nav + Retrieval"
  echo "- retrieval_drop     Retrieval + Drop"
  echo "- retrieval_supply   Retrieval + Supply"
  echo "- intake             Only Intake"
  echo "- elevator           Only Elevator Drop"
  echo "- null               To start without running any ROS node"
  exit 1
}


# Ensure mode argument is provided
if [ $# -lt 1 ]; then
  usage
fi

# Determine the command based on the mode argument
case "$1" in
  nav_retrieval)
    COMMAND="/home/app/nav_retrieval.sh"
    ;;
  retrieval_drop)
    COMMAND="/home/app/retrieval_drop.sh"
    ;;
  retrieval_supply)
    COMMAND="/home/app/retrieval_supply.sh"
    ;;
  intake)
    COMMAND="/home/app/intake.sh"
    ;;
  elevator)
    COMMAND="/home/app/elevator.sh"
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