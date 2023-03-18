// 引用LiquidCrystal Library
  #include <LiquidCrystal.h>
   
  // 建立LiquidCrystal 的变数lcd
  // LCD 接脚: rs, enable, d4, d5, d6, d7 
  // 对应到Arduino 接脚: 12, 11, 5, 4, 3, 2
  LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
   
  void setup() 
  {
    // 设定LCD 的行列数目(2 x 16)
    lcd.begin(16, 2);
   
    // 列印"Hello World" 讯息到LCD 上
    lcd.print("hello, world!");
   }
   
  void loop() 
 {
    // 将光标设到第5列，第2行(第一列第一行为0，0)，设置显示到屏幕第二行中间
    lcd.setCursor(6, 1);
   
    // 打印Arduino 重开之后经过的秒数
    lcd.print(millis()/1000);
  }
