cmake_minimum_required(VERSION 3.8)
project(conference)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)

#########################################################
# library
include_directories(include)

add_library(nav src/nav.cpp)
ament_target_dependencies(nav rclcpp geometry_msgs)

add_library(intake src/intake.cpp)
ament_target_dependencies(intake rclcpp std_msgs)

add_library(elevator src/elevator.cpp)
ament_target_dependencies(elevator rclcpp std_msgs)

add_library(basket src/basket.cpp)
ament_target_dependencies(basket rclcpp std_msgs)

# executable
add_executable(demo_nav_retrieval src/demo_nav_retrieval.cpp)
target_link_libraries(demo_nav_retrieval nav intake elevator basket)

add_executable(demo_retrieval_drop src/demo_retrieval_drop.cpp)
target_link_libraries(demo_retrieval_drop nav intake elevator basket) 

add_executable(demo_retrieval_supply src/demo_retrieval_supply.cpp)
target_link_libraries(demo_retrieval_supply nav intake elevator basket) 

add_executable(demo_intake src/demo_intake.cpp)
target_link_libraries(demo_intake nav intake elevator basket) 

add_executable(demo_elevator src/demo_elevator.cpp)
target_link_libraries(demo_elevator nav intake elevator basket) 



install(TARGETS
  nav
  intake
  elevator
  basket
  demo_nav_retrieval 
  demo_retrieval_drop
  demo_retrieval_supply
  demo_intake
  demo_elevator
  DESTINATION lib/${PROJECT_NAME})
#########################################################

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
