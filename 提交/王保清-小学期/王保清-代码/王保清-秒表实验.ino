#define d_a 2  //定义数码管a 接引脚 2
#define d_b 3
#define d_c 4
#define d_d 5
#define d_e 6
#define d_f 7
#define d_g 8
#define d_h 9
 
#define COM1 10   //定义 第一组数码管 com1 接引脚2
#define COM2 11
#define COM3 12
#define COM4 13
 
//数码管0-F码值
unsigned char num[17][8] =
{
 //a  b  c  d  e  f  g  h 
  {1, 1, 1, 1, 1, 1, 0, 0},     //0
  {0, 1, 1, 0, 0, 0, 0, 0},     //1
  {1, 1, 0, 1, 1, 0, 1, 0},     //2
  {1, 1, 1, 1, 0, 0, 1, 0},     //3
  {0, 1, 1, 0, 0, 1, 1, 0},     //4
  {1, 0, 1, 1, 0, 1, 1, 0},     //5
  {1, 0, 1, 1, 1, 1, 1, 0},     //6
  {1, 1, 1, 0, 0, 0, 0, 0},     //7
  {1, 1, 1, 1, 1, 1, 1, 0},     //8
  {1, 1, 1, 1, 0, 1, 1, 0},     //9
  {1, 1, 1, 0, 1, 1, 1, 1},     //A
  {1, 1, 1, 1, 1, 1, 1, 1},     //B
  {1, 0, 0, 1, 1, 1, 0, 1},     //C
  {1, 1, 1, 1, 1, 1, 0, 1},     //D
  {1, 0, 0, 1, 1, 1, 1, 1},     //E
  {1, 0, 0, 0, 1, 1, 1, 1},     //F
  {0, 0, 0, 0, 0, 0, 0, 1},     //.
};
 
void setup()
{
  pinMode(d_a,OUTPUT);    //设置为输出引脚
  pinMode(d_b,OUTPUT);
  pinMode(d_c,OUTPUT);
  pinMode(d_d,OUTPUT);
  pinMode(d_e,OUTPUT);
  pinMode(d_f,OUTPUT);
  pinMode(d_g,OUTPUT);
  pinMode(d_h,OUTPUT);
 
  pinMode(COM1,OUTPUT);
  pinMode(COM2,OUTPUT);
  pinMode(COM3,OUTPUT);
  pinMode(COM4,OUTPUT);
}
 
void loop()
{
 
  //累加循环当去到9999自动从0开机计数
  for(int l = 0;l < 10;l++ )
  {
    for(int k = 0; k < 10;k++)
    {
      for(int j = 0; j < 10; j++)
      {
        for(int i = 0;i < 10;i++)
        {
          //一秒钟快闪125次，就等于一秒，
          //1000/8=125
          for(int q = 0;q<125;q++)
          {
            Display(1,l);//第一位数码管显示l的值
            delay(2);
            Display(2,k);
            delay(2);
            Display(3,j);
            delay(2);
            Display(4,i);
            delay(2);
          }
 
        }
      }
    }
  }
  
 
}
 
void Display(unsigned char com,unsigned char n)     //显示函数，com可选数值范围1-4，num可选数值范围0-9
{
  digitalWrite(d_a,LOW);      //去除余晖
  digitalWrite(d_b,LOW);
  digitalWrite(d_c,LOW);
  digitalWrite(d_d,LOW);
  digitalWrite(d_e,LOW);
  digitalWrite(d_f,LOW);
  digitalWrite(d_g,LOW);
  digitalWrite(d_h,LOW);
 
  switch(com)           //选通位选
  {
    case 1:
      digitalWrite(COM1,LOW);   //选择位1
      digitalWrite(COM2,HIGH);
      digitalWrite(COM3,HIGH);
      digitalWrite(COM4,HIGH);
      break;
    case 2:
      digitalWrite(COM1,HIGH);
      digitalWrite(COM2,LOW);   //选择位2
      digitalWrite(COM3,HIGH);
      digitalWrite(COM4,HIGH);
      break;
    case 3:
      digitalWrite(COM1,HIGH);
      digitalWrite(COM2,HIGH);
      digitalWrite(COM3,LOW);   //选择位3
      digitalWrite(COM4,HIGH);
      break;
    case 4:
      digitalWrite(COM1,HIGH);
      digitalWrite(COM2,HIGH);
      digitalWrite(COM3,HIGH);
      digitalWrite(COM4,LOW);   //选择位4
      break;
    default:break;
  }
 
  digitalWrite(d_a,num[n][0]);      //a查询码值表
  digitalWrite(d_b,num[n][1]);
  digitalWrite(d_c,num[n][2]);
  digitalWrite(d_d,num[n][3]);
  digitalWrite(d_e,num[n][4]);
  digitalWrite(d_f,num[n][5]);
  digitalWrite(d_g,num[n][6]);
  digitalWrite(d_h,num[n][7]);
}

第四题
// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis()/1000);
}
