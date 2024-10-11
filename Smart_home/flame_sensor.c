/*
 * flame_sensor.c
 *
 *  Created on: Oct 7, 2024
 *      Author: Aya Yousef
 */

#include "flame_sensor.h"

#include "gpio.h"

/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/

void FlameSensor_init(void)
{
	GPIO_setupPinDirection(FLAME_SENSOR_PORT_ID,FLAME_SENSOR_PIN_ID,PIN_INPUT);
}

uint8 FlameSensor_getValue(void)
{
	if(!(GPIO_readPin(FLAME_SENSOR_PORT_ID,FLAME_SENSOR_PIN_ID)))
	{
		return LOGIC_LOW;  // Turn off alarm
	}
	else
	{
	return LOGIC_HIGH;  // Turn on alarm
	}
}
