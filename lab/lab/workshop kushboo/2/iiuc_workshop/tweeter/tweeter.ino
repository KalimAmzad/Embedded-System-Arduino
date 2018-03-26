#include <SoftwareSerial.h>

SoftwareSerial mySerial(9, 10); //RX,TX
String tweet="My+House+is+on+Fire";

String apiKey = "L67J2OPU4J1V4LXW";
void setup() {

mySerial.begin(9600);
Serial.begin(9600);

}


void loop() {

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
String getStr = "GET http://api.thingspeak.com/apps/thingtweet/1/statuses/update?api_key=";
getStr += apiKey;
getStr +="&status=";
getStr += tweet;
getStr += "\r\n\r\n";
mySerial.println(getStr);


delay(500);
mySerial.println(char(26));
delay(1500);

mySerial.println("AT+CIPSHUT\r\n");
delay(10000);
}
