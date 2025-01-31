/*
 * flame_sensor.h
 *
 *  Created on: Oct 7, 2024
 *      Author: Aya Yousef
 */

#ifndef FLAME_SENSOR_H_
#define FLAME_SENSOR_H_
#include "gpio.h"
#include "std_types.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
#define FLAME_SENSOR_PORT_ID   PORTD_ID
#define FLAME_SENSOR_PIN_ID    PIN2_ID

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
void FlameSensor_init(void);
uint8 FlameSensor_getValue(void);




#endif /* FLAME_SENSOR_H_ */
