#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <termios.h>
#include <unistd.h>
#include <iostream>

using namespace std::chrono_literals;

constexpr double MAX_LINEAR_SPEED = 0.15;
constexpr double MAX_ANGULAR_SPEED = 0.1;

class TeleopCmdVel : public rclcpp::Node{
public:
  TeleopCmdVel(): Node("teleop_cmd_vel"){
    publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);
    timer_ = this->create_wall_timer(50ms, std::bind(&TeleopCmdVel::publish_velocity, this));
  }

private:
  void publish_velocity(){
    char c = getKey();
    geometry_msgs::msg::Twist msg;
    switch (c){
    case 'w':
      msg.linear.x = MAX_LINEAR_SPEED;
      break;
    case 'a':
      msg.angular.z = MAX_ANGULAR_SPEED;
      break;
    case 'd':
      msg.angular.z = -MAX_ANGULAR_SPEED;
      break;
    case 's':
      msg.linear.x = -MAX_LINEAR_SPEED;
      break;
    default:
      msg.linear.x = 0.0;
      msg.angular.z = 0.0;
      break;
    }
    publisher_->publish(msg);
  }
  
  char getKey(){
    struct termios oldt, newt;
    char c;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    c = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return c;
  }
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[]){
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TeleopCmdVel>());
  rclcpp::shutdown();
  return 0;
}
