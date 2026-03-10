from setuptools import setup
import os
from glob import glob

package_name = 'python_turtle'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        # ament index resource (keep this)
        ('share/ament_index/resource_index/packages',
         ['resource/' + package_name]),
        # package.xml (keep this)
        ('share/' + package_name, ['package.xml']),
        # install anything in launch/ matching *launch.[pxy][yma]*
        (os.path.join('share', package_name, 'launch'),
         glob(os.path.join('launch', '*launch.[pxy][yma]*'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Emma Wojnarowski',
    maintainer_email='emma@example.com',
    description='Python turtle client/server with teleop launch',
    license='BSD-2-Clause',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'turtlebot_server = python_turtle.turtlebot_server:main',
            'turtlebot_client = python_turtle.turtlebot_client:main',
        ],
    },
)
