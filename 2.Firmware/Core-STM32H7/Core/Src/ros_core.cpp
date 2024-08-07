/*
 * ROS.cpp
 *
 *  Created on: Aug 6, 2024
 *      Author: pomelo925
 */


#include <ros_core.h>
#include <chassis.h>
#include "STM32Hardware.h"

ros::NodeHandle nh;

/** STM Publishers **/
geometry_msgs::Twist chassis_current_speed;
ros::Publisher pub_chassis("/odometry", &chassis_current_speed);


/** STM Subscribers **/
ros::Subscriber<geometry_msgs::Twist> sub_chassis("/cmd_vel", ROS::callback_Chassis);
ros::Subscriber<std_msgs::Bool> sub_intake("/cmd_intake", ROS::callback_Intake);
ros::Subscriber<std_msgs::Int32> sub_elevator("/cmd_elevator", ROS::callback_Elevator);

ros::Subscriber<std_msgs::Bool> sub_elevatorDoor("/cmd_elevatorDoor", ROS::callback_ElevatorDoor);
ros::Subscriber<std_msgs::Bool> sub_basketDoor("/cmd_basketDoor", ROS::callback_BasketDoor);



/**
 * @brief ROS1 節點宣告。
 * @param void
 */
void ROS::init(void){
  nh.initNode();

  nh.advertise(pub_chassis);

  nh.subscribe(sub_chassis);
  nh.subscribe(sub_intake);
  nh.subscribe(sub_elevator);
  nh.subscribe(sub_elevatorDoor);
  nh.subscribe(sub_basketDoor);
  return;
}


/**
 * @brief ROS1 循環單位。
 * @param void
 */
void ROS::spinCycle(void){
  nh.spinOnce();
  return;
}


/**
 * @brief STM 發佈底盤速度至 ROS。
 * @param void
 */
void ROS::pub_chassis_speed(void){
	chassis_current_speed.linear.x = CHASSIS_CURRENT_SPEED.x;
	chassis_current_speed.angular.z = CHASSIS_CURRENT_SPEED.theta;
 	pub_chassis.publish(&chassis_current_speed);
 	return;
}


/**
 * @brief Chassis 回調函數。
 * @param geometry_msgs::Twist
 */
void ROS::callback_Chassis(const geometry_msgs::Twist &msg){
  CHASSIS_TARGET_SPEED.x = msg.linear.x;
  CHASSIS_TARGET_SPEED.theta = msg.angular.z;
  return;
}


/**
 * @brief Intake 回調函數。
 * @param std_msgs::Bool
 */
void ROS::callback_Intake(const std_msgs::Bool &msg){
  // if(msg.data) runIntake = true;
  // else runIntake = false;
  return;
}



/**
 * @brief Elevator 回調函數。
 * @param std_msgs::Int32
 */
void ROS::callback_Elevator(const std_msgs::Int32 &msg){
  // runElevator = msg.data;
  return;
}



/**
 * @brief ElevatorDoor 回調函數。
 * @param std_msgs::Bool
 */
void ROS::callback_ElevatorDoor(const std_msgs::Bool &msg){
  // if(msg.data) runElevatorDoor = true;
  // else runElevatorDoor = false;
  return;
}


/**
 * @brief BasketDoor 回調函數。
 * @param std_msgs::Bool
 */
void ROS::callback_BasketDoor(const std_msgs::Bool &msg){
  // if(msg.data) runBasketDoor = true;
  // else runBasketDoor = false;
  return;
}



/** UART Communication **/
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

static void MX_USART1_UART_Init(void)
{

  /* USER CODE BEGIN USART1_Init 0 */

  /* USER CODE END USART1_Init 0 */

  /* USER CODE BEGIN USART1_Init 1 */

  /* USER CODE END USART1_Init 1 */
  huart1.Instance = USART1;
  huart1.Init.BaudRate = 115200;
  huart1.Init.WordLength = UART_WORDLENGTH_8B;
  huart1.Init.StopBits = UART_STOPBITS_1;
  huart1.Init.Parity = UART_PARITY_NONE;
  huart1.Init.Mode = UART_MODE_TX_RX;
  huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart1.Init.OverSampling = UART_OVERSAMPLING_16;
  huart1.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
  huart1.Init.ClockPrescaler = UART_PRESCALER_DIV1;
  huart1.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
  if (HAL_UART_Init(&huart1) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_UARTEx_SetTxFifoThreshold(&huart1, UART_TXFIFO_THRESHOLD_1_8) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_UARTEx_SetRxFifoThreshold(&huart1, UART_RXFIFO_THRESHOLD_1_8) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_UARTEx_DisableFifoMode(&huart1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART1_Init 2 */

  /* USER CODE END USART1_Init 2 */

}

void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart)
{
    nh.getHardware()->flush();
}

void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart){
	if(huart == &huart1){
		HAL_UART_DeInit(&huart1);
		MX_USART1_UART_Init();
		nh.getHardware()->init();
	}
}
