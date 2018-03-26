float temp;
int temp_pin = A0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  temp = analogRead(temp_pin);
  temp *= 0.48828125;
  Serial.print("Real temp: ");
  Serial.println(temp);
  delay(1000);

}
