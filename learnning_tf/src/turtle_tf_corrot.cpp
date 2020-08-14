#include <ros/ros.h>
#include <tf/transform_broadcaster.h>

int main(int argc, char** argv){
  ros::init(argc, argv, "my_tf_broadcaster");
  ros::NodeHandle node;

  tf::TransformBroadcaster br;//用于广播的一个对象
  tf::Transform transform;//创建一个储存相对位置数据的对象

  ros::Rate rate(10.0);
  while (node.ok()){
//    transform.setOrigin( tf::Vector3(0.0, 2.0, 0.0) );//初始化  相距2米
//    transform.setRotation( tf::Quaternion(0, 0, 0, 1) );
    transform.setOrigin( tf::Vector3(2.0*sin(ros::Time::now().toSec()), 2.0*cos(ros::Time::now().toSec()), 0.0) );
    transform.setRotation( tf::Quaternion(0, 0, 0, 1) );
   //广播，指明相对关系和数据
    br.sendTransform(tf::StampedTransform(transform, ros::Time::now(), "turtle1", "carrot1"));
    rate.sleep();
  }
  return 0;
};
