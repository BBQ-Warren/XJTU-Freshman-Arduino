#include <Servo.h>
   Servo myservo;  // 定义舵机对象，最多八个
   int pos = 0;    // 定义舵机转动位置
   void setup()
   {
      myservo.attach(9);  // 设置舵机控制针脚
   }
   void loop()
  {
      // 0到180旋转舵机，每次延时15毫秒
      for(pos = 0; pos < 180; pos += 1)  
     {  
        myservo.write(pos);  
        delay(15);
      }
      // 180到0旋转舵机，每次延时15毫秒
      for(pos = 180; pos>=1; pos-=1)
      {                              
        myservo.write(pos);
        delay(15);
      }
  }
