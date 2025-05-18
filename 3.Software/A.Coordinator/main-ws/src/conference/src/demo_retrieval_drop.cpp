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
  rclcpp::sleep_for(std::chrono::milliseconds(1000)); // 延遲 1000 毫秒

  /* 移動到置球架，並收集球 */

  // 開啟 intake 機構
  Intake::turn_on(2300);
  
  // 直走
  Nav::move_straight(8300);
  // 逆時針旋轉
  Nav::counter_clockwise(3600);
  // 直走
  Nav::move_straight(7200);
  // 逆時針旋轉
  Nav::counter_clockwise(5000);
  // 倒退
  Nav::move_backward(1000);
  
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
  // 直走
  Nav::move_straight(1000);
  // 逆時針旋轉
  Nav::counter_clockwise(4900);
  // 倒退
  Nav::move_backward(3500);
  
/*********/

  rclcpp::shutdown();
  return 0;
}