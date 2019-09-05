#include <seed_r7_led_controller.h>

LEDController::LEDController(const ros::NodeHandle& _nh, robot_hardware::RobotHW *_in_hw)
{
  ROS_INFO("led_control_server start");
 
  hw_ = _in_hw;
  nh_ = _nh;
  led_control_server_ = nh_.advertiseService("led_control", &LEDController::LEDControlCallback,this);

  hw_->runLEDScript(0,2);
    
  ROS_INFO("Initialized LEDController");
}   

LEDController::~LEDController()
{
  hw_->runLEDScript(0,8);
}

bool LEDController::LEDControlCallback(seed_r7_ros_controller::LEDControl::Request&  _req,
                                   seed_r7_ros_controller::LEDControl::Response& _res) 
{
  ROS_INFO("Start LED");

  hw_->runLEDScript(_req.send_number, _req.script_number);

  _res.result = "LED succeeded";

  ROS_INFO("End LED");
  return true;
}
