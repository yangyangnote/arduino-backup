void setup() {
  Serial.begin(9600);
  Serial.println("Please input serial data. ");
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available()>0){
    char serialData = Serial.read();
    Serial.println(serialData);
  }
  // put your main code here, to run repeatedly:
}
