int apin = A2;

void setup() {
  Serial.begin(9600);
  pinMode(apin, INPUT);

}

void loop() {
  int v = analogRead(apin);

  Serial.println(v);

  delay(40);

}
