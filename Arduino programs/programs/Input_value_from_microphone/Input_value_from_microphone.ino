void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
Serial.begin(1200);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue=analogRead(A0);
 float voltage = sensorValue * (5.0 / 1023.0);
 if(sensorValue>3)
 digitalWrite(13,HIGH);
 else
  digitalWrite(13,LOW);
  Serial.println(sensorValue);

}
