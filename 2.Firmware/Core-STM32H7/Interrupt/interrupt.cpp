/*
 * interrupt.cpp
 *
 *  Created on: Aug 6, 2024
 *      Author: pomelo925
 */

#include <dc_motor.h>
#include <interrupt.h>
#include <intake.hpp>
//#include <encoder.h>


#include <ros1.h>
#include "../Encoder/encoder.h"

<<<<<<< HEAD

static int t=0;
int t1=0;
int pulse=0, tmp = 0;
int16_t rightpulse=0, leftpulse=0;
float speedData[1000];
float encoder_right[4000];
float encoder_left[4000];
=======
static int ms=0;
int t=0, pulse=0, tmp = 0;
int16_t rightpulse=0, leftpulse=0;
float speedData[1000], encoderRight = 0, encoderLeft = 0;
>>>>>>> 07a38791ac489d39095a155272587fe0c2386512

//int test_pwm=100;

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
	if (htim->Instance == TIM6) {
<<<<<<< HEAD
	/* Check Interrupt time (100Hz) */
		t++;

=======
	/* Check Interrupt time (1kHz) */
		t++;

	/* PID Control (1000Hz)*/
>>>>>>> 07a38791ac489d39095a155272587fe0c2386512
		dc_motor();
	/* PID Control (1000Hz)*/
//		static bool flag=true;
//		if (flag) {
//			dc_motor();
//		}
//		flag = false;

	/* ROS publish (10Hz)*/
		t1++;
		if (t1 >= 10) {
			ROS1::pub_chassis_speed();
			t1 = 0;
		}
	}
}

void dc_motor(void){
	/*enc 1*/
	// 更新輪子輪速
<<<<<<< HEAD
	WheelRight.update(__HAL_TIM_GetCounter(&htim24));
	// 重置計數器
	__HAL_TIM_SetCounter(&htim24, 0);
=======
	WheelRight.update(__HAL_TIM_GetCounter(&htim8));
	// 重置計數器
	__HAL_TIM_SetCounter(&htim8, 0);
>>>>>>> 07a38791ac489d39095a155272587fe0c2386512

	// 設置電機旋轉方向
	HAL_GPIO_WritePin(WheelRight.getDirectionPort(), WheelRight.getDirectionPin(), WheelRight.getDirection());
	// 設置PWM值
<<<<<<< HEAD
	__HAL_TIM_SET_COMPARE(&htim15, TIM_CHANNEL_1, WheelRight.getPWMValue());
//	__HAL_TIM_SET_COMPARE(&htim15, TIM_CHANNEL_1, pulse);

	/*enc 2*/
	WheelLeft.update(__HAL_TIM_GetCounter(&htim8));
	__HAL_TIM_SetCounter(&htim8, 0);

	HAL_GPIO_WritePin(WheelLeft.getDirectionPort(), WheelLeft.getDirectionPin(), WheelLeft.getDirection());
	__HAL_TIM_SET_COMPARE(&htim15, TIM_CHANNEL_2, WheelLeft.getPWMValue());
//	__HAL_TIM_SET_COMPARE(&htim15, TIM_CHANNEL_2, pulse);

	/*enc 3*/
	EncoderRight.update(-__HAL_TIM_GetCounter(&htim1));
	__HAL_TIM_SetCounter(&htim1, 0);

	/*enc 4*/
	EncoderLeft.update(__HAL_TIM_GetCounter(&htim3));
	__HAL_TIM_SetCounter(&htim3, 0);
//
//	if (EncoderRight.get_current_wheel_speed() != 0) {
//		if (tmp < 4000) {
//			encoder_right[tmp] = EncoderRight.get_current_wheel_speed();
//			encoder_left[tmp] = EncoderLeft.get_current_wheel_speed();
//			tmp++;
//		}
//	}
	if(Intake_temp.mode){
		Intake.update(0);
		HAL_GPIO_WritePin(Intake.getDirectionPort(), Intake.getDirectionPin(), Intake.getDirection());
		__HAL_TIM_SET_COMPARE(&htim23, TIM_CHANNEL_3, 3000);
	}
	else {
		__HAL_TIM_SET_COMPARE(&htim23, TIM_CHANNEL_3, 0);
	}
//	HAL_GPIO_WritePin(Intake.getDirectionPort(), Intake.getDirectionPin(), GPIO_PIN_SET);
//	__HAL_TIM_SET_COMPARE(&htim23, TIM_CHANNEL_3, 2300);
=======
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

>>>>>>> 07a38791ac489d39095a155272587fe0c2386512
}
