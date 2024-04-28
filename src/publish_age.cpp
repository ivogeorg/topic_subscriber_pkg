#include "topic_subscriber_pkg/Age.h" // !!!
#include <ros/ros.h>

int main(int argc, char **argv) {

  ros::init(argc, argv, "age_publisher");
  ros::NodeHandle nh;

  // TODO: how to advertise the message?
  ros::Publisher pub =
      nh.advertise<topic_subscriber_pkg::Age>("robot_age", 1000); // !!!
  ros::Rate loop_rate(2);

  topic_subscriber_pkg::Age age;
  // turtlebot 3 was released May 2017
  age.years = 2024 - 2017;
  age.months = 5 - 4;
  age.days = 30 - 28;

  while (ros::ok()) {
    pub.publish(age);
    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;
}
