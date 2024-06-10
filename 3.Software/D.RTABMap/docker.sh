#!/bin/bash

## clean container
docker compose -p rtabmap down --volumes --remove-orphans

# executable
find /home/pomelo925/TTennis-Pickup-Robot/3.Software/D.RTABMap -type f -name "*.sh" -exec chmod +x {} \;

## image build
docker compose -p rtabmap -f docker/compose-build.yml build
docker compose -p rtabmap -f docker/compose-build.yml down --volumes --remove-orphans

## startup
export DISPLAY=localhost:10.0
docker compose -p rtabmap -f docker/compose-run.yml up -d