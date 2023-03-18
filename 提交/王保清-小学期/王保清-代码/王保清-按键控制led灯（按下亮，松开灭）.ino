#define LED 12
#define INPUT_KEY 2
int val=0;
void setup(){
  pinMode(LED,OUTPUT);
  pinMode(INPUT_KEY,INPUT_PULLUP);
}
void loop(){
  if(digitalRead(INPUT_KEY)==LOW){
    digitalWrite(LED,LOW);
  }
  else{
    digitalWrite(LED,HIGH);
  }
}
