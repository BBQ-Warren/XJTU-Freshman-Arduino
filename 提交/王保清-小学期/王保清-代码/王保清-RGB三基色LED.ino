//全局变量,定义使用的针脚
int led1 = D7;
int led2 = D6;
int led3 = D5;

//初始化
void setup() {
  //put your setup code here, to run once:
  //设置引脚为输出模式
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

//设置颜色
void setColor(int red, int green, int blue)
{
  analogWrite(led1, red);
  analogWrite(led2, green);
  analogWrite(led3, blue);
}

//循环执行
void loop() {
  //put your main code here, to run repeatedly:
  setColor(255, 0, 0);
  delay(1000);

  setColor(0, 255, 0);
  delay(1000);

  setColor(0, 0, 255);
  delay(1000);

  setColor(0, 255, 255);
  delay(1000);

  setColor(255, 0, 255);
  delay(1000);
}
