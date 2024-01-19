#include "ros/ros.h"
#include "topic_pkg/Topic.h"

void callbackHandler(const topic_pkg::Topic::ConstPtr &msg) {
    ROS_INFO("\n\n\033[1;36mMessage Data: \n");
    ROS_INFO("\033[1;0mUsia:\033[1;36m %ld Tahun\n", msg->usia);
    ROS_INFO("\033[1;0mTinggi:\033[1;36m %lfcm\n", msg->tinggi);
    ROS_INFO("\033[1;0mNama:\033[1;36m %s\n", msg->nama.c_str());
    ROS_INFO("\033[1;0mKehadiran:\033[1;36m %s\n", msg->kehadiran ? "Hadir" : "Tidak Hadir");
}

int main(int argc, char** argv) {
    ros::init(argc, argv, "topic_subscriber");
    
    ros::NodeHandle nh;
    ros::Subscriber topic_subscriber = nh.subscribe("topic_pkg", 1000, callbackHandler);

    ros::spin();

    return 0;
}