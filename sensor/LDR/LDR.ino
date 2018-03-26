const int led = 13;
const int ldr_pin = A0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(ldr_pin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int ldr_read = analogRead(ldr_pin);

  if(ldr_read<=20)
  {
    Serial.print("LDR is dark. LED is on ");
    Serial.println(ldr_read);
    digitalWrite(led,HIGH);
    
  }
  else
  {
    Serial.print("---------- ");
    Serial.println(ldr_read);
    digitalWrite(led,LOW);
  }

}
