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

void setup() {
  Serial.begin(115200);
  irrecv.enableIRIn();  //Start the receiver
}

void loop() {
  if (irrecv.decode(&results)) {
    //print() & println() can't handle printing long longs. (uint64_t)
    serialPrintUint64(results.value, HEX);
    Serial.println("");
    irrecv.resume();  //Receive the next value
  }
  delay(100);
}
