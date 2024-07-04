#!/bin/bash

## 0. clean container within same group
docker compose -p rtabmap-mapping down --volumes --remove-orphans

## 1. make scripts executable
cd docker
find /home/pomelo925/TTennis-Pickup-Robot/3.Software/D.RTABMap -type f -name "*.sh" -exec chmod +x {} \;

## 2. build image
# export DISPLAY=localhost:10.0
export DISPLAY=:0
echo "[RTABMAP] Building..."
docker compose -p rtabmap-mapping build rtabmap-build

## 3. workspace compilation & wait for completion
echo "[RTABMAP] Compiling..."
docker compose -p rtabmap-mapping up rtabmap-build
docker compose -p rtabmap-mapping down --volumes --remove-orphans

## 4. deployment
xhost +local:docker
echo "[RTABMAP] Deploying..."
docker compose -p rtabmap-mapping up mapping-mode -d