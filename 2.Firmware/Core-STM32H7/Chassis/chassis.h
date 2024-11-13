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
  const float _wheel_distance = 0.2f;
  const float _wheel_radius = 0.05f;

  /* functions */
  void update_wheel_speed(void);
  void update_chassis_speed(void);
};

extern CHASSIS Chassis;


#endif /* CHASSIS_H_ */