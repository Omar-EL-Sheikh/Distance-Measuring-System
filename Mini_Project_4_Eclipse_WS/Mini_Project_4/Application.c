/*
 * Application.c
 *
 *  Created on: Oct 12, 2022
 *      Author: Omar EL-Sheikh
 */
#include "lcd.h"
#include "ultrasonic.h"
#include <avr/io.h>
int main(void){
	SREG |= (1<<7);
	Ultrasonic_init();
	LCD_init();
	uint16 distance;
	LCD_displayString("Distance= ");
	while (1){
		distance = Ultrasonic_readDistance();

		LCD_moveCursor(0,10);
		LCD_intgerToString(distance);
		if (distance > 99){
			LCD_displayString(" cm");
		}
		else {
			LCD_displayString(" cm ");
		}
	}
}
