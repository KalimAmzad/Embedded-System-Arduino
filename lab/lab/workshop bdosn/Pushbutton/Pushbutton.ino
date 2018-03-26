int ledPin = 13; 
int inPin = 7;   
int val = 0;    

void setup() {
  pinMode(ledPin, OUTPUT); 
  pinMode(inPin, INPUT);  
}

void loop(){
  val = digitalRead(inPin); 
  if (val == HIGH) {        
    digitalWrite(ledPin, LOW);  
  } else {
    digitalWrite(ledPin, HIGH);  
  }
}

