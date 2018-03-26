int RELAY1 = A0;
int RELAY2 = A1;
int LED1 = 13;
int LED2 = 12;
int delayValue = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(RELAY1, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  pinMode(LED2, OUTPUT);

  digitalWrite(RELAY1, HIGH);
  digitalWrite(RELAY2, HIGH);

  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  Serial.begin(9600);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  digitalWrite(RELAY1, LOW);
  digitalWrite(LED1, HIGH);
  Serial.println("RELAY1 ON");
  delay(delayValue);
 
  digitalWrite(RELAY1, HIGH);
  digitalWrite(LED1, LOW);
  Serial.println("RELAY1 OFF");
//  delay(delayValue);

  digitalWrite(RELAY2, LOW);
  digitalWrite(LED2, HIGH);
  Serial.println("RELAY2 ON");
  delay(delayValue);
  
  digitalWrite(RELAY2, HIGH);
  digitalWrite(LED2, LOW);
  Serial.println("RELAY2 OFF");
//  delay(delayValue);
}
