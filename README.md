# Distance-Measuring-System
![Screenshot (521)](https://user-images.githubusercontent.com/79065694/215884456-348176c2-8a7a-4080-b058-2a5589a7accc.png)
Description:
A distance measuring system using Ultrasonic sensor on ATmega16 microcontroller.
The system uses HCSR04 Ultrasonic distance to measure the distance of an opposing object.
The PWM signal sent from the signal is captured by the ICU driver implemented on the MC.
The distance is displayed on LM041L LCD.

Programming Language(s):
This project is written in C programming language.

Hardware Implementation:
This project is implemented on ATmega16 MC with a frequency of 8Mhz connected to the 
following components:
  - HCSR04 Ultrasonic Sensor
  - LM041L LCD
   
Drivers:
  - ICU
  - GPIO
  - Ultrasonic Sensor
  - LCD
