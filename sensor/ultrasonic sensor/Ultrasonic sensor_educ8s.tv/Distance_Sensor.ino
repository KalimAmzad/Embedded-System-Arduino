
#define echoPin 6 // Echo Pin
#define trigPin 7 // Trigger Pin

int maximumRange = 250; // Maximum range needed
int minimumRange = 1; // Minimum range needed
long duration, distance; // Duration used to calculate distance

void setup() {
 Serial.begin (9600);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
}

void loop() {
 
readDistance();

if(distance>minimumRange && distance < maximumRange)
{
 Serial.println(distance);
}else
{
  Serial.println("Out of range...");
}
 delay(50);
}

int readDistance()
{
 digitalWrite(trigPin, LOW); 
 delayMicroseconds(2); 

 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10); 
 
 digitalWrite(trigPin, LOW);
 duration = pulseIn(echoPin, HIGH);
 
 distance = duration/58.2;
}
