/*
 * leds.h
 *
 *  Created on: Oct 7, 2024
 *      Author: Aya Yousef
 */

#ifndef LEDS_H_
#define LEDS_H_



/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
typedef enum{
	RED,GREEN,BLUE
}LED_ID;


#define LEDS_PORT_ID   PORTB_ID
#define LEDS_PIN1_ID    PIN5_ID
#define LEDS_PIN2_ID    PIN6_ID
#define LEDS_PIN3_ID    PIN7_ID
/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

void LEDS_init(void);
     /* Initializes all Leds (red, green, blue) pins direction.
              Turn off all the Leds*/
 void LED_on(LED_ID id);
         /*Turns on the specified LED.*/
 void LED_off(LED_ID id);
            /*Turns off the specified LED */

#endif         /* LEDS_H_ */
