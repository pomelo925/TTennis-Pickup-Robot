/*
 * interrupt.h
 *
 *  Created on: Aug 6, 2024
 *      Author: pomelo925
 */

#ifndef INTERRUPT_H_
#define INTERRUPT_H_

#include <encoder.h>
#include "stm32h7xx_hal.h"

extern TIM_HandleTypeDef htim1;
extern TIM_HandleTypeDef htim2;
extern TIM_HandleTypeDef htim3;
extern TIM_HandleTypeDef htim4;
extern TIM_HandleTypeDef htim5;
extern TIM_HandleTypeDef htim6;
extern TIM_HandleTypeDef htim8;
extern TIM_HandleTypeDef htim15;
extern TIM_HandleTypeDef htim23;
extern TIM_HandleTypeDef htim24;

<<<<<<< HEAD
extern int t1;
extern int pulse;
extern float speedData[1000];

extern float encoder_right[4000];
extern float encoder_left[4000];
=======
extern int t;
extern int pulse;
extern float speedData[1000];
extern float encoderRight;
extern float encoderLeft;
>>>>>>> 07a38791ac489d39095a155272587fe0c2386512

#define RIGHT_DIR_PORT GPIOD
#define RIGHT_DIR_PIN GPIO_PIN_3
#define LEFT_DIR_PORT GPIOD
#define LEFT_DIR_PIN GPIO_PIN_4

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);
void dc_motor(void);

#endif /* INTERRUPT_H_ */
