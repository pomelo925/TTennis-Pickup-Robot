/*
 * manual.cpp
 *
 *  Created on: Aug 5, 2024
 *      Author: User
 */


#include <manual.h>
#include <chassis.h>


void MANUAL::loop(){
	while(1){
		if(MANUAL::runChassis) Chassis.run();
	//	if(runIntake) intake.run();
	//	if(runBelt) belt.run();
	//	if(runElavtor) elavtor.run();
	}
}