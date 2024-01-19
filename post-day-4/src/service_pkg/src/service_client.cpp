#include "ros/ros.h"
#include "service_pkg/VectorMagnitude.h"

int main(int argc, char** argv) {
    ros::init(argc, argv, "vector_mag_client");
    if (argc != 4) {
        ROS_INFO("Usage: komponenX komponenY komponenZ");
        return 1;
    }

    ros::NodeHandle nh;
    ros::ServiceClient client = nh.serviceClient<service_pkg::VectorMagnitude>("vector_mag_service");

    service_pkg::VectorMagnitude srv;
    srv.request.komponenX = atof(argv[1]);
    srv.request.komponenY = atof(argv[2]);
    srv.request.komponenZ = atof(argv[3]);

    if (client.call(srv)) {
        ROS_INFO("\033[1;36mMagnitude: \033[1;0m%lf", srv.response.magnitude);
    } else {
        ROS_INFO("Failed to call vector_mag_service");
        return 1;
    }

    return 0;
}