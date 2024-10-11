#!/bin/bash

## 1. make scripts & library executable
echo "=== [COMMUNICATION] ==="
find ../E.Communication -type f -name "*.sh" -exec sudo chmod +x {} \;

## 2. environment setup  
export DISPLAY=:0
xhost +local:docker
cd docker

## 3. deployment
echo "[COMMUNICATION] Deploying..."
docker compose -p communication up -d