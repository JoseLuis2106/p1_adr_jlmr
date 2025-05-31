import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from sensor_msgs.msg import NavSatFix
import numpy as np

class SimplePublisher(Node):
    def __init__(self):
        super().__init__("simple_publisher")
        self.publisher = (
        # self.create_publisher(String , "topic" , 10))
        self.create_publisher(NavSatFix , "topic" , 10))
        self.timer = (
        self.create_timer(1.0, self.publishmessage))
        self.latTab=np.concatenate((np.linspace(37.41, 37.42, 50), np.linspace(37.42, 37.41, 50)))
        self.lonTab=np.concatenate((np.linspace(-6.01, -5.99, 50), np.linspace(-5.99, -6.01, 50)))
        self.i=0

    def publishmessage(self):
        # msg=String()
        # msg.data="Hola desde ROS2"

        if self.i<len(self.latTab)-1:
            self.i+=1
        else:
            self.i=0

        msg=NavSatFix()
        msg.latitude=self.latTab[self.i]
        msg.longitude=self.lonTab[self.i]
        msg.altitude=50.0

        self.publisher.publish(msg)
        self.get_logger().warn("Mensaje enviado.")
        # self.get_logger().info(f"Publicando: \n{msg.data}")
        self.get_logger().info(f"Publicando: \nLat:{msg.latitude:.4f}º, Long:{msg.longitude:.4f}º, Alt:{msg.altitude}m")


def main():
    rclpy.init()
    node=SimplePublisher()
    rclpy.spin(node)

if __name__=='__main__':
    main()