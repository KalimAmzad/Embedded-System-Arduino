/***********************************************************
File name: _30_SegmentDisplayModule.ino
Description:Cumulative figures(number) from 0-9999 on the
            segment display module.
Website: www.adeept.com
E-mail: support@adeept.com
Author: Tom
Date: 2016/06/16 
***********************************************************/
const int stbPin = 7;  //the segment display module STB pin connected to digital pin 7
const int clkPin = 9;  //the segment display module CLK pin connected to digital pin 9
const int dioPin = 8;  //the segment display module DIO pin connected to digital pin 8
int tump=0;            //segment display value
void sendCommand(uint8_t value) 
{ 
   digitalWrite(stbPin, LOW);                   //pin low.  To begin receiving data
   shiftOut(dioPin, clkPin, LSBFIRST, value);   //send data(value) to the segment display module
   digitalWrite(stbPin, HIGH);                  //pin high.  Stop receiving data
}  
void setup() 
{ 
   pinMode(stbPin, OUTPUT); //initialize the stbPin as an output
   pinMode(clkPin, OUTPUT); //initialize the clkPin as an output
   pinMode(dioPin, OUTPUT); //initialize the dioPin as an output
   sendCommand(0x8f);       //activate 
} 
void loop() 
{ 
   number();        //show numbers on the segment display module
   tump++;          //cumulative numbers
   if(tump>9999){   //digital display limit 0-9999
    tump=0;
   }
   delay(500);      //delay 0.5s
} 
bool number() 
{                       /*0*/ /*1*/ /*2*/ /*3*/ /*4*/ /*5*/ /*6*/ /*7*/ /*8*/ /*9*/ 
   uint8_t digits[] = { 0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f };
                        /*H*/ /*E*/ /*L*/ /*L*/ /*O*/ /*.*/ /*.*/ /*.*/ /* */ /* */
// uint8_t digits[] = { 0x76, 0x79, 0x38, 0x38, 0x3f, 0x80, 0x80, 0x80, 0x00, 0x00 };    
   sendCommand(0x40);                                       //setting the Write Data Command,using automatic address genuine.
   digitalWrite(stbPin, LOW);                               //pin low.  To begin receiving data
   shiftOut(dioPin, clkPin, LSBFIRST, 0xc0);                //Set the start address 0C0H
   shiftOut(dioPin, clkPin, LSBFIRST, digits[tump/1000%10]);//thousand data
   shiftOut(dioPin, clkPin, LSBFIRST, 0x00);                //filling high 8-bit data               
   shiftOut(dioPin, clkPin, LSBFIRST, digits[tump/100%10]); //hundred data
   shiftOut(dioPin, clkPin, LSBFIRST, 0x00);                //filling high 8-bit data 
   shiftOut(dioPin, clkPin, LSBFIRST, digits[tump/10%10]);  //ten data
   shiftOut(dioPin, clkPin, LSBFIRST, 0x00);                //filling high 8-bit data 
   shiftOut(dioPin, clkPin, LSBFIRST, digits[tump%10]);     //bit data
   shiftOut(dioPin, clkPin, LSBFIRST, 0x00);                //filling high 8-bit data 
   digitalWrite(stbPin, HIGH);                              //pin high.  Stop receiving data
   return 0; 
 }  
 
