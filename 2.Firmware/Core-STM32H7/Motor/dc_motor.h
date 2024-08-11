/*
 * motor.h
 *
 *  Created on: Aug 6, 2024
 *      Author: pomelo925
 */

#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include "stm32h7xx_hal.h"
#include <algorithm> 

class DC_MOTOR{
public:
  DC_MOTOR(GPIO_TypeDef* dirPort, uint16_t dirPin)
    : _dirPort(dirPort), _dirPin(dirPin){}

  static void init(void);

  void update(int16_t currentCount);
  
  void setPID(float kp, float ki, float kd);
  void setInfo(float encoder_res, float sr_ratio, float interval);
  void setInverse(bool is_inverse);
  
  void set_target_wheel_speed(float speed);
  
  float get_current_wheel_speed(void) const;
  float get_target_pwm(void) const;
  
  GPIO_PinState getDirection(void) const;
  uint32_t getPWMValue(void) const;

  GPIO_TypeDef* getDirectionPort(void) const { return _dirPort; }
  uint16_t getDirectionPin(void) const { return _dirPin; }

private:
  void updateCurrentSpeed(int16_t currentPulse);
  void updateTargetPWM();

  /* PID parameters */ 
  float _kp=0.f, _ki=0.f, _kd=0.f; 
  /* Time interval */ 
  float _interval=0.f;
  /* Gear ratio */
  float _sr_ratio=0.f;
  /* Encoder resolution */
  float _encoder_res=0.f;
  /* Error parameters */ 
  float _error=0.f, _integral=0.f, _error_last=0.f;
  /* Previous error */
  float _previous_error=0.f;

  /* Current wheel speed (rps). */
  float _current_wheel_speed=0.f;  
  /* Target wheel speed (rps). Given by Chassis. */
  float _target_wheel_speed=0.f; 
  /* Current pulse. Given by Interrupt. */
  int32_t _current_pulse=0;
  /* PWM target output. Fed to Interrupt. */
  float _target_PWM=0.f;

  /* Inverse direction */
  bool _is_inverse=false;
  bool _is_positive_direction;

  static constexpr float MAX_PWM = 25600.f;
  static constexpr float MAX_INTEGRAL = MAX_PWM;

  GPIO_TypeDef* _dirPort;
  uint16_t _dirPin;
};

/** DC_MOTOR **/
extern DC_MOTOR WheelRight;
extern DC_MOTOR WheelLeft;
// extern DC_MOTOR Intake;
// extern DC_MOTOR Elevator;


#endif