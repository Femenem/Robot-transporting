/*!
  * \brief Node to handle incoming velocity messages and send that to gazebo
  * to simulate Idris.
  *
  * Subscribes to:
  *
  * Advertises:
  *
  * \author Fred Labrosse <ffl@aber.ac.uk>
  * based on code by Tom J. Christoffersen <tjc1@aber.ac.uk>
  *
  */

#include <ros/ros.h>

#include <geometry_msgs/Twist.h>
#include <double_ackermann/DoubleAckermann.h>
#include <std_msgs/Float64.h>
#include <sensor_msgs/JointState.h>
#include <tf/transform_broadcaster.h>
#include <nav_msgs/Odometry.h>

//#include <unistd.h>
#include <stdio.h>
#include <sstream>
#include <iostream>
#include <math.h>

// Uncomment the below to compile the bits of code that allow us to still steer
// the robot despite the bug in gazebo that has to do with position controllers.
//#define POSCTRL

class idris_driver
{

public:

  //Set up the class with a NodeHandle, nh, and a private NodeHandle, nh_p.
    idris_driver(ros::NodeHandle h) 
  : nh_(h),
          nh_p_("~"),
          maxSteering_(0.35),
          maxVelocity_(2.7778),
          axleSeparation_(1.21),
          axleWidth_(1.2)
#ifndef POSCTRL
  ,
  DFRS(0.0),
  DFLS(0.0),
  DRRS(0.0),
  DRLS(0.0)
#endif // ndef POSCTRL
  {
    ROS();
  }

    ~idris_driver()
  {
    
  }


  /*!
   * \brief Set up ROS variables and fetch parameters from launch-file.
   */
  void ROS() 
  {
    // Publishers for the steering (published from the kinematic functions)
    FRS_pub = nh_.advertise<std_msgs::Float64>(
      "/van_loading/front_right_steering_controller/command", 10);
    FLS_pub = nh_.advertise<std_msgs::Float64>(
      "/van_loading/front_left_steering_controller/command", 10);
    RRS_pub = nh_.advertise<std_msgs::Float64>(
      "/van_loading/rear_right_steering_controller/command", 10);
    RLS_pub = nh_.advertise<std_msgs::Float64>(
      "/van_loading/rear_left_steering_controller/command", 10);
    
    // Publishers for the speeds.
    FRW_pub = nh_.advertise<std_msgs::Float64>(
      "/van_loading/front_right_wheel_controller/command", 10);
    FLW_pub = nh_.advertise<std_msgs::Float64>(
      "/van_loading/front_left_wheel_controller/command", 10);
    RRW_pub = nh_.advertise<std_msgs::Float64>(
      "/van_loading/rear_right_wheel_controller/command", 10);
    RLW_pub = nh_.advertise<std_msgs::Float64>(
      "/van_loading/rear_left_wheel_controller/command", 10);
    
    // The subscriber for Ackermann messages
    ackermann_sub = nh_.subscribe("/van_loading/cmd_ackermann", 10,
                                 &idris_driver::cmdAckermannCallback, this);
    
    vel_sub = nh_.subscribe("/van_loading/cmd_vel", 10, 
                           &idris_driver::cmdVelCallback,
                           this);

    odom_sub = nh_.subscribe("/van_loading/odom", 10,
                            &idris_driver::odomCallback,
                            this);

#ifndef POSCTRL
    // Subscriber for the joint values.
    jointValues_sub = nh_.subscribe("/van_loading/joint_states", 100,
                         &idris_driver::jointStateCallback, this);
#endif // ndef POSCTRL

    // Fetch parameters from launch-file, or use the default value if it does not exist.
    //Usage:
    // NodeHandle.param<value_type>("param_name", variable_name, default_value)	
        nh_p_.param<double>("maxVelocity", maxVelocity_, 2.7778); // in m/s
    
    axleSep2 = axleSeparation_ * axleSeparation_;
    axleSep24 = (axleSeparation_ * axleSeparation_) / 4.0;
    axleWidth2 = axleWidth_ / 2.0;

    watchdogTimer = nh_.createTimer(ros::Duration(0.3) /* 300ms */,
                                   &idris_driver::watchdogCallback,
                                   this,
                                   true /* oneshot */);

    ROS_INFO("Idris simulator node ready.");
  }

  /*!
   * \brief Publish the current Desired control.
   */
  void sendControl()
  {
    FRS_pub.publish(FRS_msg);
    FLS_pub.publish(FLS_msg);
    RRS_pub.publish(RRS_msg);
    RLS_pub.publish(RLS_msg);

    FRW_pub.publish(FRW_msg);
    FLW_pub.publish(FLW_msg);
    RRW_pub.publish(RRW_msg);
    RLW_pub.publish(RLW_msg);
  }

  /*!
   * \brief Stop the robot.
   */
  void stop()
  {
#ifdef POSCTRL
    FRS_msg.data = 0.0;
    FLS_msg.data = 0.0;
    RRS_msg.data = 0.0;
    RLS_msg.data = 0.0;
#else
    DFRS = 0.0;
    DFLS = 0.0;
    DRRS = 0.0;
    DRLS = 0.0;
#endif // POSCTRL

    FRW_msg.data = 0.0;
    FLW_msg.data = 0.0;
    RRW_msg.data = 0.0;
    RLW_msg.data = 0.0;

        sendControl();
  }

  /*!
   * \brief Watchdog callback.
   */
  void watchdogCallback(const ros::TimerEvent& /* ev */)
  {
    stop();
  }

  /*!
   * \brief Set speed and steering for front ackerman control.
   * \param[in] speed Desired speed in m/s.
   * \param[in] steer Desired steering in radians.
   */
  void frontAckermann(float speed, float steer) 
  {
    // Both front wheels have the same steering.
    /*!
     * \TODO The wheels of an axle should steer by a different amount for it to be
     * a proper Ackermann vehicle.
     */
    if (fabs(steer) > maxSteering_)
    {
      if (steer > 0)
        steer = maxSteering_;
      else
        steer = -maxSteering_;
    }
#ifdef POSCTRL
    FRS_msg.data = -steer;
    FLS_msg.data = -steer;
    RRS_msg.data = 0.0;
    RLS_msg.data = 0.0;
#else
    DFRS = -steer;
    DFLS = -steer;
    DRRS = 0.0;
    DRLS = 0.0;
#endif // POSCTRL

    if (fabs(speed) > maxVelocity_)
    {
      if (speed > 0)
        speed = maxVelocity_;
      else
        speed = -maxVelocity_;
    }
    if (steer != 0)
    {
      double tanSteering = tan(steer);
      double temporary = fabs(tanSteering) * speed / axleSeparation_;
      radius = axleSeparation_ / tanSteering;
      FLW_msg.data = sqrt((radius - axleWidth2) * (radius - axleWidth2)
        + axleSep2) * temporary;
      FRW_msg.data = sqrt((radius + axleWidth2) * (radius + axleWidth2)
        + axleSep2) * temporary;
      temporary = speed / radius;
      RLW_msg.data = (radius - axleWidth2) * temporary;
      RRW_msg.data = (radius + axleWidth2) * temporary;
    }
    else
    {
      FRW_msg.data = speed;
      FLW_msg.data = FRW_msg.data;
      RRW_msg.data = FRW_msg.data;
      RLW_msg.data = FRW_msg.data;
    }
  }

  /*!
   * \brief Set speed and steering for rear ackerman control.
   * \param[in] speed Desired speed in m/s.
   * \param[in] steer Desired steering in radians.
   */
  void rearAckermann(float speed, float steer)
  {
    // Both rear wheels have the same steering.
    /*!
     * \TODO The wheels of an axle should steer by a different amount for it to be
     * a proper Ackermann vehicle.
     */
    if (fabs(steer) > maxSteering_)
    {
      if (steer > 0)
        steer = maxSteering_;
      else
        steer = -maxSteering_;
    }
#ifdef POSCTRL
    FRS_msg.data = 0.0;
    FLS_msg.data = 0.0;
    RRS_msg.data = steer;
    RLS_msg.data = steer;
#else
    DFRS = 0.0;
    DFLS = 0.0;
    DRRS = steer;
    DRLS = steer;
#endif // POSCTRL

    if (fabs(speed) > maxVelocity_)
    {
      if (speed > 0)
        speed = maxVelocity_;
      else
        speed = -maxVelocity_;
    }
    if (steer != 0)
    {
      double tanSteering = tan(steer);
      double temporary = fabs(tanSteering) * speed / axleSeparation_;
      radius = axleSeparation_ / tanSteering;
      RLW_msg.data = sqrt((radius - axleWidth2) * (radius - axleWidth2)
        + axleSep2) * temporary;
      RRW_msg.data = sqrt((radius + axleWidth2) * (radius + axleWidth2)
        + axleSep2) * temporary;
      temporary = speed / radius;
      FLW_msg.data = (radius - axleWidth2) * temporary;
      FRW_msg.data = (radius + axleWidth2) * temporary;
    }
    else
    {
      FRW_msg.data = speed;
      FLW_msg.data = FRW_msg.data;
      RRW_msg.data = FRW_msg.data;
      RLW_msg.data = FRW_msg.data;
    }
  }

  /*!
   * \brief Set speed and steering for crabbing control (front and rear
   * steering in the same direction).
   * \param[in] speed Desired speed in m/s.
   * \param[in] steer Desired steering in radians.
   */
  void crabAckermann(float speed, float steer)
  {
    if (fabs(steer) > maxSteering_)
    {
      if (steer > 0)
        steer = maxSteering_;
      else
        steer = -maxSteering_;
    }
#ifdef POSCTRL
    FRS_msg.data = -steer;
    FLS_msg.data = -steer;
    RRS_msg.data = -steer;
    RLS_msg.data = -steer;
#else
    DFRS = -steer;
    DFLS = -steer;
    DRRS = -steer;
    DRLS = -steer;
#endif // POSCTRL

    if (fabs(speed) > maxVelocity_)
    {
      if (speed > 0)
        speed = maxVelocity_;
      else
        speed = -maxVelocity_;
    }
    FRW_msg.data = speed;
    FLW_msg.data = FRW_msg.data;
    RRW_msg.data = FRW_msg.data;
    RLW_msg.data = FRW_msg.data;
  }

  /*!
   * \brief Set speed and steering for full (front and rear) ackerman control.
   * \param[in] speed Desired speed in m/s.
   * \param[in] steer Desired steering in radians.
   */
  void ackermann(double speed, double steer)
  {
    // Both front wheels have the same steering.
    // Both rear wheels have the same steering but opposite to the front
    /*!
     * \TODO The wheels of an axle should steer by a different amount for it to be
     * a proper Ackermann vehicle.
     */
    if (fabs(steer) > maxSteering_)
    {
      if (steer > 0)
        steer = maxSteering_;
      else
        steer = -maxSteering_;
    }
#ifdef POSCTRL
    FRS_msg.data = -steer;
    FLS_msg.data = -steer;
    RRS_msg.data = steer;
    RLS_msg.data = steer;
#else
    DFRS = -steer;
    DFLS = -steer;
    DRRS = steer;
    DRLS = steer;
#endif // POSCTRL

    if (fabs(speed) > maxVelocity_)
    {
      if (speed > 0)
        speed = maxVelocity_;
      else
        speed = -maxVelocity_;
    }
    if (steer != 0)
    {
      double tanSteering = tan(steer);
      double temporary = 2.0 * fabs(tanSteering) * speed / axleSeparation_;
      radius2 = axleSeparation_ / (2.0 * tanSteering);
      FLW_msg.data = sqrt((radius2 - axleWidth2) * (radius2 - axleWidth2)
        + axleSep24) * temporary;
      RLW_msg.data = FLW_msg.data;
      FRW_msg.data = sqrt((radius2 + axleWidth2) * (radius2 + axleWidth2)
        + axleSep24) * temporary;
      RRW_msg.data = FRW_msg.data;
    }
    else
    {
      FRW_msg.data = speed;
      FLW_msg.data = FRW_msg.data;
      RRW_msg.data = FRW_msg.data;
      RLW_msg.data = FRW_msg.data;
    }
  }

  /*!
   * \brief Callback function for the Ackermann messages.
   * 
   * Called when the node receives a /cmd_ackermann topic.
   * Considered the default message type for Idris.
   * 
   * \param cmd The incomming Ackermann message
   */
  void cmdAckermannCallback(const double_ackermann::DoubleAckermann& cmd)
  {
    watchdogTimer.stop();

    switch (cmd.ackermann)
    {
      case 0: //front and back steering
        ackermann(cmd.speed, cmd.steering);
        break;
      case 1: //crabbing
        crabAckermann(cmd.speed, cmd.steering);
        break;
      case 2: //front steering
        frontAckermann(cmd.speed, cmd.steering);
        break;
      case 3: //back steering
        rearAckermann(cmd.speed, cmd.steering);
        break;
      default: //in case Ackermann msg is wrong:
        ROS_WARN("ACKERMANN NOT SET CORRECTLY, DEFAULTING TO FRONT STEERING");
        frontAckermann(cmd.speed, cmd.steering);
        break;
    }

    sendControl();
    watchdogTimer.start();
  }

  /*!
   * \brief Callback function for the Twist messages.
   * 
   * Called when the node receives a /cmd_vel topic.
   *
   * \param cmd The incomming Ackermann message
   */
  void cmdVelCallback(const geometry_msgs::Twist& cmd)
  {
    watchdogTimer.stop();

    ackermann(cmd.linear.x, cmd.angular.z);
 
    sendControl();
    watchdogTimer.start();
  }

  /*!
   * \brief Callback function for the odometry messages.
   * 
   * Calles whenever a odometry message is received.
   * 
   * \param[in] odomMsg The data.
   */
  void odomCallback(const nav_msgs::Odometry& odomMsg)
  {
    odom_trans.header.stamp = ros::Time::now();
    odom_trans.header.frame_id = odomMsg.header.frame_id;
    odom_trans.child_frame_id = odomMsg.child_frame_id;

    odom_trans.transform.translation.x = odomMsg.pose.pose.position.x;
    odom_trans.transform.translation.y = odomMsg.pose.pose.position.y;
    odom_trans.transform.translation.z = odomMsg.pose.pose.position.z;
    odom_trans.transform.rotation.x = odomMsg.pose.pose.orientation.x;
    odom_trans.transform.rotation.y = odomMsg.pose.pose.orientation.y;
    odom_trans.transform.rotation.z = odomMsg.pose.pose.orientation.z;
    odom_trans.transform.rotation.w = odomMsg.pose.pose.orientation.w;

    //send the transform
    odom_broadcaster.sendTransform(odom_trans);
  }

private:

#ifndef POSCTRL
  /*!
   * \brief Callback function for the joint states.
   * 
   * This is only temporary, to provide a fix around the
   * PositionJointInterface bug.
   *
   * \param state The state just received.
   */
  void jointStateCallback(const sensor_msgs::JointState& state)
  {
    const double kp = 200;
    const double ki = 0.1;
    const double iMax = 0.1;

    static double FRSi = 0;
    static double FLSi = 0;
    static double RRSi = 0;
    static double RLSi = 0;

    double diff = DFRS - state.position[1];
    if (fabs(diff) > iMax)
    {
      diff = diff > 0 ? iMax : -iMax;
    }
    FRSi += diff;
    diff += DFLS - state.position[0];
    if (fabs(diff) > iMax)
    {
      diff = diff > 0 ? iMax : -iMax;
    }
    FLSi += diff;
    diff += DRRS - state.position[3];
    if (fabs(diff) > iMax)
    {
      diff = diff > 0 ? iMax : -iMax;
    }
    RRSi += diff;
    diff += DRLS - state.position[2];
    if (fabs(diff) > iMax)
    {
      diff = diff > 0 ? iMax : -iMax;
    }
    RLSi += diff;

    FRS_msg.data = kp * (DFRS - state.position[1]) + ki * FRSi;
    FLS_msg.data = kp * (DFLS - state.position[0]) + ki * FLSi;
    RRS_msg.data = kp * (DRRS - state.position[3]) + ki * RRSi;
    RLS_msg.data = kp * (DRLS - state.position[2]) + ki * RLSi;

//     std::cout << "desired: " << DFRS << " current: " << state.position[1]
//        << " P: " << DFRS - state.position[1] << " I: " << FRSi
//        << " ctrl: " << FRS_msg.data
//        << std::endl;


        sendControl();
  }
#endif // ndef POSCTRL

  ros::NodeHandle nh_;
  ros::NodeHandle nh_p_; //Private nodehandle
  
  /*!
   * \brief Publisher for the front right steering.
   */
  ros::Publisher FRS_pub;
  
  /*!
   * \brief Publisher for the front left steering.
   */
  ros::Publisher FLS_pub;
  
  /*!
   * \brief Publisher for the rear right steering.
   */
  ros::Publisher RRS_pub;
  
  /*!
   * \brief Publisher for the rear left steering.
   */
  ros::Publisher RLS_pub;
  
  /*!
   * \brief Message for the front right steering.
   */
  std_msgs::Float64 FRS_msg;
  
  /*!
   * \brief Message for the front left steering.
   */
  std_msgs::Float64 FLS_msg;
  
  /*!
   * \brief Message for the rear right steering.
   */
  std_msgs::Float64 RRS_msg;
  
  /*!
   * \brief Message for the rear left steering.
   */
  std_msgs::Float64 RLS_msg;
  
  /*!
   * \brief Publisher for the speed of the front right wheel.
   */
   ros::Publisher FRW_pub;

  /*!
   * \brief Publisher for the speed of the front left wheel.
   */
   ros::Publisher FLW_pub;

  /*!
   * \brief Publisher for the speed of the rear right wheel.
   */
   ros::Publisher RRW_pub;

  /*!
   * \brief Publisher for the speed of the rear left wheel.
   */
   ros::Publisher RLW_pub;

   /*!
    * \brief Message for the front right wheel speed.
    */
   std_msgs::Float64 FRW_msg;

   /*!
    * \brief Message for the front left wheel speed.
    */
   std_msgs::Float64 FLW_msg;

   /*!
    * \brief Message for the rear right wheel speed.
    */
   std_msgs::Float64 RRW_msg;

   /*!
    * \brief Message for the rear left wheel speed.
    */
   std_msgs::Float64 RLW_msg;

   /*!
    * \brief A timer for the watchdog.
    */
   ros::Timer watchdogTimer;

   /*!
    * \brief Subscriber to Ackermann messages.
    */
   ros::Subscriber ackermann_sub;

   /*!
    * \brief Subscriber to Twist messages.
    */
   ros::Subscriber vel_sub;

   /*!
    * \brief Subscriber to the odometry messages coming from gazebo.
    */
   ros::Subscriber odom_sub;

   /*!
    * \brief Transform broadcaster for the odometry frame.
    */
   tf::TransformBroadcaster odom_broadcaster;

   /*!
    * \brief Transform message for the odometry.
    */
   geometry_msgs::TransformStamped odom_trans;

   /*!
    * \brief Max steering of the robot in rad.
    */
   double maxSteering_;

   /*!
    * \brief Max velocity of the robot in m/s.
    */  
   double maxVelocity_;
  
   /*!
    * \brief Distance between the two axles.
    */
   double axleSeparation_;
  
   /*!
    * \brief Distance between the wheels of an axle.
    */
   double axleWidth_;

#ifndef POSCTRL
   /*!
    * \brief Desired front right steering.
    * 
    * This is only temporary, to provide a fix around the
    * PositionJointInterface bug.
    */
   double DFRS;

   /*!
    * \brief Desired front left steering.
    * 
    * This is only temporary, to provide a fix around the
    * PositionJointInterface bug.
    */
   double DFLS;

   /*!
    * \brief Desired rear right steering.
    * 
    * This is only temporary, to provide a fix around the
    * PositionJointInterface bug.
    */
   double DRRS;

   /*!
    * \brief Desired rear left steering.
    * 
    * This is only temporary, to provide a fix around the
    * PositionJointInterface bug.
    */
   double DRLS;

   /*!
    * \brief Subscriber for the current joint values.
    * 
    * This is only temporary, to provide a fix around the
    * PositionJointInterface bug.
    */
   ros::Subscriber jointValues_sub;
#endif // ndef POSCTRL

   double axleSep2;
   double axleSep24;
   double axleWidth2;
   double radius;
   double radius2;
};



int main(int argc, char **argv)
{

  //Set up ros..
  ros::init(argc, argv, "van_loading");
  ros::NodeHandle n;
  //Construct our node..
    idris_driver van_loading(n);

  ros::spin();
}
