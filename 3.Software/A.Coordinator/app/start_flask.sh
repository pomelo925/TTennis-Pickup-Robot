#!/bin/bash

# 啟動 ROS 2 環境
echo "Sourcing ROS 2 setup..."
source /opt/ros/humble/setup.bash &> /dev/null  # 重定向標準輸出與錯誤輸出

# 啟動 ROS 2 工作區的 setup.bash
source /home/main-ws/install/setup.bash &> /dev/null  # 修改為你的 ROS 2 工作區路徑

# 啟動 Flask 應用程式
echo "Starting Flask app..."
cd /home/main-ws/src/flask_esp/src  # 修改為你的 Flask 應用所在的路徑
python3 main.py &> /dev/null &  # 背景執行 Flask 應用程式，並將其輸出重定向到 /dev/null

# 啟動按鈕狀態 publisher
echo "Starting button press publisher script..."
cd /home/main-ws/src/flask_esp
ros2 run flask_esp button_press_publisher.py --ros-args --log-level WARN &> /dev/null &  # 背景執行 publisher 應用程式，並將其輸出重定向到 /dev/null

# 啟動按鈕邏輯腳本
echo "Starting button logic script..."
/home/app/button_logic.sh  # 執行按鈕邏輯腳本，並將其輸出重定向到 /dev/null
