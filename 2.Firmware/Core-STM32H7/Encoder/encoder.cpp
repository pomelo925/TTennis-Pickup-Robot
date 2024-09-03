/*
 * motor.cpp
 *
 *  Created on: Aug 27, 2024
 *      Author: renee0630
 */

#include "../Encoder/encoder.h"

#include "stm32h7xx_hal.h"


/** Timer **/
extern TIM_HandleTypeDef htim1;
extern TIM_HandleTypeDef htim3;

/** Encoder Instances**/
ENCODER EncoderRight;
ENCODER EncoderLeft;


/**
 * @brief 編碼器初始化
 * @param void
 */
void ENCODER::init(void){
  /* 啟動對應 Timer */
	HAL_TIM_Encoder_Start(&htim1, TIM_CHANNEL_ALL);
	HAL_TIM_Encoder_Start(&htim3, TIM_CHANNEL_ALL);


  // 初始化各個編碼器的參數
  EncoderRight.setInfo(1000.f, 1.f, 0.001f);
  EncoderRight.setInverse(true);

  EncoderLeft.setInfo(1000.f, 1.f, 0.001f);
  EncoderLeft.setInverse(true);

  return;
}


/**
 * @brief 更新當前輪速 (rad/s)
 */
void ENCODER::updateCurrentSpeed(const int16_t currentPulse) {
  _current_pulse = currentPulse;
  float speed = (_current_pulse / 4 / 1000.f / 1.f / 0.001f) * 2.f * M_PI;
  _current_wheel_speed = _is_inverse ? speed : -speed;
  return;
}


/**
 * @brief 取得當前輪速 (rad/s)
 * @param void
 * @return 當前輪速 (rad)
 */
float ENCODER::get_current_wheel_speed(void) const {
  return _current_wheel_speed;
}


/**
 * @brief 設置電機訊息
 * @param encoder_res 編碼器分辨率
 * @param sr_ratio 齒輪比
 * @param interval 時間間隔
 */
void ENCODER::setInfo(float encoder_res, float sr_ratio, float interval) {
  _encoder_res = encoder_res;
  _sr_ratio = sr_ratio;
  _interval = interval;
}


/**
 * @brief 設置電機旋轉方向
 * @param is_inverse 是否反向旋轉
 */
void ENCODER::setInverse(bool is_inverse){
  _is_inverse = is_inverse;
  return;
}


/**
 * @brief 更新當前輪速 (rad/s)
 * @param currentCount 當前脈波數
 */
void ENCODER::update(int16_t currentCount) {
  updateCurrentSpeed(currentCount);
  return;
}
