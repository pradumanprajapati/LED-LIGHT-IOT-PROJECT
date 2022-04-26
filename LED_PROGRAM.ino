
int Led1=8;
int Led2=9;
void setup() {
  // put your setup code here, to run onc
pinMode(Led1,OUTPUT);
pinMode(Led2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Led1,HIGH);
  digitalWrite(Led2,LOW);
  delay(1000);
  digitalWrite(Led2,HIGH);
  digitalWrite(Led1,LOW);
  delay(1000);

}
