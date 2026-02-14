#include <Servo.h>

Servo myServo; //创建Servo对象myServo(我的伺服电机)

int dataIndex = 0;//创建整数变量类型,存储输入数据序列号

void setup() {
  // put your setup code here, to run once:
  myServo.attach(6);//电机连到了 6 号引脚声
  Serial.begin(9600);//启动窗口通讯速率是 9600
  Serial.println("please input serial data");
}

void loop() {//检查串口缓存是否有数据等待传输
  if(Serial.available()>0){
      dataIndex++;
      Serial.print("dataIndex = ");
      Serial.print(dataIndex);
      Serial.println(",");

      int pos = Serial.parseInt();
      Serial.println(pos);
      myServo.write(pos);//使用pos 变量设置伺服电机
      delay(15);
  }
  

}
