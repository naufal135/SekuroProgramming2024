#include "ros/ros.h"
#include "service_pkg/VectorMagnitude.h"

bool calculateMagnitude(service_pkg::VectorMagnitude::Request &req, service_pkg::VectorMagnitude::Response &resp) {
    ROS_INFO("\033[1;36mRequest Data: \033[1;0m%lf\033[1;36m, \033[1;0m%lf\033[1;36m, \033[1;0m%lf", req.komponenX, req.komponenY, req.komponenZ);
    resp.magnitude = sqrtf64(req.komponenX*req.komponenX + req.komponenY*req.komponenY + req.komponenZ*req.komponenZ);

    ROS_INFO("\033[1;36mSending Response: \033[1;0m%lf", resp.magnitude);
    return true;
}

int main(int argc, char** argv) {
    ros::init(argc, argv, "vector_mag_server");
    ros::NodeHandle nh;

    ros::ServiceServer service = nh.advertiseService("vector_mag_service", calculateMagnitude);
    ROS_INFO("\033[1;42mServer is ready.\033[1;0m");
    ros::spin();

    return 0;
}