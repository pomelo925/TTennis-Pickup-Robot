/*
 * interrupt.cpp
 *
 *  Created on: Aug 6, 2024
 *      Author: pomelo925
 */

#include <dc_motor.h>
#include <interrupt.h>

#include <ros1.h>

static int ms=0;
//int test_pwm=100;

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
	if (htim->Instance == TIM6) {
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
	WheelRight.update(__HAL_TIM_GetCounter(&htim4));
	// 重置計數器
	__HAL_TIM_SetCounter(&htim4, 0);

	// 設置電機旋轉方向
	HAL_GPIO_WritePin(WheelRight.getDirectionPort(), WheelRight.getDirectionPin(), WheelRight.getDirection());
	// 設置PWM值
	__HAL_TIM_SET_COMPARE(&htim15, TIM_CHANNEL_1, WheelRight.getPWMValue());


	/*enc 2*/
	WheelLeft.update(__HAL_TIM_GetCounter(&htim5));
	__HAL_TIM_SetCounter(&htim5, 0);

	HAL_GPIO_WritePin(WheelLeft.getDirectionPort(), WheelLeft.getDirectionPin(), WheelLeft.getDirection());
	__HAL_TIM_SET_COMPARE(&htim15, TIM_CHANNEL_2, WheelLeft.getPWMValue());
}