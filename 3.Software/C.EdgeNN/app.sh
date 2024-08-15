#!/bin/bash

# Usage function
usage() {
  echo "usage: $0 [mode]"
  echo "mode:"
  echo "- picture       To take a picture"
  echo "- null          To start without running any ROS node"
  exit 1
}


# Ensure mode argument is provided
if [ $# -ne 1 ]; then
  usage
fi

# Determine the command based on the mode argument
case "$1" in
  picture)
    COMMAND="/home/edgeNN-ws/src/app/picture-mode/run.sh"
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
echo "[EdgeNN] Removing..."
docker compose -p edgenn down --volumes --remove-orphans

## 1. make scripts & library executable
find ../C.EdgeNN -type f -name "*.sh" -exec sudo chmod +x {} \;

## 2. environment setup  
sudo udevadm control --reload-rules && sudo udevadm trigger

export COMMAND 
export DISPLAY=:0
xhost +local:docker
cd docker

## 2. build image
echo "[EdgeNN] Building..."
docker compose -p edgenn build

## 3. deployment
echo "[EdgeNN] Deploying..."
docker compose -p edgenn up -d 