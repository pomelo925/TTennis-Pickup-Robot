/*
 * chassis.cpp
 *
 *  Created on: Aug 6, 2024
 *      Author: pomelo925
 */

#include <chassis.h>
#include <dc_motor.h>

#include "../Encoder/encoder.h"

CHASSIS Chassis;
SpeedVector CHASSIS_CURRENT_SPEED, CHASSIS_TARGET_SPEED;


/**
 * @brief 底盤運作，追目標車速，並回饋當前車速 (m/s)(rad/s)。
 * @param void
 */
void CHASSIS::run(void){
  CHASSIS::update_wheel_speed();
  CHASSIS::update_chassis_speed();
  return;
}


/**
 * @brief 更新目標輪速 (rad/s)。
 * @param void
 */
void CHASSIS::update_wheel_speed(void){
  const float x = CHASSIS_TARGET_SPEED.x;
  const float theta = CHASSIS_TARGET_SPEED.theta;
  WheelRight.set_target_wheel_speed((2*x + theta*_wheel_distance) / (2*_wheel_radius));
  WheelLeft.set_target_wheel_speed((2*x - theta*_wheel_distance) / (2*_wheel_radius));
  return;
}


/**
 * @brief 更新當前車速 (m/s)(rad/s)。
 * @param void
 */
void CHASSIS::update_chassis_speed(void){
  CHASSIS_CURRENT_SPEED.x = (WheelRight.get_current_wheel_speed() + WheelLeft.get_current_wheel_speed()) * _wheel_radius / 2;
  CHASSIS_CURRENT_SPEED.theta = (WheelRight.get_current_wheel_speed() - WheelLeft.get_current_wheel_speed()) * _wheel_radius / _wheel_distance;
  return;
}
