#!/bin/bash

# 更新套件並安裝必要工具
echo "Updating system and installing dependencies..."
sudo apt-get update
sudo apt-get install -y python3-pip
sudo apt-get --reinstall install python3-requests -y

# 設定 Python3 別名
echo "Setting alias for Python..."
if ! grep -q "alias python=python3" ~/.bashrc; then
  echo "alias python=python3" >> ~/.bashrc
  source ~/.bashrc
fi

# 安裝 Flask
echo "Installing Flask..."
pip install Flask

# 啟動 ROS 2 環境
echo "Sourcing ROS 2 setup..."
source /opt/ros/humble/setup.bash  # 更新為適用於 ROS 2 的版本 (Humble)

# 啟動 ROS 2 工作區的 setup.bash
source /home/main-ws/install/setup.bash  # 修改為你的 ROS 2 工作區路徑

# 啟動 Flask 應用程式
echo "Starting Flask app..."
cd /home/main-ws/src/flask_esp/src  # 修改為你的 Flask 應用所在的路徑
python3 main.py &  # 背景執行 Flask 應用程式

# 啟動按鈕狀態 publisher
echo "Starting button press publisher script..."
cd /home/main-ws/src/flask_esp
ros2 run flask_esp button_press_publisher.py --ros-args --log-level WARN & # 背景執行 publisher 應用程式

# # 啟動按鈕邏輯腳本
# echo "Starting button logic script..."
# /home/main-ws/button_logic.sh  # 執行按鈕邏輯腳本
