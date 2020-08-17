void setup() {
  // put your setup code here, to run once:
  
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(11,HIGH);
digitalWrite(10,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
delay(2000);


digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(7,HIGH);
digitalWrite(6,LOW);
delay(2000);

digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(7,LOW);
digitalWrite(6,HIGH);
delay(2000);

digitalWrite(11,LOW);
digitalWrite(10,HIGH);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
delay(2000);








}
