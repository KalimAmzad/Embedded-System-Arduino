int pir_input =  7;
int buzzer = 6;

int count;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pir_input,INPUT);
  pinMode(buzzer,OUTPUT);
  digitalWrite(buzzer,LOW);
  count = 0;

}

void loop() {
  // put your main code here, to run repeatedly:
  int pir_value  = digitalRead(pir_input);

  if(pir_value == 1)
  {
    count++;
    Serial.println(count);
    //delay(1000);
  }
  delay(3000);
}
