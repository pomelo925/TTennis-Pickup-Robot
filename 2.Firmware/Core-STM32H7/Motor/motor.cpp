/*
 * motor.cpp
 *
 *  Created on: Aug 6, 2024
 *      Author: pomelo925
 */

#include <motor.h>

#include "stm32h7xx_hal.h"

/** Motors Declaration **/
MOTOR WheelRight(DC_MOTOR, 2.f, 200.f, 0.f, 0.001f, 26.f, 1024.f);
MOTOR WheelLeft(DC_MOTOR, 2.f, 200.f, 0.f, 0.001f, 26.f, 1024.f);
// MOTOR Intake(DC_MOTOR, 2.5f, 100.f, 0.f, 0.001f, 512.f, 20.8f);
// MOTOR Elevator(DC_MOTOR, 2.5f, 100.f, 0.f, 0.001f, 512.f, 20.8f);

MOTOR ElevatorDoor(SERVO);
MOTOR BasketDoor(SERVO);


extern TIM_HandleTypeDef htim2;
extern TIM_HandleTypeDef htim3;
extern TIM_HandleTypeDef htim4;
extern TIM_HandleTypeDef htim5;
extern TIM_HandleTypeDef htim6;
extern TIM_HandleTypeDef htim15;


/**
 * @brief 馬達初始化。
 * @param void
 */
void MOTOR::init(void){
	HAL_TIM_Encoder_Start(&htim2, TIM_CHANNEL_1);
	HAL_TIM_Encoder_Start(&htim2, TIM_CHANNEL_2);
	HAL_TIM_Encoder_Start(&htim3, TIM_CHANNEL_1);
	HAL_TIM_Encoder_Start(&htim3, TIM_CHANNEL_2);
	HAL_TIM_Encoder_Start(&htim4, TIM_CHANNEL_1);
	HAL_TIM_Encoder_Start(&htim4, TIM_CHANNEL_2);
	HAL_TIM_Encoder_Start(&htim5, TIM_CHANNEL_1);
	HAL_TIM_Encoder_Start(&htim5, TIM_CHANNEL_2);
	HAL_TIM_Base_Start_IT(&htim6);

	HAL_TIM_PWM_Start_IT(&htim15, TIM_CHANNEL_2);
	HAL_TIM_PWM_Start_IT(&htim15, TIM_CHANNEL_1);

  return;
}


/**
 * @brief PID 控制器。會更新當前輪速 (rad/s)，以及 PWM。
 * @param void
 */
void MOTOR::PID(bool dir) {
  if (dir) _current_wheel_speed = (float)(_current_pulse / 4 / _encoder_res / _sr_ratio / _interval) * 2.f * M_PI;
  else _current_wheel_speed = (float)(_current_pulse / 4 / _encoder_res / _sr_ratio / _interval) * 2.f * M_PI * -1.f;

  _error = _target_wheel_speed - _current_wheel_speed;
  _integral += (_error * _interval);

  if (_target_wheel_speed == 0) _integral = 0;
  else if (_ki * _integral > 25600) _integral = 25600 / _ki;
  else if (_ki * _integral < -25600) _integral = -25600 / _ki;

  float derivative = (_error - _previous_error) / _interval;
  _previous_error = _error;

  _target_PWM = _error * _kp + _integral * _ki + derivative * _kd;
  if (_target_PWM > 25600) _target_PWM = 25600;
  else if (_target_PWM < -25600) _target_PWM = -25600;
  
  return;
}


/**
 * @brief 取得當前輪速 (rad/s)。
 * @param void
 * @return 當前輪速 (rad)。
 */
float MOTOR::get_current_wheel_speed(void){
  return _current_wheel_speed;
}


/**
 * @brief 取得 PWM 目標輸出。
 * @param void
 * @return PWM 目標輸出。
 */
float MOTOR::get_target_pwm(void){
  return _target_PWM;
};


/**
 * @brief 設定當前輪速 (rad/s)。
 * @param speed 當前輪速。
 */
void MOTOR::set_current_pulse(float pulse){
  _current_pulse = pulse;
  return;
};


/**
 * @brief 設定目標輪速 (rad/s)。
 * @param speed 目標輪速。
 */
void MOTOR::set_target_wheel_speed(float speed){
  _target_wheel_speed = speed;
  return;
};
