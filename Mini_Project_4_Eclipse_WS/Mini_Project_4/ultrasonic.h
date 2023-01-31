/*
 * ultrasonic.h
 *
 *  Created on: Oct 12, 2022
 *      Author: Omar EL-Sheikh
 */

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_



/*******************************************************************************
 *                                Inclusions                                   *
 *******************************************************************************/
#include "std_types.h"
#include "gpio.h"

/*******************************************************************************
 *                                Definitions                                   *
 *******************************************************************************/
#define TRIGGER_PORT PORTB_ID
#define TRIGGER_PIN PIN5_ID

/*******************************************************************************
 *                                Functions ProtoTypes                         *
 *******************************************************************************/
/*
 * Description:
 * Function to initialize the ICU driver
 * Setup the call back function
 * Setup the direction for the trigger pin as output
 */
void Ultrasonic_init(void);

/*
 * Description:
 * Function to send trigger pulse to the ultrasonic sensor
 */
void Ultrasonic_Trigger(void);

/*
 * Description:
 * Function to send trigger pulse to the ultrasonic to start reading distance
 * Return the measured distance in Centimeter
 */
uint16 Ultrasonic_readDistance(void);

/*
 * Description:
 * Call back function to called by the ICU driver
 * Used to calculate the high time by ultrasonic after triggering
 */
void Ultrasonic_edgeProcessing(void);


#endif /* ULTRASONIC_H_ */
