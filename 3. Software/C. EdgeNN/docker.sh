#!/bin/bash

## clean container
docker compose -p edge-nn down --volumes --remove-orphans

## image build
docker compose -p edge-nn -f docker/compose-build.yml build
docker compose -p edge-nn -f docker/compose-build.yml down --volumes --remove-orphans

## startup
export DISPLAY=localhost:10.0
docker compose -p edge-nn -f docker/compose-run.yml up -d