import rclpy
from rclpy.node import Node
from interfaces.srv import Square

class SimpleService(Node):
    def __init__(self):
        super().__init__('simple_service')
        self.srv = self.create_service(Square, 'square', self.callback)
        self.get_logger().info('Servicio listo para recibir solicitudes.')

    def callback(self, request, response):
        self.get_logger().info(f'Recibido numero: {request.n}')
        response.sq = request.n ** 2
        return response

def main():
    rclpy.init()
    node = SimpleService()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
