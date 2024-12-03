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
  // // 加入延遲，穩定初始狀態
  rclcpp::sleep_for(std::chrono::milliseconds(500)); // 延遲 500 毫秒

  /* 移動到球桌旁，並收集球 */

  // 開啟 intake 機構
  Intake::turn_on(true);
  // 直走 5.5 秒
  Nav::move_straight(3000);
  // // 順時針旋轉
  // Nav::clockwise(2000);
  // 關閉 intake 機構
  Intake::turn_on(false);

  /* 升降集球倉，讓球員拿球 */

  // 升起集球倉 4 秒
  Elevator::set_mode(1, 4000);
  // 停在上面，等球員拿球
  Elevator::set_mode(3);
  // 降下集球倉
  Elevator::set_mode(2);

  /* 移動回原位 */
  // 直走 5.5 秒
  Nav::move_straight(3000);
  
/*********/

  rclcpp::shutdown();
  return 0;
}