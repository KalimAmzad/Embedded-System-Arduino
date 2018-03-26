#include<SoftwareSerial.h>
SoftwareSerial mySerial(9, 10);
char msg;
char call;

void setup(){
  mySerial.begin(9600);
  
}

void loop(){
  mySerial.println("AT+CMGF=1");
  delay(1000);
  mySerial.println("AT+CMGS=\"01521527954\"\r");
  delay (1000);
  mySerial.println("This is Team e");
  delay(1000);
  mySerial.println((char)26);
  delay(1000);
}

