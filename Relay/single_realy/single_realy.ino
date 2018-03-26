                       

#define RELAY1  7  
int led = 13;            
void setup()
{    
  Serial.begin(9600);
  pinMode(RELAY1, OUTPUT);
  pinMode(led,OUTPUT);
  digitalWrite(RELAY1,HIGH);       
}
void loop()
{
   digitalWrite(RELAY1,LOW);           // Turns ON Relays 1
   Serial.println("Light ON");
   digitalWrite(led,HIGH);
   delay(2000);                                      // Wait 2 seconds

   digitalWrite(RELAY1,HIGH);          // Turns Relay Off
   Serial.println("Light OFF");
   digitalWrite(led,LOW);
   delay(2000);
}
