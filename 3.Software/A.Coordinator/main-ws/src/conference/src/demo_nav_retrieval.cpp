#include "conference/nav.hpp"

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("demo_retrieval_supply");
  Nav::init(node);

  // 逆時鐘轉 2 秒
  Nav::counter_clockwise(2000);
  // 直走 3 秒
  Nav::move_straight(3000);
  // 順時鐘轉 2 秒
  Nav::clockwise(2000);

  rclcpp::shutdown();
  return 0;
}