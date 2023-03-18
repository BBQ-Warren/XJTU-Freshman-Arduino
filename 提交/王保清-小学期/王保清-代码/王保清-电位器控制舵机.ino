#include <Servo.h>

//创建一个舵机控制对象
Servo myservo;

int potpin = A0;//该变量用于存储用电位器的模拟值

int val;//该变量用于存储舵机角度位置

void setup()
{
  myservo.attach(D6);//该舵机由ESP8266MCU,D6引脚控制

  Serial.begin(115200);
}

void loop() 
{ 
  val = analogRead(potpin);            //读取电位器控制的模拟值 (范围在0-1023) 
  val = map(val, 0, 1023, 0, 179);     //scale it to use it with the servo (value between 0 and 180) 
  myservo.write(val);                  //指定舵机转向的角度  

  Serial.println(val);
  
  delay(15);                           //等待15ms让舵机到达指定位置   
}
