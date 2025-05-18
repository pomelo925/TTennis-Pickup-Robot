#include "conference/nav.hpp"
#include "conference/intake.hpp"
#include "conference/elevator.hpp"
#include "conference/basket.hpp"

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("demo_elevator");

  Nav::init(node);
  Intake::init(node);
  Elevator::init(node);
  Basket::init(node);

/*********/

  // 加入延遲，穩定初始狀態
  rclcpp::sleep_for(std::chrono::milliseconds(500)); // 延遲 500 毫秒
  
  /* 升降集球倉並開啟閘門放球 */

  // 升起集球倉
  Elevator::set_mode(1);
  // 打開閘門
  Basket::turn_on(true);
  // 關閉閘門
  Basket::turn_on(false);
  // 降下集球倉
  Elevator::set_mode(2);

/*********/

  rclcpp::shutdown();
  return 0;
}