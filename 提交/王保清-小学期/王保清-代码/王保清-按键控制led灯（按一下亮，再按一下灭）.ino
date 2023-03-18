#define LED 12
#define INPUT_KEY 2
int val=0;
void setup(){
  pinMode(LED,OUTPUT);
  pinMode(INPUT_KEY,INPUT_PULLUP);
  digitalWrite(LED,LOW);
}
void loop(){
 ScanKey();
 if(val==1){
  digitalWrite(LED,!digitalRead(LED));
 }
}
void ScanKey(){
  val=0;
  if(digitalRead(INPUT_KEY)==LOW){
    delay(20);
    if(digitalRead(INPUT_KEY)==LOW){
      val=1;
      while(digitalRead(INPUT_KEY)==LOW){
        delay(20);
      }
    }
  }
}
