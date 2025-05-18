#include "conference/nav.hpp"
#include "conference/intake.hpp"
#include "conference/basket.hpp"
#include "conference/elevator.hpp"

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("demo_retrieval_supply");

  Nav::init(node);
  Intake::init(node);
  Elevator::init(node);
  Basket::init(node);

/*********/
  // 加入延遲，穩定初始狀態
  rclcpp::sleep_for(std::chrono::milliseconds(500)); // 延遲 500 毫秒


  /* 移動到球桌旁，並收集球 */

  // 開啟 intake 機構
  Intake::turn_on(2800);
  // 直走
  Nav::move_straight(7000);
 
  rclcpp::sleep_for(std::chrono::milliseconds(1500));


  // 關閉 Intake
  Intake::turn_on(0);
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