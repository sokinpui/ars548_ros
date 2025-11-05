#!/usr/bin/env bash

sudo ip link set radarConnection down
sudo ip link delete radarConnection

echo "Write your parent interface name"
read parent

#sudo ip link add link enx6c1ff708fccc name radarConnection type vlan id 19
sudo ip link add link $parent name radarConnection type vlan id 19
sudo ip addr add 10.13.1.166/24 dev radarConnection
sudo ip link set radarConnection up
sudo ip route replace default via 10.13.1.1 dev radarConnection

colcon build --packages-select ars548_driver ars548_messages

source install/setup.bash
ros2 launch ars548_driver ars548_launch.xml
