/*
 * interrupt.cpp
 *
 *  Created on: Aug 6, 2024
 *      Author: pomelo925
 */

#include <dc_motor.h>
#include <interrupt.h>

#include <ros1.h>
#include "../Encoder/encoder.h"

static int ms=0;
int t=0, pulse=0, tmp = 0;
int16_t rightpulse=0, leftpulse=0;
float speedData[1000], encoderRight = 0, encoderLeft = 0;

//int test_pwm=100;

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
	if (htim->Instance == TIM6) {
	/* Check Interrupt time (1kHz) */
		t++;

	/* PID Control (1000Hz)*/
		dc_motor();

	/* ROS publish (10Hz)*/
		ms++;
		if (ms >= 100) {
			ROS1::pub_chassis_speed();
			ms = 0;
		}
	}
}

void dc_motor(void){
	/*enc 1*/
	// 更新輪子輪速
	WheelRight.update(__HAL_TIM_GetCounter(&htim8));
	// 重置計數器
	__HAL_TIM_SetCounter(&htim8, 0);

	// 設置電機旋轉方向
	HAL_GPIO_WritePin(WheelRight.getDirectionPort(), WheelRight.getDirectionPin(), WheelRight.getDirection());
	// 設置PWM值
	__HAL_TIM_SET_COMPARE(&htim15, TIM_CHANNEL_1, WheelRight.getPWMValue()*1000);
//	__HAL_TIM_SET_COMPARE(&htim15, TIM_CHANNEL_1, pulse);

//	if (WheelRight.get_current_wheel_speed() != 0) {
//		if (tmp < 1000) {
//				speedData[tmp] = WheelRight.get_current_wheel_speed();
//				tmp++;
//		}
//	}

	/*enc 2*/
	WheelLeft.update(__HAL_TIM_GetCounter(&htim24));
	__HAL_TIM_SetCounter(&htim24, 0);

	HAL_GPIO_WritePin(WheelLeft.getDirectionPort(), WheelLeft.getDirectionPin(), WheelLeft.getDirection());
	__HAL_TIM_SET_COMPARE(&htim15, TIM_CHANNEL_2, WheelLeft.getPWMValue()*1000);

	/*enc 3*/
	EncoderRight.update(__HAL_TIM_GetCounter(&htim1));
	__HAL_TIM_SetCounter(&htim1, 0);
//	rightpulse = __HAL_TIM_GetCounter(&htim1);
//	encoderRight = (rightpulse / 4 / 1000.f / 0.001f) * 2.f * M_PI;
//	__HAL_TIM_SetCounter(&htim1, 0);
//
//	/*enc 4*/
//	leftpulse = __HAL_TIM_GetCounter(&htim3);
//	encoderLeft = (leftpulse / 4 / 1000.f / 0.001f) * 2.f * M_PI;
//	__HAL_TIM_SetCounter(&htim3, 0);

}
