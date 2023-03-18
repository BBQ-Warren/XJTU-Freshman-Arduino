 const int buttonPin = A0; 
 int inputValue = 0;  
 void setup() {  
 pinMode(buttonPin, INPUT); 
 digitalWrite(buttonPin,LOW);  
 Serial.begin(9600);
 }
 void loop() { 
 inputValue = analogRead(buttonPin);  
 Serial.println(inputValue);
 }
