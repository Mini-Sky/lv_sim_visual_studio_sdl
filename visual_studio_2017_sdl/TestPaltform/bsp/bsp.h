#ifndef __BSP_H
#define __BSP_H

#include <stdint.h>
#include <stdbool.h>

bool FourTracking_GetState(uint8_t id);
bool Infrared_GetState(void);
bool LightSensor_GetState(void);
uint16_t ThreeTracking_GetValue(uint8_t id);
uint16_t DistanceSensor_GetValue(void);
void MPU6050_GetValue(int16_t* x, int16_t* y);

void Servo_SetAngle(float angle);



#endif 

