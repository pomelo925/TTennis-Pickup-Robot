#!/bin/bash

## 0. clean container within same group
docker compose -p navigation-exploration down --volumes --remove-orphans

## 1. make scripts executable
cd docker
find /home/pomelo925/TTennis-Pickup-Robot/3.Software/B.Navigation -type f -name "*.sh" -exec chmod +x {} \;

## 2. build image
# export DISPLAY=localhost:10.0
export DISPLAY=:0
echo "[NAV] Building..."
docker compose -p navigation-exploration build nav2-build

## 3. workspace compilation & wait for completion
echo "[NAV] Compiling..."
docker compose -p navigation-exploration up nav2-build
docker compose -p navigation-exploration down --volumes --remove-orphans

## 4. deployment
xhost +local:docker
echo "[NAV] Deploying..."
docker compose -p navigation-exploration up exploration-mode -d