int mq = A0;
int a = 2;
int val;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(mq,INPUT);
  pinMode(a,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(mq);
  Serial.println(val);
  delay(500);

  int A = digitalRead(a);
  Serial.println(A);
  delay(500);
  

}
