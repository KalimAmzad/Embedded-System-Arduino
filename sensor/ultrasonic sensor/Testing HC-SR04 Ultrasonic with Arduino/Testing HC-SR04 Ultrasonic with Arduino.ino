/* How to use the HC-SR04 Ultrasonic Sensor with Arduino 
   Dev: Michalis Vasilakis // Date: 23/7/2015 // www.ardumotive.com */

//Libraries
#include "Ultrasonic.h"

//Define pins ultrasonic(trig,echo)
Ultrasonic ultrasonic(A0,A1);

//Variables
int distance;

void setup() {
  Serial.begin(9600);
}

void loop()
{
  distance = ultrasonic.Ranging(CM); //Use 'CM' for centimeters or 'INC' for inches
  //Print distance...
  Serial.print("Object found at: ");
  Serial.print(distance);
  Serial.println("cm");
  //every 1sec. 
  delay(1000);
}



