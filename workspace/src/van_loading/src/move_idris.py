#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Twist
import sys
import tty
import termios


def key_to_movement():
    pub = rospy.Publisher('van_loading/cmd_vel', Twist, queue_size=10)
    rospy.init_node('move_idris', anonymous=True)
    rate = rospy.Rate(10)
    movement = Twist()
    fd = sys.stdin.fileno()
    old_settings = termios.tcgetattr(fd)
    movement.linear.x = 0.0
    movement.angular.z = 0.0
    while not rospy.is_shutdown():

        try:
            tty.setraw(sys.stdin.fileno())
            key = sys.stdin.read(1)
        finally:
            termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)

        if key == 'w':
            movement.linear.x += 0.2
        if key == 's':
            movement.linear.x += -0.2
        if key == 'a':
            movement.angular.z += 0.2
        if key == 'd':
            movement.angular.z += -0.2
        if key == ' ':
            movement.linear.x = 0.0
            movement.angular.z = 0.0
        if key == 'q':
            return  # Exit

        if movement.linear.x > 1.0:
            movement.linear.x = 1.0
        if movement.linear.x < -1.0:
            movement.linear.x = -1.0

        if movement.angular.z > 2.0:
            movement.angular.z = 2.0
        if movement.angular.z < -2.0:
            movement.angular.z = -2.0

        print("speed: " + str(movement.linear.x))
        print("turning: " + str(movement.angular.z))

        pub.publish(movement)
        rate.sleep()


if __name__ == '__main__':
    try:
        key_to_movement()
    except rospy.ROSInterruptException:
        pass
