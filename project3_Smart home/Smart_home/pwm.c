/*
 * pwm.c
 *
 *  Created on: Oct 7, 2024
 *      Author: Aya Yousef
 */



#include "pwm.h"

#include <util/delay.h> /* For the delay functions */
#include <avr/io.h>
#include "common_macros.h" /* For GET_BIT Macro */

#include "common_macros.h" /* For GET_BIT Macro */
#include "gpio.h"

/*******************************************************************************
 *                      Function Definition                                  *
 *******************************************************************************/

void PWM_Timer0_Start(uint8 duty_cycle)
{
	// Set initial value
	TCNT0 =0;
	// Set duty cycle
	OCR0 = (duty_cycle * 255) / 100;
	//OCR0 = duty_cycle;
	// Configure OC0 as output pin
	DDRB |= (1<<3);
	// Set Fast PWM mode using WGM00, WGM10
	// Set non inverting mode using COM01
	// Set 1024 pre-scaler using CS02, CS00
	TCCR0  = (1<<WGM00) | (1<<WGM01) | (1<<COM01) | (1<<CS02) | (1<<CS00);


}
