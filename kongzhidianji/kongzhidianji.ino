

void setup() {
  Serial.begin(9600);
  Serial.println("Please input serial data. ");
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available()>0){
    int pos = Serial.parseInt();
    Serial.print("pos value: ");
    Serial.println(pos);
  }
  // put your main code here, to run repeatedly:
}
