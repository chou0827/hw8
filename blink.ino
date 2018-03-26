int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin1 = 13; 
int ledPin2 = 9; 
int ledPin3 = 5;
int sensorValue = 0; 

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
}
void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
 if (sensorValue < 1023/4) {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
}
  
 if (sensorValue >= 1023/4 && sensorValue < 1023/2) {
    digitalWrite(ledPin1, HIGH);
    delay(100); 
    digitalWrite(ledPin1, LOW);
    delay(100);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
} 

if (sensorValue >= 1023/2 && sensorValue < 1023*3/4) {
    digitalWrite(ledPin1, HIGH);
    delay(100); 
    digitalWrite(ledPin1, LOW);
    delay(100);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
} 
  if (sensorValue >= 1023*3/4) {
    digitalWrite(ledPin1, HIGH);
    delay(100); 
    digitalWrite(ledPin1, LOW);
    delay(100);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
} 
}
