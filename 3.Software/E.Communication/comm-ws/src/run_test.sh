# start up
source /opt/ros/noetic/setup.bash

# run
rostopic pub -1 /cmd_vel geometry_msgs/Twist '[0.3, 0.0, 0.0]' '[0.0, 0.0, 0.0]' &
# continue in 3 second
sleep 3
# Ctrl+C
kill $!

# stop
rostopic pub -1 /cmd_vel geometry_msgs/Twist '[0.0, 0.0, 0.0]' '[0.0, 0.0, 0.0]' &
# wait for 1 second
sleep 1
# Ctrl+C
kill $!
