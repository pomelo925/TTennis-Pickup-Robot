#include "conference/nav.hpp"
#include "conference/intake.hpp"
#include "conference/elevator.hpp"
#include "conference/basket.hpp"

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("demo_intake");

  Nav::init(node);
  Intake::init(node);
  Elevator::init(node);
  Basket::init(node);

/*********/

  // 加入延遲，穩定初始狀態
  rclcpp::sleep_for(std::chrono::milliseconds(500)); // 延遲 500 毫秒
  
  // 開啟 intake 機構
  Intake::turn_on(2800, 180000);
  Intake::turn_on(0);

/*********/

  rclcpp::shutdown();
  return 0;
}