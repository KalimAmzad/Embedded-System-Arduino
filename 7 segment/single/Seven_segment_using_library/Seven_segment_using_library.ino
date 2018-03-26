/* Arduino Tutorial - 7 Segment 
   One 7 segment is one digit, from 0 to  9.
   Dev: Vasilakis Michalis // Date: 25/7/2015 // www.ardumotive.com */

//Library
#include "SevenSeg.h"

//Defines the segments A-G: SevenSeg(A, B, C, D, E, F, G);
SevenSeg disp (10,9,8,7,6,11,12);
//Number of 7 segments
const int numOfDigits =1;
//CC(or CA) pins of segment
int digitPins []={};

//Variables
int number=0; //Default number
int flag;

void setup() {
  
  Serial.begin(9600);
  //Defines the number of digits to be "numOfDigits" and the digit pins to be the elements of the array "digitPins"
  disp.setDigitPins ( numOfDigits , digitPins );
  //Only for common cathode 7segments
  disp.setCommonCathode();
  //Control brightness (values 0-100);
  disp.setDutyCycle(50);
  
}

void loop()
{ 
  /**
  //Check if incoming data is available:
    if (Serial.available() > 0)
    {
      // If it is, we'll use parseInt() to pull out only numbers:
      number = Serial.parseInt();
      flag=0;
    }
  */
  for(int i=0;i<=9;i++){
  //Valid range is from 1 to 9
  //if (number>=1 && number<=9){
    //Print number to 7 segment display
    disp.writeDigit(i);
    delay(1000);
    /**
      //Print message to serial monito only once
      if (flag==0){ 
        //Print number to serial monitor
        Serial.print("Number on 7 segment display:");
        Serial.println(number);
        flag=1;
      }
      */
  //}
  }
}
