#!/bin/bash

## 0. clean container within same group
echo "=== [COORDINATOR] Pull & Run ==="
echo "[COORDINATOR] Remove Containers ..."
docker compose -p coordinator down --volumes --remove-orphans

## 1. make scripts & library executable
find ../A.Coordinator -type f -name "*.sh" -exec sudo chmod +x {} \;

## 2. environment setup
export COMMAND="exec bash"
export DISPLAY=:0
xhost +local:docker
cd docker

## 3. build image
echo "[COORDINATOR] Pull Images ..."
docker pull pomelo925/ttennis-humble:coordinator

## 4. deploymentd
echo "[COORDINATOR] Deploying..."
docker compose -p coordinator up -d