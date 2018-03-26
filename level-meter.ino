int sensorPin = A0;  
int ledPin1 = 5; 
int ledPin2 = 6; 
int ledPin3 = 9;
int sensorValue = 0;  

void setup() {
  
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
}
void loop() {
  
  sensorValue = analogRead(sensorPin);
 
 if (sensorValue < 1023/4) {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
}
  
 if (sensorValue >= 1023/4 && sensorValue < 1023/2) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
} 

if (sensorValue >= 1023/2 && sensorValue < 1023*3/4) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
} 
  if (sensorValue >= 1023*3/4) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
} 
}
