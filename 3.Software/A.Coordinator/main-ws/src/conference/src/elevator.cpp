#include "conference/elevator.hpp"

rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr Elevator::cmd_elevator_pub_;
rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr Elevator::cmd_elevatorDoor_pub_;

rclcpp::Node::SharedPtr Elevator::node_ = nullptr;


/**
 * @brief 初始化 Elevator，提供共享節點指標
 * @param node ROS2 節點
 */
void Elevator::init(const rclcpp::Node::SharedPtr &node) {
  if (!cmd_elevator_pub_ || !cmd_elevatorDoor_pub_) {
    node_ = node;
    cmd_elevator_pub_ = node_->create_publisher<std_msgs::msg::Int32>("/cmd_elevator", 10);
    cmd_elevatorDoor_pub_ = node_->create_publisher<std_msgs::msg::Bool>("/cmd_elevatorDoor", 10);
    RCLCPP_INFO(node_->get_logger(), "Elevator initialized with shared publisher.");
  } else {
    RCLCPP_WARN(node_->get_logger(), "Elevator already initialized.");
  }
  
  return;
}


/**
 * @brief 發布開啟或關閉吸取
 * @param is_on 開啟(true) 或關閉(false)
 * @param duration_ms 時間
 */
void Elevator::_publish_on(bool is_on, int duration_ms) {
  std_msgs::msg::Bool msg;
  msg.data = is_on ? 1 : 0;

  auto start_time = std::chrono::steady_clock::now();
  auto end_time = start_time + std::chrono::milliseconds(duration_ms);

  while (std::chrono::steady_clock::now() < end_time) {
    cmd_elevatorDoor_pub_->publish(msg);
    rclcpp::sleep_for(std::chrono::milliseconds(100));
  }
  
  return;
}


/**
 * @brief 開啟或關閉吸取
 * @param is_on 開啟(true) 或關閉(false)
 */
void Elevator::door_on(bool is_on) {
  if (is_on) {
    _publish_on(is_on, _door_on_time_ms);
  }
  else {
    _publish_on(is_on, _door_off_time_ms);
  }
  return;
}


/**
 * @brief 發布整數
 * @param mode 整數
 * @param duration_ms 時間
 */
void Elevator::_publish_int(int mode, int duration_ms) {
  std_msgs::msg::Int32 msg;
  msg.data = mode;

  auto start_time = std::chrono::steady_clock::now();
  auto end_time = start_time + std::chrono::milliseconds(duration_ms);

  while (std::chrono::steady_clock::now() < end_time) {
    cmd_elevator_pub_->publish(msg);
    rclcpp::sleep_for(std::chrono::milliseconds(100));
  }
  
  return;
}


/**
 * @brief 設置 Elevator 模式，支援自定義持續時間
 * @param mode 運行模式 (1: 上升, 2: 下降, 其他: 停止)
 * @param duration_ms 持續時間 (預設為 0，表示使用內部預設時間)
 */
void Elevator::set_mode(int mode, int duration_ms) {
  int duration_to_use = 0; // 實際使用的持續時間
  
  if (duration_ms > 0) {
    // 若有指定 duration_ms，則優先使用
    duration_to_use = duration_ms;
  } else {
    // 否則根據 mode 使用預設時間
    if (mode == 1) {
      duration_to_use = _elevator_rise_time_ms;
    } else if (mode == 2) {
      duration_to_use = _elevator_decline_time_ms;
    } else if (mode == 3){
      duration_to_use = _elevator_stop_time_ms;
    } else {
      duration_to_use = 500;
    }
  }

  // 發佈消息
  _publish_int(mode, duration_to_use);
  return;
}


