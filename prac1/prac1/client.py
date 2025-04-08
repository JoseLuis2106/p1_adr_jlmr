import rclpy
from rclpy.node import Node
from interfaces.srv import Square

class SimpleClient(Node):
    def __init__(self):
        super().__init__('simple_client')
        self.client = self.create_client(Square, 'square')

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn('Esperando el servicio...')

        self.send_request(4)

    def send_request(self, n):
        request = Square.Request()
        request.n = n
        self.get_logger().info(f'{request.n}')
        service = self.client.call_async(request)
        service.add_done_callback(self.callback)

    def callback(self, service):
        try:
            response = service.result()
            self.get_logger().info(f'Respuesta del servidor: {response.sq}')
        except Exception as e:
            self.get_logger().error(f'Error en la llamada al servicio: {str(e)}')

def main():
    rclpy.init()
    node = SimpleClient()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
