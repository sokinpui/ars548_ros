This is a open sourced ROS2 driver for ARS548 radar.
You can find the original repository: [https://github.com/robotics-upo/ars548_ros](https://github.com/robotics-upo/ars548_ros)

[The Original README.md](./docs/Readme.md) of this repository

# Pre-requirements:

- a USB-A to RJ45 LAN Card Adapter
- Ubuntu 22.04 LTS
- install Ros2 humble and essential tools, follow [official guide](https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debs.html)
  you can refer to [this script](ros-install.sh)

## After ROS2 humble installation

- Set up your environment after ros2 installation:

```bash
source /opt/ros/humble/setup.bash # bash
source /opt/ros/humble/setup.zsh  # zsh
```

- Add this line to `~/.bashrc` or `.zshrc` to aovid sourcing every time

```bash
echo source /opt/ros/humble/setup.bash >> ~/.bashrc
echo source /opt/ros/humble/setup.zsh >> ~/.zshrc
```

# Build and Run

After you have installed ROS2 humble, Build the driver and launch all the nodes at once:

```zsh
zsh ./compose.zsh
```

input your parent interface of USB-A LAN adapter when prompted and press `enter`.

In case you don't know what is happening:

```sh
# reset network
sudo ip link set radarConnection down
sudo ip link delete radarConnection

# setup network, create VLAN
sudo ip link add link "Your Parent interface" name radarConnection type vlan id 19
sudo ip addr add 10.13.1.166/24 dev radarConnection
sudo ip link set radarConnection up
sudo ip route replace default via 10.13.1.1 dev radarConnection

# build the packages
colcon build --packages-select ars548_driver ars548_messages


# source the workspace
source install/setup.zsh

# launch the driver and rviz
ros2 launch ars548_driver ars548_launch.xml

```

# Configure Rviz

The default Rviz configuaration: [ars548_driver/rviz/RadarVisualization.rviz](ars548_driver/rviz/RadarVisualization.rviz)
Change the value inside and rebuild to see the updated configuration.

# Sample

Rosbag2 recording of the driver

1. [bags1](./bags/rosbag2_2025_10_22-15_39_44)
2. [bags2](./bags/rosbag2_2025_10_22-15_45_02)

You can refer to [official ros2 bag documentation](https://docs.ros.org/en/humble/Tutorials/Beginner-CLI-Tools/Recording-And-Playing-Back-Data/Recording-And-Playing-Back-Data.html) to play the bags.

Video demo of the driver inside RVIZ

![ARS548 Driver Demo](./videos/rviz-1-decay.webm)
