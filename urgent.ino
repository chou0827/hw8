 
int ledPin1 = 13; 

void setup() {
 
  pinMode(ledPin1, OUTPUT);
 
}
void loop() {

  digitalWrite(LED_BUILTIN, HIGH);  
  delay(50);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(50);                         
}
