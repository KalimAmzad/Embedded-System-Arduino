#include <Servo.h>


Servo myservo; 
int apin = A2;
int mot_pin = 9; 


void setup() {
  Serial.begin(9600);
  pinMode(apin, INPUT);
  myservo.attach(mot_pin); 

}

void loop() {
  int v = analogRead(apin);

  int d = map(v, 0, 1023, 0, 180);

  myservo.write(d);   

  Serial.println(d);
  delay(100);

}
