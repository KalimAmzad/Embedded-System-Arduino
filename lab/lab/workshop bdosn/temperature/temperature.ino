int outputpin= 0;
//this sets the ground pin to LOW and the input voltage pin to high
void setup()
{
Serial.begin(9600);
}

//main loop
void loop()
{
int rawvoltage= analogRead(outputpin);
float millivolts= (rawvoltage/1024.0) * 5000;
float celsius= millivolts/10;

Serial.print(celsius);
Serial.print(" degrees Celsius, ");

Serial.print((celsius * 9)/5 + 32);
Serial.println(" degrees Fahrenheit");
delay(1000);

}
