# 使用方法

- 1.将这两个包放入到工作空间内，如果工作空间内有xbot_msgs则删除文件夹下同名包，保留一个即可；
- 2.编译通过后执行命令`rosrun rbx1_nav odom_out_and_back.py`；
- 3.可以通过`rosparam set`来动态更改相关参数。

# 参数列表

- rate:ROS频率，默认5HZ
- linear_speed:线速度，默认0.2m/s
- goal_distance:行进的目标距离，默认3m
- maxOb:最大可行进障碍物个数，默认为10个
- ki:折返的次数，默认为3次
