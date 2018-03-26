int soundSensor = 2;
int LED = 13;

void setup() 
{
  Serial.begin(9600);
  pinMode (soundSensor, INPUT);
  pinMode (LED, OUTPUT);
}

void loop()
{
  int statusSensor = digitalRead (soundSensor);
  Serial.println(statusSensor);
  if (statusSensor == 1)
  {
    digitalWrite(LED, HIGH);
    Serial.println("jhj");
  }
  
  else
  {
    digitalWrite(LED, LOW);
    Serial.println("p");
  }
  
}
