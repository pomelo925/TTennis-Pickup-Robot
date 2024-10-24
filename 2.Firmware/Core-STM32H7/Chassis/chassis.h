/*
 * chassis.h
 *
 *  Created on: Aug 6, 2024
 *      Author: pomelo925
 */

#ifndef CHASSIS_H_
#define CHASSIS_H_


struct SpeedVector{
  float x = 0.f;
  float theta = 0.f;
};

extern SpeedVector CHASSIS_CURRENT_SPEED, CHASSIS_TARGET_SPEED;


class CHASSIS{
public:
  void run(void);
  
private:
  /* Kinectics Arguments (mks)*/
  const float _driving_wheel_distance = 0.2016f;
  const float _driving_wheel_radius = 0.05f;
  const float _driven_wheel_distance = 0.339f;
  const float _driven_wheel_radius = 0.04775f;

  /* functions */
  void update_wheel_speed(void);
  void update_chassis_speed(void);
};

extern CHASSIS Chassis;


#endif /* CHASSIS_H_ */
