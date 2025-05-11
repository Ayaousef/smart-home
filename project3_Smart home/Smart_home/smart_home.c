/*
 * smart_home.c
 *
 *  Created on: Oct 7, 2024
 *      Author: Aya Yousef
 */

#include "smart_home.h"

void FAN (void){
	uint16 temp = LM35_getTemperature();
	LCD_displayStringRowColumn(1,0,"TEMP=");
	LCD_intgerToString(temp);

	if(temp < 25){
		DcMotor_Rotate(0,0);
		LCD_displayStringRowColumn(0,1,"FAN IS OFF");
	}
	else if(temp >=25 && temp <30){
		DcMotor_Rotate(1,25);
		LCD_displayStringRowColumn(0,1,"FAN IS ON ");

	}
	else if (temp >= 30 && temp <35){
		DcMotor_Rotate(1,50);
		LCD_displayStringRowColumn(0,1,"FAN IS ON ");

	}
	else if (temp >= 35 && temp <40){
		DcMotor_Rotate(1,75);
		LCD_displayStringRowColumn(0,1,"FAN IS ON ");

	}
	else {
		DcMotor_Rotate(1,100);
		LCD_displayStringRowColumn(0,1,"FAN IS ON ");

	}
}

void ALARM (void){
	static uint8 flag = 0;

	if(FlameSensor_getValue())
	{
		flag = 1;
		LCD_clearScreen();
		while(FlameSensor_getValue())
		{
			LCD_displayStringRowColumn(0, 5, "Alert");
			Buzzer_on();
		}
	}
	else
	{
		Buzzer_off();

		if(flag == 1)
		{
			LCD_clearScreen();
		}
		flag = 0;
	}
}

void LIGHT (void){
	uint16 light = LDR_getLightIntensity();
	LCD_displayStringRowColumn(1,9,"LDR=");
	LCD_intgerToString(light);

	if(light < 15){
		if(light < 100)
		{
			LCD_displayStringRowColumn(1, 14, " ");
		}
		LED_on(RED);
		LED_on(BLUE);
		LED_on(GREEN);
	}
	else if(light >=15 && light < 50){
		LED_on(RED);
		LED_on(BLUE);
		LED_off(GREEN);
	}
	else if (light >= 50 && light < 70){
		LED_on(RED);
		LED_off(BLUE);
		LED_off(GREEN);
	}
	else {
		if(light < 100)
		{
			LCD_displayStringRowColumn(1, 15, " ");
		}
		LED_off(RED);
		LED_off(BLUE);
		LED_off(GREEN);
	}


}



int main(){
	DcMotor_Init();
	ADC_init();
	LCD_init();
	Buzzer_init();
	FlameSensor_init();
	LEDS_init();
	while(1){
		FAN();
		ALARM();
		LIGHT();



	}
}

