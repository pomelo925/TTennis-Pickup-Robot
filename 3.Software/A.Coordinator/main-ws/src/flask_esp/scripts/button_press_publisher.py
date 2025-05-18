#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32
import requests

class ButtonPressPublisher(Node):
    def __init__(self):
        super().__init__('button_press_publisher')
        self.pub_button1 = self.create_publisher(Int32, 'button1_press_count', 10)
        self.pub_button2 = self.create_publisher(Int32, 'button2_press_count', 10)
        self.timer = self.create_timer(0.05, self.publish_button_press_count)  # 每50毫秒執行一次

    def fetch_button_press_count(self):
        try:
            response = requests.get("http://172.20.10.9:5000/")  # Flask 伺服器的主頁面
            if response.status_code == 200:
                # 按照伺服器返回的格式解析按壓次數
                text = response.text
                counts = text.split(", ")
                button1_count = int(counts[0].split(": ")[1])
                button2_count = int(counts[1].split(": ")[1])
                return button1_count, button2_count
            else:
                self.get_logger().warn(f"Failed to fetch button press count, status code: {response.status_code}")
                return None, None
        except requests.ConnectionError:
            self.get_logger().warn("Connection Error. Make sure the server is running.")
            return None, None

    def publish_button_press_count(self):
        button1_count, button2_count = self.fetch_button_press_count()
        if button1_count is not None and button2_count is not None:
            self.pub_button1.publish(Int32(data=button1_count))
            self.pub_button2.publish(Int32(data=button2_count))
            self.get_logger().info(f"Published button1 count: {button1_count}, button2 count: {button2_count}")


def main(args=None):
    rclpy.init(args=args)
    node = ButtonPressPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
