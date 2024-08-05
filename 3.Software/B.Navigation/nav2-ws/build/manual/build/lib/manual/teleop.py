import threading
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import sys
import termios
import tty

LINEAR_SPEED = 0.2
ANGULAR_SPEED = 0.5

class TeleopNode(Node):
    def __init__(self):
        super().__init__('teleop_node')
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)
        self.twist = Twist()

    def set_speed(self, linear, angular):
        self.twist.linear.x = linear
        self.twist.angular.z = angular
        self.publisher_.publish(self.twist)
        self.get_logger().info(f'Current state: linear.x={self.twist.linear.x}, angular.z={self.twist.angular.z}')

    def stop(self):
        self.set_speed(0.0, 0.0)

def get_key():
    fd = sys.stdin.fileno()
    old_settings = termios.tcgetattr(fd)
    try:
        tty.setraw(sys.stdin.fileno())
        key = sys.stdin.read(1)
        if key == '\x1b':
            key += sys.stdin.read(2)  # 讀取方向鍵的後續兩個字元
    finally:
        termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)
    return key

def handle_key(node, key):
    actions = {
        '\x1b[A': (LINEAR_SPEED, 0.0),  # Up arrow key
        '\x1b[B': (-LINEAR_SPEED, 0.0), # Down arrow key
        '\x1b[D': (0.0, ANGULAR_SPEED), # Left arrow key
        '\x1b[C': (0.0, -ANGULAR_SPEED),# Right arrow key
        'w': (LINEAR_SPEED, 0.0),       # W key
        's': (-LINEAR_SPEED, 0.0),      # S key
        'a': (0.0, ANGULAR_SPEED),      # A key
        'd': (0.0, -ANGULAR_SPEED),     # D key
        ' ': (0.0, 0.0),                # Space key
        'q': (0.0, 0.0)                 # Q key
    }
    if key in actions:
        linear, angular = actions[key]
        node.set_speed(linear, angular)
    else:
        node.stop()

def main():
    rclpy.init()
    node = TeleopNode()

    # 創建一個新的線程來運行ROS 2的執行循環
    ros_thread = threading.Thread(target=rclpy.spin, args=(node,))
    ros_thread.daemon = True
    ros_thread.start()

    node.get_logger().info('Teleop node started. Use WASD or arrow keys to control the robot, space or q to quit.')

    try:
        while True:
            key = get_key()
            if key == 'q' or key == ' ':
                node.stop()
                break
            handle_key(node, key)
    except Exception as e:
        print(e)
    finally:
        # 清理並關閉ROS 2節點
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()