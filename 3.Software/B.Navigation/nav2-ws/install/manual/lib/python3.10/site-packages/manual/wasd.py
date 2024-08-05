import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from tkinter import Tk, Button

# 宣告速度量值參數
LINEAR_SPEED = 1.0
ANGULAR_SPEED = 1.0

class TeleopGUI(Node):
    def __init__(self, master):
        super().__init__('teleop_gui')
        self.master = master
        self.pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.trigger = False
        
        self.create_widgets()
        
    def create_widgets(self):
        self.forward_button = Button(self.master, text="前進", width=10, height=2)
        self.forward_button.grid(row=0, column=1)
        self.forward_button.bind('<ButtonPress>', lambda event: self.set_trigger(True, LINEAR_SPEED, 0))
        
        self.left_button = Button(self.master, text="逆時針", width=10, height=2)
        self.left_button.grid(row=1, column=0)
        self.left_button.bind('<ButtonPress>', lambda event: self.set_trigger(True, 0, ANGULAR_SPEED))
        
        self.right_button = Button(self.master, text="順時針", width=10, height=2)
        self.right_button.grid(row=1, column=2)
        self.right_button.bind('<ButtonPress>', lambda event: self.set_trigger(True, 0, -ANGULAR_SPEED))
        
        self.backward_button = Button(self.master, text="後退", width=10, height=2)
        self.backward_button.grid(row=2, column=1)
        self.backward_button.bind('<ButtonPress>', lambda event: self.set_trigger(True, -LINEAR_SPEED, 0))
        
        self.quit_button = Button(self.master, text="退出", command=self.master.quit, width=10, height=2)
        self.quit_button.grid(row=3, column=1)
        
    def set_trigger(self, state, linear, angular):
        self.trigger = state
        self.current_velocity = (linear, angular)
        if state:
            self.publish_velocity()
            self.master.after(2000, self.stop_publishing)  # 0.5秒後停止發佈速度
        
    def stop_publishing(self):
        self.trigger = False
        self.publish_velocity()
        
    def publish_velocity(self):
        twist = Twist()
        if self.trigger:
            twist.linear.x = float(self.current_velocity[0])
            twist.angular.z = float(self.current_velocity[1])
        else:
            twist.linear.x = 0.0
            twist.angular.z = 0.0
        self.pub.publish(twist)
        
def main(args=None):
    rclpy.init(args=args)
    root = Tk()
    app = TeleopGUI(root)
    root.mainloop()
    rclpy.shutdown()

if __name__ == "__main__":
    main()