/*
 * buzzer.h
 *
 *  Created on: Oct 7, 2024
 *      Author: Aya Yousef
 */

#ifndef BUZZER_H_
#define BUZZER_H_
#include "gpio.h"
#include "std_types.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
#define BUZZER_PORT_ID   PORTD_ID
#define BUZZER_PIN_ID    PIN3_ID

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/


void Buzzer_init(void);
                              /* Initializes the buzzer pin direction and turn off the buzzer.*/
void Buzzer_on(void);
                             /* Activates the buzzer.*/
void Buzzer_off(void);
                            /*Deactivates the buzzer*/


#endif /* BUZZER_H_ */
