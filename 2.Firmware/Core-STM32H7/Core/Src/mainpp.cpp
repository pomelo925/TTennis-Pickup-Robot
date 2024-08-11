/*
 * mainpp.cpp
 *
 *  Created on: Aug 5, 2024
 *      Author: pomelo925
 */


#include <dc_motor.h>
#include <mainpp.h>
#include <manual.h>
#include <ros1.h>

void main_function(void){
	DC_MOTOR::init();
	ROS1::init();

	while(1){
		/** MANUAL MODE : activate functions via live expressions **/
		if(MANUAL::MODE) MANUAL::loop();

		/** ROS MODE : STM32 Will be controlled by ROS **/
		else ROS1::spinCycle();
	}
	return;
}
