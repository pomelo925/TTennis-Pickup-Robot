# CMake generated Testfile for 
# Source directory: /home/nav2-ws/src/navigation2/nav2_system_tests/src/behaviors/backup
# Build directory: /home/nav2-ws/build/nav2_system_tests/src/behaviors/backup
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_backup_recovery "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/nav2-ws/build/nav2_system_tests/test_results/nav2_system_tests/test_backup_recovery.xml" "--package-name" "nav2_system_tests" "--generate-result-on-success" "--env" "TEST_MAP=/home/nav2-ws/src/navigation2/nav2_system_tests/maps/map_circular.yaml" "TEST_EXECUTABLE=/home/nav2-ws/build/nav2_system_tests/src/behaviors/backup/test_backup_behavior_node" "TEST_WORLD=/home/nav2-ws/src/navigation2/nav2_system_tests/worlds/turtlebot3_ros2_demo.world" "GAZEBO_MODEL_PATH=/home/nav2-ws/src/navigation2/nav2_system_tests/models" "BT_NAVIGATOR_XML=navigate_to_pose_w_replanning_and_recovery.xml" "--command" "/home/nav2-ws/src/navigation2/nav2_system_tests/src/behaviors/backup/test_backup_behavior_launch.py")
set_tests_properties(test_backup_recovery PROPERTIES  TIMEOUT "180" WORKING_DIRECTORY "/home/nav2-ws/build/nav2_system_tests/src/behaviors/backup" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/nav2-ws/src/navigation2/nav2_system_tests/src/behaviors/backup/CMakeLists.txt;12;ament_add_test;/home/nav2-ws/src/navigation2/nav2_system_tests/src/behaviors/backup/CMakeLists.txt;0;")
