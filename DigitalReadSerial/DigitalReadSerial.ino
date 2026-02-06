/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/DigitalReadSerial/
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = 2;
//引脚2


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  //串口->开始通讯  速率9600
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
  //引脚设为输入设备
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  //当前按键所处的状态
  int buttonState = digitalRead(pushButton);
  //读取数字引脚的HIGH(高电平)或LOW(低电平) -> HIGH(高电平) 1 / LOW(低电平) 0
  // print out the state of the button:
  Serial.println(buttonState);
  //把数字引脚的数值输出到串口监视器
  delay(10);  // delay in between reads for stability
  //暂停一下
}
