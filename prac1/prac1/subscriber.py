import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from sensor_msgs.msg import NavSatFix

class SimpleSubscriber (Node):
    def __init__(self):
        super().__init__("simple_subscriber")
        self.subscription = (
        # self.create_subscription (String , "topic" , self.callback , 10))
        self.create_subscription (NavSatFix , "topic" , self.callback , 10))
    def callback ( self , msg):
        self.get_logger().warn("Mensaje recibido.")
        # self.get_logger().info(f"Recibido: \n{msg.data}")
        self.get_logger().info(f"Recibido: \nLat:{msg.latitude:.4f}º, Long:{msg.longitude:.4f}º, Alt:{msg.altitude}m")

def main():
    rclpy.init()
    node = SimpleSubscriber()
    rclpy.spin(node)

if __name__=='__main__':
    main()