# CMake generated Testfile for 
# Source directory: /root/slam-ws/src/ddynamic_reconfigure
# Build directory: /root/slam-ws/build_isolated/ddynamic_reconfigure
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_ddynamic_reconfigure_rostest_test_ddynamic_reconfigure.test "/root/slam-ws/build_isolated/ddynamic_reconfigure/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/root/slam-ws/build_isolated/ddynamic_reconfigure/test_results/ddynamic_reconfigure/rostest-test_ddynamic_reconfigure.xml" "--return-code" "/usr/bin/python3 /opt/ros/noetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/root/slam-ws/src/ddynamic_reconfigure --package=ddynamic_reconfigure --results-filename test_ddynamic_reconfigure.xml --results-base-dir \"/root/slam-ws/build_isolated/ddynamic_reconfigure/test_results\" /root/slam-ws/src/ddynamic_reconfigure/test/ddynamic_reconfigure.test ")
set_tests_properties(_ctest_ddynamic_reconfigure_rostest_test_ddynamic_reconfigure.test PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;80;add_rostest;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;119;_add_rostest_google_test;/root/slam-ws/src/ddynamic_reconfigure/CMakeLists.txt;58;add_rostest_gmock;/root/slam-ws/src/ddynamic_reconfigure/CMakeLists.txt;0;")
subdirs("gtest")
