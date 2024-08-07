/*
 * motor.h
 *
 *  Created on: Aug 6, 2024
 *      Author: pomelo925
 */

#ifndef MOTOR_H_
#define MOTOR_H_

#include "stm32h7xx_hal.h"
#include <cstdint>

enum MotorType {
  DC_MOTOR,
  SERVO
};

class MOTOR{
public:
  static void init(void);

  float get_current_wheel_speed(void);
  float get_target_pwm(void);
  void set_current_pulse(float pulse);
  void set_target_wheel_speed(float speed);


  /** type : DC_MOTOR **/
  MOTOR(MotorType type, float kp, float ki, float kd, float interval, float sr_ratio, float encoder_res):
      _type(type), _kp(kp), _ki(ki), _kd(kd), _interval(interval), _sr_ratio(sr_ratio), _encoder_res(encoder_res){};

  /** type : SERVO **/
  MOTOR(MotorType type):
    _type(type){};

  void PID(bool dir);

private:
  /* 馬達類型 */
  MotorType _type;

  /* PID 參數 */ 
  float _kp=0.f, _ki=0.f, _kd=0.f; 
  /* 時間間隔 */ 
  float _interval=0.f;
  /* 齒論比 */
  float _sr_ratio=0.f;
  /* 編碼器精度 */
  float _encoder_res=0.f;
  /* 誤差參數 */ 
  float _error=0.f, _integral=0.f, _error_last=0.f;
  /* 前一次誤差 */
  float _previous_error=0.f;


  /* 當前輪速 (rps)。 */
  float _current_wheel_speed=0.f;  
  /* 目標輪速 (rps)。由 Chassis 給。 */
  float _target_wheel_speed=0.f; 
  /* 當前脈衝數。由 Interrupt 給。 */
  int32_t _current_pulse=0;
  /* PWM 目標輸出。餵給 Interrupt。 */
  int _target_PWM=0.f;
};


/** DC_MOTOR **/
extern MOTOR WheelRight;
extern MOTOR WheelLeft;
extern MOTOR Intake;
extern MOTOR Elevator;


/** SERVO **/
extern MOTOR ElevatorDoor;
extern MOTOR BasketDoor;

#endif
