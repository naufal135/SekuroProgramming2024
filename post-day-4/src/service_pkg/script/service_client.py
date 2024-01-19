#!/usr/bin/env python3

import rospy
import sys
from service_pkg.srv import VectorMagnitude, VectorMagnitudeResponse

def printUsage():
    return print("%s [x y]"%sys.argv[0])

def call_server(x, y, z):
    rospy.wait_for_service("vector_mag_service_py")
    try:
        vector_mag_handler = rospy.ServiceProxy('vector_mag_service_py', VectorMagnitude)
        resp = vector_mag_handler(x, y, z)
        return resp.magnitude
    except rospy.ServiceException as e:
        print(f"vector_mag_service call failed: {str(e)}")
    

if __name__ == '__main__':
    if len(sys.argv) == 4:
        x = float(sys.argv[1])
        y = float(sys.argv[2])
        z = float(sys.argv[3])
    else:
        printUsage()
        sys.exit(1)

    print(f"\033[1;36mMagnitude: \033[1;0m{call_server(x, y, z)}")