from setuptools import find_packages
from setuptools import setup

setup(
    name='rtabmap_msgs',
    version='0.21.5',
    packages=find_packages(
        include=('rtabmap_msgs', 'rtabmap_msgs.*')),
)
