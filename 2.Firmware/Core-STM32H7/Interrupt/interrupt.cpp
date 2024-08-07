/*
 * interrupt.cpp
 *
 *  Created on: Aug 6, 2024
 *      Author: pomelo925
 */


#include <interrupt.h>
#include <motor.h>
#include <ros_core.h>


static int ms=0, test_pwm=100;
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
	if (htim->Instance == TIM6) {
	/* ROS publish */
		ms++;
//			ROS::pub_chassis_speed();
//		}

//		__HAL_TIM_SET_COMPARE(&htim15, TIM_CHANNEL_1, test_pwm);
//		__HAL_TIM_SET_COMPARE(&htim15, TIM_CHANNEL_2, test_pwm);

	/* PID Control */
		motor();
	}
}

void motor(void){
	/*enc 1*/
		WheelRight.set_current_pulse((int16_t)__HAL_TIM_GetCounter(&htim4));
		WheelRight.PID(false);
		__HAL_TIM_SetCounter(&htim4, 0);

		// Set the direction of the right wheel based on the target PWM value
		if (WheelRight.get_target_pwm()) HAL_GPIO_WritePin(RIGHT_DIR_PORT, RIGHT_DIR_PIN, GPIO_PIN_RESET);
		else HAL_GPIO_WritePin(RIGHT_DIR_PORT, RIGHT_DIR_PIN, GPIO_PIN_SET);
		

		__HAL_TIM_SET_COMPARE(&htim15, TIM_CHANNEL_1, fabs(WheelRight.get_target_pwm()));


	/*enc 2*/
		WheelLeft.set_current_pulse((int16_t)__HAL_TIM_GetCounter(&htim5));
		WheelLeft.PID(true);
		__HAL_TIM_SetCounter(&htim5, 0);

		if (WheelLeft.get_target_pwm() > 0) HAL_GPIO_WritePin(LEFT_DIR_PORT, LEFT_DIR_PIN, GPIO_PIN_SET);
		else HAL_GPIO_WritePin(LEFT_DIR_PORT, LEFT_DIR_PIN, GPIO_PIN_RESET);

		__HAL_TIM_SET_COMPARE(&htim15, TIM_CHANNEL_2, fabs(WheelLeft.get_target_pwm()));

}
