#!/usr/bin/env python3

import rospy
import math
from service_pkg.srv import VectorMagnitude, VectorMagnitudeResponse

def calculateMagnitude(req):
    rospy.loginfo(f"\033[1;36mRequest Data: \033[1;0m{req.komponenX}\033[1;36m, \033[1;0m{req.komponenY}\033[1;36m, \033[1;0m{req.komponenZ}")
    result = math.sqrt(req.komponenX*req.komponenX + req.komponenY*req.komponenY + req.komponenZ*req.komponenZ)

    rospy.loginfo(f"\033[1;36mSending Response: \033[1;0m{result}")
    return VectorMagnitudeResponse(result)

def start_server():
    rospy.init_node("vector_mag_server_py")
    service = rospy.Service("vector_mag_service_py", VectorMagnitude, calculateMagnitude)

    rospy.loginfo("\033[1;42mServer is ready from Python.\033[1;0m")
    rospy.spin()

if __name__ == '__main__':
    start_server()