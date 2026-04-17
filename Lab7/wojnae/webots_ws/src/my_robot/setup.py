from setuptools import find_packages, setup

package_name = 'my_robot'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/my_robot']),
        ('share/my_robot', ['package.xml']),
        ('share/my_robot/launch',
            ['launch/my_robot_xacro_rviz.launch.py',
             'launch/my_robot_gazebo_rviz.launch.py']),
        ('share/my_robot/urdf',
            ['urdf/my_robot.urdf.xacro']),
    ],

    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='yahboom',
    maintainer_email='wojnae38@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        ],
    },
)
