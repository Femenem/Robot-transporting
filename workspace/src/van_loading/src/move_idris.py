#!/usr/bin/env python
import rospy
from double_ackermann.msg import DoubleAckermann
import sys
import tty
import termios


def key_to_movement():
    pub = rospy.Publisher('van_loading/cmd_ackermann', DoubleAckermann, queue_size=10)
    rospy.init_node('move_idris', anonymous=True)
    rate = rospy.Rate(10)
    movement = DoubleAckermann()
    fd = sys.stdin.fileno()
    old_settings = termios.tcgetattr(fd)
    movement.speed = 0.0
    movement.steering = 0.0
    movement.ackermann = 0
    while not rospy.is_shutdown():

        try:
            tty.setraw(sys.stdin.fileno())
            key = sys.stdin.read(1)
        finally:
            termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)

        if key == 'w':
            movement.speed += 0.2
        if key == 's':
            movement.speed += -0.2
        if key == 'a':
            movement.steering += 0.2
        if key == 'd':
            movement.steering += -0.2
        if key == ' ':
            movement.speed = 0.0
            movement.steering = 0.0
        if key == 'q':
            return  # Exit

        if movement.speed > 1.0:
            movement.speed = 1.0
        if movement.speed < -1.0:
            movement.speed = -1.0

        if movement.steering > 2.0:
            movement.steering = 2.0
        if movement.steering < -2.0:
            movement.steering = -2.0

        print("speed: " + str(movement.speed))
        print("turning: " + str(movement.steering))

        pub.publish(movement)
        rate.sleep()


if __name__ == '__main__':
    try:
        key_to_movement()
    except rospy.ROSInterruptException:
        pass
