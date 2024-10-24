/*
 * motor.cpp
 *
 *  Created on: Aug 6, 2024
 *      Author: pomelo925
 */

#include "stm32h7xx_hal.h"

#include <dc_motor.h>

/** Timer **/
extern TIM_HandleTypeDef htim1;
extern TIM_HandleTypeDef htim1;
extern TIM_HandleTypeDef htim3;
extern TIM_HandleTypeDef htim4;
extern TIM_HandleTypeDef htim5;
extern TIM_HandleTypeDef htim6;
extern TIM_HandleTypeDef htim8;
extern TIM_HandleTypeDef htim8;
extern TIM_HandleTypeDef htim15;
extern TIM_HandleTypeDef htim23;
extern TIM_HandleTypeDef htim24;

int count =0;


/** Motors Instances**/
DC_MOTOR WheelRight(GPIOD, GPIO_PIN_3);
DC_MOTOR WheelLeft(GPIOD, GPIO_PIN_4);
DC_MOTOR Intake(GPIOD, GPIO_PIN_2);
// DC_MOTOR Elevator;
DC_MOTOR EncoderRight(GPIOD, GPIO_PIN_10);
DC_MOTOR EncoderLeft(GPIOD, GPIO_PIN_11);



/**
 * @brief 馬達初始化
 * @param void
 */
void DC_MOTOR::init(void){  
  /* 啟動對應 Timer */
	HAL_TIM_Encoder_Start(&htim1, TIM_CHANNEL_ALL);
	HAL_TIM_Encoder_Start(&htim3, TIM_CHANNEL_ALL);
	HAL_TIM_Encoder_Start(&htim4, TIM_CHANNEL_ALL);
	HAL_TIM_Encoder_Start(&htim5, TIM_CHANNEL_ALL);
	HAL_TIM_Encoder_Start(&htim8, TIM_CHANNEL_ALL);
	HAL_TIM_Encoder_Start(&htim24, TIM_CHANNEL_ALL);


	HAL_TIM_Encoder_Start(&htim1, TIM_CHANNEL_ALL);
	HAL_TIM_Encoder_Start(&htim3, TIM_CHANNEL_ALL);
	HAL_TIM_Encoder_Start(&htim4, TIM_CHANNEL_ALL);
	HAL_TIM_Encoder_Start(&htim5, TIM_CHANNEL_ALL);
	HAL_TIM_Encoder_Start(&htim8, TIM_CHANNEL_ALL);
	HAL_TIM_Encoder_Start(&htim24, TIM_CHANNEL_ALL);


	HAL_TIM_Base_Start_IT(&htim6);

	HAL_TIM_PWM_Start_IT(&htim15, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start_IT(&htim15, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start_IT(&htim15, TIM_CHANNEL_2);
	HAL_TIM_PWM_Start_IT(&htim23, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start_IT(&htim23, TIM_CHANNEL_2);
	HAL_TIM_PWM_Start_IT(&htim23, TIM_CHANNEL_3);
	HAL_TIM_PWM_Start_IT(&htim23, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start_IT(&htim23, TIM_CHANNEL_2);
	HAL_TIM_PWM_Start_IT(&htim23, TIM_CHANNEL_3);

  // 初始化各個電機的參數
  WheelRight.setPID(800.f, 15000.f, 0.f);
  WheelRight.setInfo(1024.f, 26.f, 0.01f);
  WheelRight.setInverse(true);

  WheelLeft.setPID(800.f, 15000.f, 0.f);
  WheelLeft.setInfo(1024.f, 26.f, 0.01f);
  WheelLeft.setInverse(true);

  Intake.setPID(0.f, 0.f, 0.f);
  Intake.setInfo(1024.f, 26.f, 0.01f);
  Intake.setInverse(false);

  // Elevator.setPID(2.5f, 100.f, 0.f);
  // Elevator.setInfo(512.f, 20.8f, 0.001f);
  // Elevator.setInverse(false);
  EncoderRight.setPID(0.f, 0.f, 0.f);
  EncoderRight.setInfo(1000.f, 1.f, 0.01f);
  EncoderRight.setInverse(true);
//  EncoderRight._total_wheel_distance = 0.f;

  EncoderLeft.setPID(0.f, 0.f, 0.f);
  EncoderLeft.setInfo(1000.f, 1.f, 0.01f);
  EncoderLeft.setInverse(true);
//  EncoderLeft._total_wheel_distance = 0.f;

  return;
}


/**
 * @brief 更新當前輪速 (rad/s)
 */
void DC_MOTOR::updateCurrentSpeed(const int16_t currentPulse) {
  _current_pulse = currentPulse;
  float speed = (float)(_current_pulse / 4 / _encoder_res / _sr_ratio / _interval) * 2.f * M_PI;
  _current_wheel_speed = _is_inverse ? speed : -speed;
  return;
}


/**
 * @brief 更新目標 PWM 輸出
 * @param void
 */
void DC_MOTOR::updateTargetPWM(void) {
  _error = _target_wheel_speed - _current_wheel_speed;

//  static bool flag=true;
  if (count < 6) {
	  _integral = 0.f;
  }
  else {
	  _integral += (_error * _interval);
  }
  count ++;

//  if (_target_wheel_speed == 0) {
//	  _integral *= 0.9;
//  }

  // 防止積分飽和_error
   _integral = std::clamp(_integral, -MAX_INTEGRAL / _ki, MAX_INTEGRAL / _ki);


  float derivative = (_error - _previous_error) / _interval;
  _previous_error = _error;

  // 計算 PID 輸出
  _target_PWM = _error * _kp + _integral * _ki + derivative * _kd;

  // 限制 PWM 輸出
  _target_PWM = std::clamp(_target_PWM, -MAX_PWM, MAX_PWM);
  
  // 更新方向
  _is_positive_direction = (_target_PWM >= 0);
  
  return;
}


/**
// * @brief 更新當前距離 (m)
// */
//void DC_MOTOR::updateCurrentDistance(void) {
//  float distance = (_current_pulse / _encoder_res) * (2 * M_PI * WheelRadius) / _sr_ratio;
//  _current_wheel_distance = distance/1.5;
//  return;
//}

/**
 * @brief 取得當前輪速 (rad/s)
 * @param void
 * @return 當前輪速 (rad)
 */
float DC_MOTOR::get_current_wheel_speed(void) const {
  return _current_wheel_speed;
}


/**
 * @brief 取得 PWM 目標輸出
 * @param void
 * @return PWM 目標輸出
 */
float DC_MOTOR::get_target_pwm(void) const {
  return _target_PWM;
};

/**
 * @brief 取得當前距離 (m)
 * @param void
 * @return 當前距離 (m)
 */
//float DC_MOTOR::get_current_wheel_distance(void) {
//    return _current_wheel_distance;
//}

/**
 * @brief 設定目標輪速 (rad/s)
 * @param speed 目標輪速
 */
void DC_MOTOR::set_target_wheel_speed(float speed){
  _target_wheel_speed = speed /2;
  return;
};


/**
 * @brief 設置PID參數
 * @param kp P參數
 * @param ki I參數
 * @param kd D參數
 */
void DC_MOTOR::setPID(float kp, float ki, float kd) {
  _kp = kp;
  _ki = ki;
  _kd = kd;
}


/**
 * @brief 設置電機訊息
 * @param encoder_res 編碼器分辨率
 * @param sr_ratio 齒輪比
 * @param interval 時間間隔
 */
void DC_MOTOR::setInfo(float encoder_res, float sr_ratio, float interval) {
  _encoder_res = encoder_res;
  _sr_ratio = sr_ratio;
  _interval = interval;
}


/**
 * @brief 設置電機旋轉方向
 * @param is_inverse 是否反向旋轉
 */
void DC_MOTOR::setInverse(bool is_inverse){
  _is_inverse = is_inverse;
  return;
}


/**
 * @brief 更新當前輪速 (rad/s) 和目標 PWM
 * @param currentCount 當前脈波數
 */
void DC_MOTOR::update(int16_t currentCount) {
  updateCurrentSpeed(currentCount);
  updateTargetPWM();
//  updateCurrentDistance();
//  _total_wheel_distance += _current_wheel_distance;
  return;
}


/**
 * @brief 取得電機旋轉方向
 * @param void
 * @return 電機旋轉方向
 */
GPIO_PinState DC_MOTOR::getDirection(void) const {
  bool actual_direction = _is_positive_direction;
  if (_is_inverse) actual_direction = !actual_direction;
  return actual_direction ? GPIO_PIN_SET : GPIO_PIN_RESET;
}


/**
 * @brief 取得 PWM 值
 * @param void
 * @return PWM 值
 */
uint32_t DC_MOTOR::getPWMValue(void) const {
  return static_cast<uint32_t>(fabs(_target_PWM));
}

