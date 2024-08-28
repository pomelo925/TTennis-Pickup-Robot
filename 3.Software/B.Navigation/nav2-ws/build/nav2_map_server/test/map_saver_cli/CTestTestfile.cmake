# CMake generated Testfile for 
# Source directory: /home/nav2-ws/src/navigation2/nav2_map_server/test/map_saver_cli
# Build directory: /home/nav2-ws/build/nav2_map_server/test/map_saver_cli
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_map_saver_cli "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/nav2-ws/build/nav2_map_server/test_results/nav2_map_server/test_map_saver_cli.gtest.xml" "--package-name" "nav2_map_server" "--output-file" "/home/nav2-ws/build/nav2_map_server/ament_cmake_gtest/test_map_saver_cli.txt" "--command" "/home/nav2-ws/build/nav2_map_server/test/map_saver_cli/test_map_saver_cli" "--gtest_output=xml:/home/nav2-ws/build/nav2_map_server/test_results/nav2_map_server/test_map_saver_cli.gtest.xml")
set_tests_properties(test_map_saver_cli PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nav2-ws/build/nav2_map_server/test/map_saver_cli/test_map_saver_cli" TIMEOUT "60" WORKING_DIRECTORY "/home/nav2-ws/build/nav2_map_server/test/map_saver_cli" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/nav2-ws/src/navigation2/nav2_map_server/test/map_saver_cli/CMakeLists.txt;4;ament_add_gtest;/home/nav2-ws/src/navigation2/nav2_map_server/test/map_saver_cli/CMakeLists.txt;0;")
