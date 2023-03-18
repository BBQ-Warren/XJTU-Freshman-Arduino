接线：led灯正极接到D6，其它的和上面的例子相同

#ifndef UNIT_TEST
#include <Arduino.h>
#endif
#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>

//An IR detector/demodulator is connected to GPIO pin 14(D5 on a NodeMCU
//board).
uint16_t RECV_PIN = 14;

IRrecv irrecv(RECV_PIN);

decode_results results;

//LED Pins
int LEDpin = D6;


void setup() {
  Serial.begin(115200);
  irrecv.enableIRIn();  //Start the receiver

  pinMode(LEDpin, OUTPUT);
  digitalWrite(LEDpin, LOW);
}

void loop() {
  if (irrecv.decode(&results)) {
    //print() & println() can't handle printing long longs. (uint64_t)
    serialPrintUint64(results.value, HEX);
    Serial.println("");

    if (results.value == 0xFF22DD) //若接收到按键设置按下的指令，打开LED
    {
      digitalWrite(LEDpin, HIGH);
    }
    else if (results.value == 0xFFC23D) //接收到退出按键按下，关闭LED
    {
      digitalWrite(LEDpin, LOW);
    }

    
    irrecv.resume();  //Receive the next value
  }
  delay(100);
}
