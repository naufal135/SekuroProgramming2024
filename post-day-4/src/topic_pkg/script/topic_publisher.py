#!/usr/bin/env python3

import rospy
from topic_pkg.msg import Topic

def talker():
    publisher = rospy.Publisher("topic_pkg_py", Topic, queue_size=10)
    rospy.init_node('topic_pkg_py', anonymous=True)

    rate = rospy.Rate(1)

    while not rospy.is_shutdown():
        topic_to_send = Topic()

        topic_to_send.usia = 20
        topic_to_send.tinggi = 180.41
        topic_to_send.nama = "John Doe"
        topic_to_send.kehadiran = True

        publisher.publish(topic_to_send)

        rate.sleep()

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass