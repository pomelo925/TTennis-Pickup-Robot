#!/bin/bash

## 0. clean container within same group
echo "[COMMUNICATION] Removing..."
docker compose -p communication down --volumes --remove-orphans

## 1. make scripts & library executable
find ../E.Communication -type f -name "*.sh" -exec sudo chmod +x {} \;

## 2. environment setup  
export DISPLAY=:0
xhost +local:docker
cd docker

## 3. build image
echo "[communication] Building..."
docker compose -p communication build

## 4. deployment
echo "[communication] Deploying..."
docker compose -p communication up -d