#include "conference/nav.hpp"
#include "conference/intake.hpp"
#include "conference/elevator.hpp"
#include "conference/basket.hpp"

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("demo_retrieval_supply");

  Nav::init(node);
  Intake::init(node);
  Elevator::init(node);
  Basket::init(node);


  // 逆時鐘轉 2 秒
  Nav::counter_clockwise(1000);
  // 直走 1 秒
  Nav::move_straight(1000);
  // 順時鐘轉 2 秒
  Nav::clockwise(1000);

  rclcpp::shutdown();
  return 0;
}