#include<SoftwareSerial.h>
SoftwareSerial mySerial(9, 10);


void setup() {
  // put your setup code here, to run once:
mySerial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);  // Delay of 1000 milli seconds or 1 second
  mySerial.println("AT+CMGS=\"x\"\r"); // Replace x with mobile number
  delay(1000);
  mySerial.println("It was a pleasure");// The SMS text you want to send
  delay(100);
   mySerial.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
}
