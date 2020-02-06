#include <ros/ros.h>
#include <moveit/move_group_interface/move_group_interface.h>
#include "seed_r7_ros_controller/seed_r7_hand_controller.h"
#include "std_msgs/String.h"

geometry_msgs::Quaternion rpy_to_geometry_quat(double roll, double pitch, double yaw){
  tf::Quaternion quat=tf::createQuaternionFromRPY(roll,pitch,yaw);
  geometry_msgs::Quaternion geometry_quat;
  quaternionTFToMsg(quat, geometry_quat);
  return geometry_quat;
}

int main(int argc, char** argv)
{
  //ros init
  ros::init(argc, argv, "pick_and_place_node");
  ros::NodeHandle node_handle;
  ros::AsyncSpinner spinner(1);

  spinner.start();

  //service
  ros::ServiceClient client = node_handle.serviceClient<seed_r7_ros_controller::HandControl>("/seed_r7_ros_controller/hand_control");
  seed_r7_ros_controller::HandControl srv;
  std_msgs::String msg;
  srv.request.position = 0;
  srv.request.current = 100;

  // moveit init
  static const std::string PLANNING_GROUP = "rarm_with_waist";
  moveit::planning_interface::MoveGroupInterface move_group(PLANNING_GROUP);
  move_group.setEndEffectorLink("r_eef_pick_link");
  move_group.setPoseReferenceFrame("base_link");
  const robot_state::JointModelGroup* joint_model_group = move_group.getCurrentState()->getJointModelGroup(PLANNING_GROUP);
  moveit::planning_interface::MoveGroupInterface::Plan my_plan;
  moveit::core::RobotStatePtr current_state = move_group.getCurrentState();
  std::vector<double> joint_group_positions;
  current_state->copyJointGroupPositions(joint_model_group, joint_group_positions);
  
  // init pose move
  joint_group_positions[0] = 1.57;
  move_group.setJointValueTarget(joint_group_positions);
  bool success = (move_group.plan(my_plan) == moveit::planning_interface::MoveItErrorCode::SUCCESS);
  msg.data = "release"; 
  srv.request.script = msg.data;
  if(client.call(srv)){
    ROS_INFO("%s", "Hand release success");
  }
  else{
    ROS_INFO("%s", "Hand release failure");
    return 1;
  }
  
  geometry_msgs::Quaternion pick_q = rpy_to_geometry_quat(-1.57,0.8,1.57);
  geometry_msgs::Quaternion place_q = rpy_to_geometry_quat(-1.57,0.8,1.57);
  geometry_msgs::Pose move_pose;

  // before pick
  move_pose.orientation.x = pick_q.x;
  move_pose.orientation.y = pick_q.y;
  move_pose.orientation.z = pick_q.z;
  move_pose.orientation.w = pick_q.w;
  move_pose.position.x = 0.45;
  move_pose.position.y = 0.55;
  move_pose.position.z = 1.25;
  
  move_group.setPoseTarget(move_pose);
  success = (move_group.plan(my_plan) == moveit::planning_interface::MoveItErrorCode::SUCCESS);
  if(success){
    move_group.move();
  }

  // pick
  move_pose.position.z -= 0.03;
  move_group.setPoseTarget(move_pose);
  success = (move_group.plan(my_plan) == moveit::planning_interface::MoveItErrorCode::SUCCESS);
  if(success){
    move_group.move();
  }

  // grasp
  msg.data = "grasp"; 
  srv.request.script = msg.data;
  if(client.call(srv)){
    ROS_INFO("%s", "Hand grasp success");
  }
  else{
    ROS_INFO("%s", "Hand grasp failure");
    return 1;
  }
  sleep(2);

  // after pick
  move_pose.position.z += 0.06;
  move_group.setPoseTarget(move_pose);
  success = (move_group.plan(my_plan) == moveit::planning_interface::MoveItErrorCode::SUCCESS);
  if(success){
    move_group.move();
  }

  // before place
  move_pose.orientation.x = place_q.x;
  move_pose.orientation.y = place_q.y;
  move_pose.orientation.z = place_q.z;
  move_pose.orientation.w = place_q.w;
  move_pose.position.x = 0.3;
  move_pose.position.y = 0.2;
  move_pose.position.z = 1.25;

  move_group.setPoseTarget(move_pose);
  success = (move_group.plan(my_plan) == moveit::planning_interface::MoveItErrorCode::SUCCESS);
  if(success){
    move_group.move();
  }

  // place
  move_pose.position.z -= 0.03;
  move_group.setPoseTarget(move_pose);
  success = (move_group.plan(my_plan) == moveit::planning_interface::MoveItErrorCode::SUCCESS);
  if(success){
    move_group.move();
  }

  // release
  msg.data = "release"; 
  srv.request.script = msg.data;
  if(client.call(srv)){
    ROS_INFO("%s", "Hand release success");
  }
  else{
    ROS_INFO("%s", "Hand release failure");
    return 1;
  }
  sleep(2);

  // place no ato
  move_pose.position.z += 0.06;
  move_group.setPoseTarget(move_pose);
  success = (move_group.plan(my_plan) == moveit::planning_interface::MoveItErrorCode::SUCCESS);
  if(success){
    move_group.move();
  }

  ros::shutdown();

  return 0;
}

