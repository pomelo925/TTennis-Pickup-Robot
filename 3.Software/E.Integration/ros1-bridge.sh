#!/bin/bash

## 0. clean container within same group
docker compose -p communication down --volumes --remove-orphans

## 1. build image
echo "[INTEGRATION] Building..."
cd docker
docker compose -p communication build

## 2. deployment
echo "[INTEGRATION] Deploying..."
xhost +local:docker
docker compose -p communication up -d 