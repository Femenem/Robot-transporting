#!/usr/bin/env python
import rospy
from double_ackermann.msg import DoubleAckermann
from van_loading.msg import ICPDirection
distance = 0.0
position = 0.0
angle = 0.0

def update_direction(data):
    global distance
    global position
    global angle
    distance = data.x
    position = data.y
    angle = data.angle


def deg_to_rad(deg):
    return (deg * 3.142)/180


def move_robot():
    global distance
    global position
    global angle
    rospy.init_node('movement_node', anonymous=True)
    rate = rospy.Rate(10)

    rospy.Subscriber('van_loading/ICP_direction', ICPDirection, update_direction)
    pub = rospy.Publisher('van_loading/cmd_ackermann', DoubleAckermann, queue_size=10)

    movement = DoubleAckermann()
    while not rospy.is_shutdown():
        distance = distance * -1
        if(distance > 0.1):
            movement.speed = 1 * distance
        else:
            movement.speed = 0
        movement.steering = deg_to_rad(angle) # TODO work on this shit. Need to incorperate position
        pub.publish(movement)
        rate.sleep()
        print(distance)


if __name__ == '__main__':
    try:
        move_robot()
    except rospy.ROSInterruptException:
        pass