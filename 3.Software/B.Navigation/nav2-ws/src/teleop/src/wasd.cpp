#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <termios.h>
#include <unistd.h>
#include <sys/select.h>
#include <iostream>
#include <chrono>

class TeleopTurtle : public rclcpp::Node
{
public:
  TeleopTurtle()
  : Node("teleop_turtle")
  {
    publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);
    max_linear_speed_ = 2.0;
    max_angular_speed_ = 2.0;

    // 設置終端
    tcgetattr(STDIN_FILENO, &old_tio_);
    new_tio_ = old_tio_;
    new_tio_.c_lflag &= (~ICANON & ~ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &new_tio_);

    // 顯示提示操作文字
    std::cout << "Use WASD keys to control the turtle. Press Q to quit." << std::endl;

    // 主循環
    while (rclcpp::ok()) {
      char c = 0;
      if (kbhit()) {
        c = getchar();
      }

      double linear_speed = 0.0;
      double angular_speed = 0.0;

      switch (c) {
        case 'w': linear_speed = max_linear_speed_; break;
        case 's': linear_speed = -max_linear_speed_; break;
        case 'a': angular_speed = max_angular_speed_; break;
        case 'd': angular_speed = -max_angular_speed_; break;
        case 'q': rclcpp::shutdown(); break;
        default:
          linear_speed = 0.0;
          angular_speed = 0.0;
          break;
      }

      auto msg = geometry_msgs::msg::Twist();
      msg.linear.x = linear_speed;
      msg.angular.z = angular_speed;
      publisher_->publish(msg);
      // 更新間隔改為 300 毫秒
      rclcpp::sleep_for(std::chrono::milliseconds(100)); 
    }

    // 恢復終端設置
    tcsetattr(STDIN_FILENO, TCSANOW, &old_tio_);
  }

private:
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
  struct termios old_tio_, new_tio_;
  double max_linear_speed_;
  double max_angular_speed_;

  bool kbhit()
  {
    struct timeval tv;
    fd_set read_fd;

    tv.tv_sec = 0;
    tv.tv_usec = 0;
    FD_ZERO(&read_fd);
    FD_SET(STDIN_FILENO, &read_fd);

    if (select(STDIN_FILENO + 1, &read_fd, NULL, NULL, &tv) == -1) return false;
    if (FD_ISSET(STDIN_FILENO, &read_fd)) return true;

    return false;
  }
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<TeleopTurtle>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}