/*
 * motor.h
 *
 *  Created on: Oct 7, 2024
 *      Author: Aya Yousef
 */

#ifndef MOTOR_H_
#define MOTOR_H_
#include "gpio.h"
#include "std_types.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

typedef enum{
	STATE_MOTOR_STOP,STATE_MOTOR_CLOCKWISE,STATE_MOTOR_ANTI_CLOCKWISE
}DcMotor_State;

#define INPUT1_PORT_ID              PORTB_ID
#define INPUT1_PIN_ID               PIN0_ID
#define INPUT2_PORT_ID              PORTB_ID
#define INPUT2_PIN_ID               PIN1_ID
#define ENAPLE1_PORT_ID             PORTB_ID
#define ENABLE1_PIN_ID              PIN3_ID
/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
void DcMotor_Init(void);
void DcMotor_Rotate(DcMotor_State state, uint8 speed);

#endif /* MOTOR_H_ */
