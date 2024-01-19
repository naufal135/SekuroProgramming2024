#include "ros/ros.h"
#include "topic_pkg/Topic.h"

int main(int argc, char** argv) {
    ros::init(argc, argv, "topic_publisher");
    
    ros::NodeHandle nh;
    ros::Publisher topic_publisher = nh.advertise<topic_pkg::Topic>("topic_pkg", 1000);

    ros::Rate loop_rate(1);

    while (ros::ok()) {
        topic_pkg::Topic topic_to_send;

        // Data untuk di publish
        topic_to_send.usia = 19;
        topic_to_send.tinggi = 160.5;
        topic_to_send.nama = "Generic Name";
        topic_to_send.kehadiran = false;

        topic_publisher.publish(topic_to_send);

        ros::spinOnce();
        loop_rate.sleep();
    }

    return 0;
}