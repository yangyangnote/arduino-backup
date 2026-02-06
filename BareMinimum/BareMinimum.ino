void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  //显示1
  digitalWrite(4, HIGH);   
  digitalWrite(7, HIGH);    
  delay(500);         


  digitalWrite(4, LOW);   
  digitalWrite(7, LOW);    
  delay(500);              

  //显示2
  digitalWrite(3, HIGH);   
  digitalWrite(4, HIGH);    
  digitalWrite(5, HIGH);   
  digitalWrite(8, HIGH);   
  digitalWrite(9, HIGH);   
  delay(500); 

  digitalWrite(3, LOW);   
  digitalWrite(4, LOW);    
  digitalWrite(5, LOW);   
  digitalWrite(8, LOW);   
  digitalWrite(9, LOW);   
  delay(500); 

  //显示3
  digitalWrite(3, HIGH);   
  digitalWrite(4, HIGH);    
  digitalWrite(5, HIGH);   
  digitalWrite(8, HIGH);   
  digitalWrite(9, HIGH);   
  delay(500); 

  digitalWrite(3, LOW);   
  digitalWrite(4, LOW);    
  digitalWrite(5, LOW);   
  digitalWrite(8, LOW);   
  digitalWrite(9, LOW);   
  delay(500); 




}


