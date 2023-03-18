#define LED_R D7
#define LED_G D6
#define LED_B D5

enum{ Color_R, Color_G, Color_B, Color_RG, Color_RB, Color_GB, Color_RGB };


void setup(){
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
}

void loop(){
  unsigned int i;
  for (i = 0; i<7; i++)
  {
    Change_Color(i);
    delay(1000);
  }//改变七种色彩，调用change_Color 函数
}

void Change_Color(unsigned char data_color)
{
  switch (data_color)
  {
  case Color_R:    //红色
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_G, HIGH);
    digitalWrite(LED_B, HIGH);
    break;
  case Color_G:    //绿色
    digitalWrite(LED_R, HIGH);
    digitalWrite(LED_G, LOW);
    digitalWrite(LED_B, HIGH);
    break;
  case Color_B:       //蓝色
    digitalWrite(LED_R, HIGH);
    digitalWrite(LED_G, HIGH);
    digitalWrite(LED_B, LOW);
    break;
  case Color_RG:       //黄色
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_G, LOW);
    digitalWrite(LED_B, HIGH);
    break;
  case Color_RB:       //紫色
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_G, HIGH);
    digitalWrite(LED_B, LOW);
    break;
  case Color_GB:       //青色
    digitalWrite(LED_R, HIGH);
    digitalWrite(LED_G, LOW);
    digitalWrite(LED_B, LOW);
    break;
  case Color_RGB:       //白色
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_G, LOW);
    digitalWrite(LED_B, LOW);
    break;
  default:
    break;
  }
}
