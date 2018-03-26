#include <SoftwareSerial.h>

int val;
int tempPin = 1;

SoftwareSerial mySerial(9, 10); //RX,TX


String apiKey = "IJMZPSMU9FXERN63";
void setup() {

mySerial.begin(9600);
Serial.begin(9600);

}


void loop() {

val = analogRead(tempPin);
float mv = ( val/1024.0)*5000;
float cel = mv/10;



Serial.print("TEMPERATURE = ");
Serial.print(cel);
Serial.print("deg C");
Serial.println();
delay(1000);

mySerial.println("AT+CIPSHUT\r\n");
delay(2000);
mySerial.println("AT+CIPSTATUS\r\n");
delay(2000);
mySerial.println("AT+CIPMUX=0\r\n");
delay(2000);
mySerial.println("AT+CSTT=\"internet\",\"\",\"\"\r\n");
delay(2000);
mySerial.println("AT+CIICR\r\n");
delay(2000);
mySerial.println("AT+CIFSR\r\n");
delay(2000);
mySerial.println("AT+CIPSTART=\"TCP\",\"184.106.153.149\",\"80\"\r\n");
delay(2000);
mySerial.println("AT+CIPSEND\r\n");
delay(500);
String getStr = "GET http://api.thingspeak.com/update?api_key=";
getStr += apiKey;
getStr +="&field1=";
getStr += cel;
getStr += "\r\n\r\n";
mySerial.println(getStr);


delay(500);
mySerial.println(char(26));
delay(1500);

mySerial.println("AT+CIPSHUT\r\n");
delay(10000);
}
