#!/usr/bin/env python3

import rospy
from topic_pkg.msg import Topic

def callback(data):
    rospy.loginfo("\n\n\033[1;36mMessage Data from \033[1;34mPython: \033[1;36m\n")
    rospy.loginfo("\033[1;0mUsia:\033[1;36m %ld Tahun\n", data.usia)
    rospy.loginfo("\033[1;0mTinggi:\033[1;36m %lfcm\n", data.tinggi)
    rospy.loginfo("\033[1;0mNama:\033[1;36m %s\n", data.nama)
    rospy.loginfo("\033[1;0mKehadiran:\033[1;36m %s\n", "Hadir" if data.kehadiran else "Tidak Hadir")

def listener():
    rospy.init_node("topic_subscriber_py", anonymous=True)
    rospy.Subscriber("topic_pkg_py", Topic, callback)

    rospy.spin()


if __name__ == '__main__':
    try:
        listener()
    except rospy.ROSInterruptException:
        pass