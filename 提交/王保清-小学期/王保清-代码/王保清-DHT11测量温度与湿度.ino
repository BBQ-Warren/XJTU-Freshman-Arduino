//温湿度的数据针脚
#define  DHT11PIN  D5

//温湿度库对应的头文件
#include <dht11.h>

//全局变量
dht11 DHT11;

//数据
String strData;

//初始化函数
void  setup()
{
  //设置串口的波特率
  Serial.begin(115200);

  //设置针脚端口的模式
  pinMode(DHT11PIN, OUTPUT);
}

//循环执行
void loop()
{
  //读取温湿度的数据
  int chk = DHT11.read(DHT11PIN);

  //温度
  float temp = (float)DHT11.temperature;

  Serial.print("Tep: ");
  Serial.print(temp);
  Serial.println("C");


  //湿度
  float humi = (float)DHT11.humidity;

  Serial.print("Hum: ");
  Serial.print((float)DHT11.humidity);
  Serial.println("%");

  delay(500);
}
