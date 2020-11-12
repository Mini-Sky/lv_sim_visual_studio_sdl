#include "bsp.h"
#include <stdlib.h>
#include <Windows.h>

bool FourTracking_GetState(uint8_t id)
{
	srand(id);
	bool state = rand() % 2;
	return state;
}

bool Infrared_GetState(void)
{
	bool state = rand() % 2;
	return state;
}
bool LightSensor_GetState(void)
{
	bool state = rand() % 2;
	return state;
}
uint16_t ThreeTracking_GetValue(uint8_t id)
{
	uint16_t value = rand() % 1024;
	return value;
}
uint16_t DistanceSensor_GetValue(void)
{
	uint16_t value = rand() % 300;
	return value;
}
void MPU6050_GetValue(int16_t* x, int16_t* y)
{
	*x = rand() % 90;
	*y = rand() % 90;
}

void Servo_SetAngle(float angle)
{
	
}


