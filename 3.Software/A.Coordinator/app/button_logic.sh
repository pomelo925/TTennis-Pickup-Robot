#!/bin/bash
source /opt/ros/humble/setup.bash  # 更新為適用於 ROS 2 的版本 (Humble)
source /home/main-ws/install/setup.bash  # 修改為你的 ROS 2 工作區路徑

# 初始化變數
READY_SCRIPT=""
LAST_BUTTON1_COUNT=0
LAST_BUTTON2_COUNT=0

# 訂閱 ROS 2 按鈕 topic
echo "Subscribing to ROS 2 topics for button logic..."

while true; do
  # 獲取最新的按鈕數值
  BUTTON1_COUNT=$(ros2 topic echo /button1_press_count --once | grep 'data:' | awk '{print $2}')
  BUTTON2_COUNT=$(ros2 topic echo /button2_press_count --once | grep 'data:' | awk '{print $2}')

  # 確保在腳本啟動時不會誤觸發
  if [[ "$BUTTON1_COUNT" == "$LAST_BUTTON1_COUNT" && "$BUTTON2_COUNT" == "$LAST_BUTTON2_COUNT" ]]; then
    sleep 0.1
    continue
  fi

  # 按鈕一：準備執行腳本
  if [[ "$BUTTON1_COUNT" != "$LAST_BUTTON1_COUNT" ]]; then
    MOD_RESULT=$((BUTTON1_COUNT % 3))
    case $MOD_RESULT in
      1) READY_SCRIPT="/home/app/nav_retrieval.sh" ;;
      2) READY_SCRIPT="/home/app/retrieval_drop.sh" ;;
      0) READY_SCRIPT="/home/app/retrieval_supply.sh" ;;
    esac
    echo "Script prepared: $READY_SCRIPT"
    LAST_BUTTON1_COUNT="$BUTTON1_COUNT"
  fi

  # 按鈕二：執行已準備的腳本
  if [[ "$BUTTON2_COUNT" != "$LAST_BUTTON2_COUNT" && -n "$READY_SCRIPT" ]]; then
    echo "Executing script: $READY_SCRIPT"
    bash "$READY_SCRIPT"
    READY_SCRIPT=""
    LAST_BUTTON2_COUNT="$BUTTON2_COUNT"
  fi

  echo "Script End..."
  # 暫停片刻避免高 CPU 使用率
  sleep 0.1
done
