/*
 * Author : Vikram Adtya
 */
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int sensorValue=analogRead(A0);
  Serial.println("Semsor value ");
    Serial.println(sensorValue);
    

  if(sensorValue<400)
digitalWrite(13,HIGH);
else
digitalWrite(13,LOW);

}
