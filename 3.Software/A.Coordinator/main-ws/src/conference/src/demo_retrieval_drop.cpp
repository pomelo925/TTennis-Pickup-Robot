#include "conference/nav.hpp"
#include "conference/intake.hpp"
#include "conference/basket.hpp"
#include "conference/elevator.hpp"

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("demo_retrieval_drop");

  Nav::init(node);
  Intake::init(node);
  Elevator::init(node);
  Basket::init(node);

/*********/
  // 加入延遲，穩定初始狀態
  rclcpp::sleep_for(std::chrono::milliseconds(500)); // 延遲 500 毫秒

  /* 移動到置球架，並收集球 */

  // 開啟 intake 機構
  Intake::turn_on(2000);
  // 直走 5.5 秒
  Nav::move_straight(5000);
  // // 順時針旋轉
  Nav::clockwise(4000);
  // 關閉 intake 機構
  Intake::turn_on(3200, 2500);
  Intake::turn_on(0);

  /* 升降集球倉並開啟閘門放球 */

  // 升起集球倉
  Elevator::set_mode(1);
  // 打開閘門
  Basket::turn_on(true);
  // 關閉閘門
  Basket::turn_on(false);
  // 降下集球倉
  Elevator::set_mode(2);

  /* 移動回原位 */
  // 直走 5.5 秒
  Nav::move_straight(3000);
  
/*********/

  rclcpp::shutdown();
  return 0;
}