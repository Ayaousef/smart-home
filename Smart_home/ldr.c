/*
 * ldr.c
 *
 *  Created on: Oct 7, 2024
 *      Author: Aya Yousef
 */

/*
 * lcd.h
 *
 *  Created on: Oct 7, 2024
 *      Author: Aya Yousef
 */




#include "ldr.h"

#include "adc.h"


/*
 * Description :
 * Function responsible for calculate the temperature from the ADC digital value.
 */
uint16 LDR_getLightIntensity(void){
	uint16 light_value = 0;

	uint16 adc_value = 0;

	/* Read ADC channel where the temperature sensor is connected */
	adc_value = ADC_readChannel(LDR_SENSOR_CHANNEL_ID);

	/* Calculate the temperature from the ADC value*/
	light_value = (uint8)(((uint32)adc_value*LDR_SENSOR_MAX_LIGHT_INTENSITY*ADC_REF_VOLT_VALUE)/(ADC_MAXIMUM_VALUE*LDR_SENSOR_MAX_VOLT_VALUE));

	return light_value;
}


