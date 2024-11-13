#!/usr/bin/env python
import rospy
import requests
from std_msgs.msg import Int32

def fetch_button_press_count():
    try:
        response = requests.get("http://192.168.50.140:5000/")  # Flask 伺服器的主頁面
        if response.status_code == 200:
            count_text = response.text.split(": ")[1]
            button_press_count = int(count_text)
            return button_press_count
        else:
            rospy.logwarn(f"Failed to fetch button press count, status code: {response.status_code}")
            return None
    except requests.ConnectionError:
        rospy.logwarn("Connection Error. Make sure the server is running.")
        return None

def publish_button_press_count():
    rospy.init_node('button_press_publisher', anonymous=True)
    pub = rospy.Publisher('button_press_count', Int32, queue_size=10)
    rate = rospy.Rate(20)  # 每秒發佈 20 次，對應 50 毫秒

    while not rospy.is_shutdown():
        button_press_count = fetch_button_press_count()
        if button_press_count is not None:
            pub.publish(button_press_count)
            rospy.loginfo(f"Published button press count: {button_press_count}")
        rate.sleep()

if __name__ == "__main__":
    try:
        publish_button_press_count()
    except rospy.ROSInterruptException:
        pass
