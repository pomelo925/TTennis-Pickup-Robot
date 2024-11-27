
#!/usr/bin/env python3
import rospy 
import requests
from std_msgs.msg import Int32 

# 獲取按鈕按壓次數
def fetch_button_press_count():
    try:
        response = requests.get("http://192.168.50.140:5000/")  # Flask 伺服器的主頁面
        if response.status_code == 200:
            # 按照伺服器返回的格式解析按壓次數
            text = response.text
            counts = text.split(", ")
            button1_count = int(counts[0].split(": ")[1])
            button2_count = int(counts[1].split(": ")[1])
            return button1_count, button2_count
        else:
            rospy.logwarn(f"Failed to fetch button press count, status code: {response.status_code}")
            return None, None
    except requests.ConnectionError:
        rospy.logwarn("Connection Error. Make sure the server is running.")
        return None, None

# 發佈按鈕按壓次數到 ROS topic
def publish_button_press_count():
    rospy.init_node('button_press_publisher', anonymous=True)
    pub_button1 = rospy.Publisher('button1_press_count', Int32, queue_size=10)
    pub_button2 = rospy.Publisher('button2_press_count', Int32, queue_size=10)
    rate = rospy.Rate(20)  # 每秒發佈 20 次，對應 50 毫秒

    while not rospy.is_shutdown():
        button1_count, button2_count = fetch_button_press_count()
        if button1_count is not None and button2_count is not None:
            pub_button1.publish(button1_count)
            pub_button2.publish(button2_count)
            rospy.loginfo(f"Published button1 count: {button1_count}, button2 count: {button2_count}")
        rate.sleep()

if __name__ == "__main__":
    try:
        publish_button_press_count()
    except rospy.ROSInterruptException:
        pass
