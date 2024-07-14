#!/bin/bash

## 0. clean container within same group
docker compose -p navigation down --volumes --remove-orphans

## 1. make scripts executable
find /home/pomelo925/TTennis-Pickup-Robot/3.Software/B.Navigation -type f -name "*.sh" -exec sudo chmod +x {} \;

## 2. build image
cd docker
export DISPLAY=:0
echo "[NAV] Building..."
docker compose -p navigation build

## 3. deployment
echo "[NAV] Deploying..."
xhost +local:docker
docker compose -p navigation up exploration -d 