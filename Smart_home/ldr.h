/*
 * ldr.h
 *
 *  Created on: Oct 7, 2024
 *      Author: Aya Yousef
 */

#ifndef LDR_H_
#define LDR_H_
#include "std_types.h"

#define LDR_SENSOR_CHANNEL_ID                          0
#define LDR_SENSOR_MAX_VOLT_VALUE       			   2.56
/*This represents the maximum voltage output of the LDR sensor when exposed to the
lowest possible light intensity (darkness). In a voltage divider circuit, the LDR's resistance
decreases with increasing light, resulting in maximum voltage in darkness. This value
may vary based on the circuit configuration.*/
#define LDR_SENSOR_MAX_LIGHT_INTENSITY			100
/* This represents the maximum light intensity the sensor can measure (0% → 100%)*/



uint16 LDR_getLightIntensity(void);


#endif /* LDR_H_ */
