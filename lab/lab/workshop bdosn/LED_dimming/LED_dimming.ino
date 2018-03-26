int apin = A2;
int led = 9;

void setup() {
  Serial.begin(9600);
  pinMode(apin, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  int v = analogRead(apin);

  int d = map(v, 0, 1023, 0, 255);

  analogWrite(led, d);

  Serial.println(d);
  delay(40);

}
