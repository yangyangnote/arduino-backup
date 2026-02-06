void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT_PULLUP);
  //得到2号引脚输入上来的数字信号📶


  Serial.begin(9600);
  int pinNumber = 3;
  while(pinNumber<=9){
    pinMode(pinNumber,OUTPUT);
    pinNumber++;
  }
  randomSeed(analogRead(A0));
}

void loop() {
      int myNumber;
      for (int p = 3; p <= 9; p++) digitalWrite(p, HIGH); // 共阳：HIGH=灭
      if(!digitalRead(2)){
          myNumber = getRandomNumber(0,10);
      }
      displayNumber(myNumber);
}

int getRandomNumber(int minNumber,int maxNumber){
    int randomNumber;

    int i=0;
    while(i < 5){
      i = i + 1;
      randomNumber = random(minNumber,maxNumber);
      displayNumber(randomNumber);
      delay(100);
      displayClear();
      delay(100);

      Serial.print("i= ");
      Serial.println(i);
      Serial.print("randomNumber = ");
      Serial.println(randomNumber);
      Serial.println("");
    }


   
   
    return randomNumber;
}


void displayNumber(int ledNumber){
    switch(ledNumber){
        case 9:
            digitalWrite(3, LOW);//A  
            digitalWrite(5, LOW);//G
            digitalWrite(7, LOW);//C
            digitalWrite(6, LOW);//F
            digitalWrite(8, LOW);//D
            digitalWrite(4, LOW);//B
            break;  
        case 8:
            digitalWrite(3, LOW);//A  
            digitalWrite(5, LOW);//G
            digitalWrite(7, LOW);//C
            digitalWrite(6, LOW);//F
            digitalWrite(8, LOW);//D
            digitalWrite(4, LOW);//B
            digitalWrite(9, LOW);//E
            break;
        case 7:
            digitalWrite(3, LOW);//A  
            digitalWrite(4, LOW);//B
            digitalWrite(7, LOW);//C
            digitalWrite(6, LOW);//F
            break;
        case 6:
            digitalWrite(3, LOW);//A  
            digitalWrite(5, LOW);//G
            digitalWrite(7, LOW);//C
            digitalWrite(6, LOW);//F
            digitalWrite(8, LOW);//D
            digitalWrite(9, LOW);//E
            break;
        case 5:   
            digitalWrite(3, LOW);//A  
            digitalWrite(5, LOW);//G
            digitalWrite(7, LOW);//C
            digitalWrite(6, LOW);//F
            digitalWrite(8, LOW);//D
            break;
        case 4:
          digitalWrite(4, LOW);//B
          digitalWrite(7, LOW);//C
          digitalWrite(6, LOW);//F 
          digitalWrite(5, LOW);//G  
          break;
        case 3:
          digitalWrite(3, LOW);//A  
          digitalWrite(5, LOW);//G
          digitalWrite(7, LOW);//C
          digitalWrite(8, LOW);//D
          digitalWrite(4, LOW);//B  
          break;
        case 2:
          digitalWrite(3, LOW);//A  
          digitalWrite(5, LOW);//G
          digitalWrite(8, LOW);//D
          digitalWrite(4, LOW);//B
          digitalWrite(9, LOW);//E                
          break;
        case 1:
          digitalWrite(4, LOW);   
          digitalWrite(7, LOW);    
          break;    
        case 0:
          digitalWrite(1, LOW);   
          digitalWrite(2, LOW);    
          digitalWrite(3, LOW);   
          digitalWrite(4, LOW);   
          digitalWrite(6, LOW); 
          digitalWrite(7, LOW); 
          digitalWrite(8, LOW);   
          digitalWrite(9, LOW); 
          break;
        default:
          digitalWrite(4, LOW);   
          digitalWrite(5, LOW);    
          digitalWrite(7, LOW);   
          digitalWrite(8, LOW);   
          digitalWrite(9, LOW); 
      }
}

void displayClear(){
      digitalWrite(0, HIGH);
      digitalWrite(1, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);    
      digitalWrite(5, HIGH);   
      digitalWrite(6, HIGH);   
      digitalWrite(7, HIGH); 
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH); 
}


