from setuptools import find_packages, setup

package_name = 'prac1'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='student',
    maintainer_email='student@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'Publisher = prac1.publisher:main',
            'Subscriber = prac1.subscriber:main',
            'Service = prac1.service:main',
            'Client = prac1.client:main',
        ],
    },
)
