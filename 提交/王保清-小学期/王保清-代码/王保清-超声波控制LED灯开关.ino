接线：led串联330欧的电阻，led正极接D5引脚

//引脚定义
const  int  trig = D2;    // 触发信号
const  int  echo = D3;    // 反馈信号


//初始化
void setup() {
  //反馈端口设置为输入
  pinMode(echo, INPUT);

  //触发端口设置为输出
  pinMode(trig, OUTPUT);

  pinMode(D5,OUTPUT);
  digitalWrite(D5,LOW);

  //打开串口
  Serial.begin(115200);
}

//主循环
void loop() {
  long IntervalTime = 0; //定义一个时间变量

  digitalWrite(trig, 1);//置高电平
  delayMicroseconds(15);//延时15us
  digitalWrite(trig, 0);//设为低电平
  IntervalTime = pulseIn(echo, HIGH);//用自带的函数采样反馈的高电平的宽度，单位us
  float S = IntervalTime / 58.00; //使用浮点计算出距离，单位cm

  if(S < 100.00)
  {
    delay(10);
    digitalWrite(D5,HIGH);
  }
  else
  {
     delay(10);
     digitalWrite(D5,LOW);
  }
  
  Serial.println(S);//通过串口输出距离数值
  S = 0;
  IntervalTime = 0;//对应的数值清零。
  delay(500);//延时间隔决定采样的频率，根据实际需要变换参数
}
