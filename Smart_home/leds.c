/*
 * leds.c
 *
 *  Created on: Oct 7, 2024
 *      Author: Aya Yousef
 */
#include "leds.h"

#include "gpio.h"
#include "std_types.h"


void LEDS_init(void){
	GPIO_setupPinDirection(LEDS_PORT_ID,LEDS_PIN1_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(LEDS_PORT_ID,LEDS_PIN2_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(LEDS_PORT_ID,LEDS_PIN3_ID,PIN_OUTPUT);
	GPIO_writePin(LEDS_PORT_ID,LEDS_PIN1_ID,LOGIC_LOW);
	GPIO_writePin(LEDS_PORT_ID,LEDS_PIN2_ID,LOGIC_LOW);
	GPIO_writePin(LEDS_PORT_ID,LEDS_PIN3_ID,LOGIC_LOW);
}

void LED_on(LED_ID id){
	if(id == RED){
		GPIO_writePin(LEDS_PORT_ID,LEDS_PIN1_ID,LOGIC_HIGH);
	}
	else if (id == GREEN){
		GPIO_writePin(LEDS_PORT_ID,LEDS_PIN2_ID,LOGIC_HIGH);
	}
	else{
		GPIO_writePin(LEDS_PORT_ID,LEDS_PIN3_ID,LOGIC_HIGH);
	}
}


void LED_off(LED_ID id){
	if(id == RED){
			GPIO_writePin(LEDS_PORT_ID,LEDS_PIN1_ID,LOGIC_LOW);
		}
		else if (id == GREEN){
			GPIO_writePin(LEDS_PORT_ID,LEDS_PIN2_ID,LOGIC_LOW);
		}
		else{
			GPIO_writePin(LEDS_PORT_ID,LEDS_PIN3_ID,LOGIC_LOW);
		}
}


