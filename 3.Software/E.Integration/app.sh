#!/bin/bash

## 0. clean container within same group
echo "[INTEGRATION] Removing..."
docker compose -p integration down --volumes --remove-orphans

## 1. make scripts & library executable
find ../E.Integration -type f -name "*.sh" -exec sudo chmod +x {} \;

## 2. environment setup  
export DISPLAY=:0
xhost +local:docker
cd docker

## 3. build image
echo "[INTEGRATION] Building..."
docker compose -p integration build

## 3. deployment
echo "[INTEGRATION] Deploying..."
docker compose -p integration up -d