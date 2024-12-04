#!/bin/bash

# 更新套件並安裝必要工具
echo "Updating system and installing dependencies..."
sudo apt-get update
sudo apt-get install -y python3-pip
sudo apt-get --reinstall install python3-requests

# 設定 Python3 別名
echo "Setting alias for Python..."
if ! grep -q "alias python=python3" ~/.bashrc; then
  echo "alias python=python3" >> ~/.bashrcc
  source ~/.bashrc
fi

# 安裝 Flask
echo "Installing Flask..."
pip install Flask

# 啟動 ROS 環境
echo "Sourcing ROS setup..."
source devel/setup.bash

# 啟動 Flask 應用程式
echo "Starting Flask app..."
cd src/flask_esp8266/src
python3 app.py &  # 背景執行 Flask 應用程式

# 啟動按鈕狀態發布腳本
echo "Starting button press publisher script..."
python3 /root/comm-ws/src/flask_esp8266/scripts/button_press_publisher.py
