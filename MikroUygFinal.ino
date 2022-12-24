/* HC-SR501 Motion Detector */
#define ledPin 13 // Red LED
#define pirPin 5 // Input for HC-SR501
#define buzzerPin 0 

int pirValue; // variable to store read PIR Value

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(pirPin, INPUT);
  digitalWrite(ledPin, LOW);

}

void loop() 
{
  pirValue = digitalRead(pirPin);
  digitalWrite(ledPin, pirValue);
  digitalWrite(buzzerPin, pirValue);
  tone(buzzerPin,800,80);
  delay(2000);


}