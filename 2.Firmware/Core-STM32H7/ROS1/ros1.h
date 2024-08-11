/*
 * ros1.h
 *
 *  Created on: Aug 6, 2024
 *      Author: pomelo925
 */

#ifndef ROS_1_H_
#define ROS_1_H_

#include "geometry_msgs/Twist.h"
#include "std_msgs/Int32.h"
#include "std_msgs/Bool.h"

namespace ROS1 {
	void init(void);
	void spinCycle(void);

	void pub_chassis_speed(void);

	void callback_Chassis(const geometry_msgs::Twist &msg);
	void callback_Intake(const std_msgs::Bool &msg);
	void callback_Elevator(const std_msgs::Int32 &msg);
	void callback_ElevatorDoor(const std_msgs::Bool &msg);
	void callback_BasketDoor(const std_msgs::Bool &msg);
}


#endif
