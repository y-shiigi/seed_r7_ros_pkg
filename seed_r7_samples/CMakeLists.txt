cmake_minimum_required(VERSION 2.8.3)
project(seed_r7_samples)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  seed_r7_ros_controller
  moveit_core moveit_ros_planning moveit_ros_planning_interface
)

catkin_package()

add_definitions(-std=c++11)

link_directories(
  ${catkin_LIBRARY_DIRS}
)

include_directories(include
  ${catkin_INCLUDE_DIRS}
  ${Boost_INCLUDE_DIRS}
)

if (CATKIN_ENABLE_TESTING)
  find_package(roslaunch REQUIRED)
  roslaunch_add_file_check(launch/demo.launch)
  find_package(rostest REQUIRED)
  add_rostest(test/demo.test)
endif()

install(DIRECTORY config launch scripts 
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)
catkin_install_python(PROGRAMS scripts/demo.py
    DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

add_executable(pick_and_place_node src/pick_and_place.cpp)
target_link_libraries(pick_and_place_node ${catkin_LIBRARIES} )

add_executable(moveit_sample_node src/moveit_sample.cpp)
target_link_libraries(moveit_sample_node ${catkin_LIBRARIES} )
