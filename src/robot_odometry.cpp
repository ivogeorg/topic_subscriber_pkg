#include <ros/ros.h>
#include <nav_msgs/Odometry.h>

void odometryCallback(const nav_msgs::OdometryConstPtr &odom) {
    /**
    odom.twist.twist.linear.x = 0.5;
    odom.twist.twist.linear.y = 0.0;
    odom.twist.twist.linear.z = 0.0;
    odom.twist.twist.angular.x = 0.0;
    odom.twist.twist.angular.y = 0.0;
    odom.twist.twist.angular.z = 0.1;
    */
    ROS_INFO("pose: x=%f, y=%f; velocity: x=%f, z=%f", 
        odom->pose.pose.position.x,
        odom->pose.pose.position.y,
        odom->twist.twist.linear.x,
        odom->twist.twist.angular.z);
}

int main(int argc, char **argv) {

  ros::init(argc, argv, "robot_odometry");
  ros::NodeHandle nh;

  ros::Subscriber sub = nh.subscribe("odom", 1000, odometryCallback);

  ros::spin();

  return 0;
}