/*
 * encoder.h
 *
 *  Created on: Aug 27s, 2024
 *      Author: renee0630
 */

#ifndef ENCODER_H_
#define ENCODER_H_

#include "stm32h7xx_hal.h"
#include <algorithm>

class ENCODER{
public:

  static void init(void);

  void update(int16_t currentCount);
  void setInfo(float encoder_res, float sr_ratio, float interval);
  void setInverse(bool is_inverse);

  float get_current_wheel_speed(void) const;

private:
  void updateCurrentSpeed(int16_t currentPulse);

  /* PID parameters */
  float _kp=0.f, _ki=0.f, _kd=0.f;
  /* Time interval */
  float _interval=0.f;
  /* Gear ratio */
  float _sr_ratio=0.f;
  /* Encoder resolution */
  float _encoder_res=0.f;
  /* Current wheel speed (rps). */
  float _current_wheel_speed=0.f;
  /* Current pulse. Given by Interrupt. */
  int16_t _current_pulse=0;
  /* Inverse direction */
  bool _is_inverse=false;
  bool _is_positive_direction;
};

/** ENCODER **/
extern ENCODER EncoderRight;
extern ENCODER EncoderLeft;


#endif
