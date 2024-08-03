#!/bin/bash

export DISPLAY=:0

# Change to the specified directory
cd ttennis-app || exit

# Run the development server
npm run dev &

# Get the process ID of the npm run dev command
npm_pid=$!

# Wait a few seconds to ensure the server has started
sleep 5

# Open the default web browser
xdg-open http://localhost:3000

# Wait for the npm process to finish (optional)
wait $npm_pid
