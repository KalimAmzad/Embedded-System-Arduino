#include <Servo.h>
Servo my_servo;
void setup() {
  // put your setup code here, to run once:
  my_servo.attach(10);

}

void loop() {
  // put your main code here, to run repeatedly:
  my_servo.write(0);
  delay(1000);
  for(int i=0;i<=180;i+=45)
  {
    my_servo.write(i);
    delay(1000);
  }

}
