
int push_button = 7;
int led = 8;
int buzzer = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(push_button,INPUT);
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int state = digitalRead(push_button);
  if(state != 0)
  {
    for(int i=1;i<=20;i++)
    {
      digitalWrite(led,HIGH);
      delay(1000);
      digitalWrite(led,LOW);
      delay(1000);
      if(i%5==0)
      {
        digitalWrite(buzzer,HIGH);
        delay(1000);
        digitalWrite(buzzer,LOW);
        
      }
      
      
    }
  }
  else
  {
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
    
  }

}
