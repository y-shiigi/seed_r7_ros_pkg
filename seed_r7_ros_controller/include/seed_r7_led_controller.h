#ifndef _LED_CONTROLLER_H_
#define _LED_CONTROLLER_H_

#include "seed_r7_robot_hardware.h"
#include <seed_r7_ros_controller/LEDControl.h>

class LEDController
{
public: 
  LEDController(const ros::NodeHandle& _nh, robot_hardware::RobotHW *_in_hw);
  ~LEDController();

  bool LEDControlCallback(seed_r7_ros_controller::LEDControl::Request& _req, seed_r7_ros_controller::LEDControl::Response& _res); 

private: 
  ros::ServiceServer led_control_server_;
  robot_hardware::RobotHW *hw_;
  ros::NodeHandle nh_;
};



#endif
