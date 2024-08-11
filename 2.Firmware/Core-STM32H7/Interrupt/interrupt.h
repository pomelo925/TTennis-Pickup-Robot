/*
 * interrupt.h
 *
 *  Created on: Aug 6, 2024
 *      Author: pomelo925
 */

#ifndef INTERRUPT_H_
#define INTERRUPT_H_

#include "stm32h7xx_hal.h"

extern TIM_HandleTypeDef htim2;
extern TIM_HandleTypeDef htim3;
extern TIM_HandleTypeDef htim4;
extern TIM_HandleTypeDef htim5;
extern TIM_HandleTypeDef htim6;
extern TIM_HandleTypeDef htim15;

#define RIGHT_DIR_PORT GPIOE
#define RIGHT_DIR_PIN GPIO_PIN_3
#define LEFT_DIR_PORT GPIOC
#define LEFT_DIR_PIN GPIO_PIN_13

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);
void dc_motor(void);

#endif /* INTERRUPT_H_ */
