# turtle_xy_subscriber/xy_subscriber.py

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray

class XYSubscriber(Node):
    def __init__(self):
        super().__init__('xy_subscriber')
        self.subscription = self.create_subscription(
            Float32MultiArray,
            'turtle1/xy_coordinates',
            self.listener_callback,
            10)
        self.subscription  # 防止未使用变量警告

    def listener_callback(self, msg):
        x, y = msg.data
        self.get_logger().info(f'Received coordinates (x, y): ({x}, {y})')

def main(args=None):
    rclpy.init(args=args)
    node = XYSubscriber()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

