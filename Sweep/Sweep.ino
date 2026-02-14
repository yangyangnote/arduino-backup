
#include <Servo.h>

Servo myservo;  //创建一个伺服电机对象

int pos = 0;    // 存储伺服电机角度信息

void setup() {
  myservo.attach(9);  //伺服电机调用 9 号电机
  Serial.begin(9600);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 45) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // 要让伺服电机达到电机角度信息
    Serial.println(pos);
    delay(1000); 
  }                      //等待 15 毫秒
  for (pos = 180; pos >= 0; pos -= 45) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);      // 要让伺服电机达到电机角度信息   
    Serial.println(pos);
    delay(1000);      //等待 15 毫秒摆正                
  }
}
