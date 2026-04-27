from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'bag_of_tricks'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share',package_name,'launch'),glob(os.path.join('launch','*.launch.py'))),
        #(os.path.join('share','yahboomcar_description','urdf'),glob(os.path.join('urdf','*.*'))),
        #(os.path.join('share','yahboomcar_description','meshes'),glob(os.path.join('meshes','*.*'))),
        #(os.path.join('share','yahboomcar_description','rviz'),glob(os.path.join('rviz','*.rviz*'))),
        (os.path.join('share', package_name, 'param'), glob(os.path.join('param', '*.yaml'))),
        (os.path.join('share','yahboomcar_mediapipe','rviz'),glob(os.path.join('rviz','*.rviz*'))),
        (os.path.join('share',package_name,'launch'),glob(os.path.join('launch','*launch.py'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='root',
    maintainer_email='root@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        'bag_of_tricks = bag_of_tricks.bag_of_tricks:main',
        'HandCtrl = bag_of_tricks.HandCtrl:main',
        'RobotCtrl = bag_of_tricks.RobotCtrl:main',
        'control_shape = bag_of_tricks.control_shape:main',
        'FingerCtrl = bag_of_tricks.FingerCtrl:main',
        'Mcnamu_driver	= bag_of_tricks.Mcnamu_driver:main',
        ],
    },
)
