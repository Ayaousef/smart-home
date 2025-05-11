/*
 * motor.c
 *
 *  Created on: Oct 7, 2024
 *      Author: Aya Yousef
 */

#include "motor.h"

#include "common_macros.h" /* For GET_BIT Macro */
#include "gpio.h"
#include "pwm.h"


void DcMotor_Init(void)
{
	GPIO_setupPinDirection(INPUT1_PORT_ID,INPUT1_PIN_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(INPUT2_PORT_ID,INPUT2_PIN_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(ENAPLE1_PORT_ID,ENABLE1_PIN_ID,PIN_OUTPUT);
	GPIO_writePin(INPUT1_PORT_ID,INPUT1_PIN_ID,LOGIC_LOW);
	GPIO_writePin(INPUT2_PORT_ID,INPUT2_PIN_ID,LOGIC_LOW);
}

void DcMotor_Rotate(DcMotor_State state, uint8 speed)
{


	// Set PWM duty cycle for the motor speed
	PWM_Timer0_Start(speed); // Call PWM function with speed percentage


	// Control the motor's state
	switch(state)
	{
	case 0:    // Stop
		GPIO_writePin(INPUT1_PORT_ID,INPUT1_PIN_ID,LOGIC_LOW);
		GPIO_writePin(INPUT2_PORT_ID,INPUT2_PIN_ID,LOGIC_LOW);
		break;
	case 1:   // CW
		GPIO_writePin(INPUT1_PORT_ID,INPUT1_PIN_ID,LOGIC_LOW);
		GPIO_writePin(INPUT2_PORT_ID,INPUT2_PIN_ID,LOGIC_HIGH);
		break;
	case 2:   // ACW
		GPIO_writePin(INPUT1_PORT_ID,INPUT1_PIN_ID,LOGIC_HIGH);
		GPIO_writePin(INPUT2_PORT_ID,INPUT2_PIN_ID,LOGIC_LOW);
		break;

	}

}
