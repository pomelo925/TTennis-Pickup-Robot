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
<<<<<<< HEAD
  void updateCurrentSpeed(void);
private:
//  void updateCurrentSpeed(void);
  void updateCurrentDistance(void);
=======

private:
  void updateCurrentSpeed(int16_t currentPulse);
>>>>>>> 07a38791ac489d39095a155272587fe0c2386512

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
<<<<<<< HEAD
  /* Current wheel distance(m). */
  float _current_wheel_distance=0.f;
=======
>>>>>>> 07a38791ac489d39095a155272587fe0c2386512
  /* Current pulse. Given by Interrupt. */
  int16_t _current_pulse=0;
  /* Inverse direction */
  bool _is_inverse=false;
  bool _is_positive_direction;
};

/** ENCODER **/
<<<<<<< HEAD
//extern ENCODER EncoderRight;
//extern ENCODER EncoderLeft;
=======
extern ENCODER EncoderRight;
extern ENCODER EncoderLeft;
>>>>>>> 07a38791ac489d39095a155272587fe0c2386512


#endif
