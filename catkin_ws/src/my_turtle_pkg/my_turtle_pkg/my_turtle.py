import rclpy
from rclpy.node import Node
from rclpy.timer import Timer
from turtlesim.msg import Pose
from std_msgs.msg import Float32MultiArray

class TurtlePoseSubscriberPublisher(Node):
    def __init__(self):
        super().__init__('turtle_pose_sub_pub')
        self.subscription = self.create_subscription(
            Pose,
            'turtle1/pose',
            self.listener_callback,
            10)
        self.publisher = self.create_publisher(Float32MultiArray, 'turtle1/xy_coordinates', 10)
        self.last_x = None
        self.last_y = None
        self.pose_changed = False
        self.timer = self.create_timer(0.2, self.publish_coordinates)

    def listener_callback(self, msg):
        x = round(msg.x, 2)
        y = round(msg.y, 2)
        if x != self.last_x or y != self.last_y:
            self.last_x = x
            self.last_y = y
            self.pose_changed = True

    def publish_coordinates(self):
        if self.pose_changed:
            coordinates = Float32MultiArray(data=[self.last_x, self.last_y])
            self.publisher.publish(coordinates)
            self.get_logger().info(f'Received coordinates (x, y): ({self.last_x}, {self.last_y})')
            self.pose_changed = False

def main(args=None):
    rclpy.init(args=args)
    node = TurtlePoseSubscriberPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
