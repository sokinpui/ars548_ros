#!/usr/bin/zsh

./reset_network.sh

echo "Write your parent interface name"
read parent

./setup_network.sh $parent
./build.sh

source install/setup.zsh
ros2 launch ars548_driver ars548_launch.xml
