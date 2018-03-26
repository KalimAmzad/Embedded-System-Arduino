#include<SoftwareSerial.h>
SoftwareSerial mySerial(9,10);

char msg;
char call;


void setup() {
  mySerial.begin(9600); 
}

void loop() {
  mySerial.println("AT+CMGF=1");
  delay(1000);
  mySerial.println("AT+CMGS=\"+8801991555779\"\r");
  delay(1000);
  mySerial.println("It is  a pleasure to meet the worlds top atel");
  delay(100);
  mySerial.println((char)26);
  delay(1000);

}
