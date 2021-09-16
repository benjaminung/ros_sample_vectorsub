/*
**
**  Copyright (c) 2020 Japan Aerospace Exploration Agency.
**  All Rights Reserved.
**
**  This file is covered by the LICENSE.txt in the root of this project.
**
*/
#include "sample_vectorsub/sample_vectorsub.h"

void msgCallback(const geometry_msgs::Vector3::ConstPtr& msg) 
{ 
  ROS_INFO("received data: %f,%f,%f", msg->x, msg->y, msg->z); 
}

/**
 * Main function
 * @param argc Number of argument
 * @param argv Arguments
 * @return Result
 */
int main(int argc, char** argv)
{
  ros::init(argc, argv, "sample_vectorsub");
  ros::NodeHandle nh;
  ros::Subscriber ros_sub;
  ros_sub = nh.subscribe<geometry_msgs::Vector3>("ros_cfe_vectormsg", 100, msgCallback);
  ros::spin();
  return 0;
}
