const int ledPin=9;
int byteToSend;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
  byteToSend=Serial.read();
  if(byteToSend=='H'||byteToSend=='h'){
    analogWrite(ledPin,255);
  }
 if(byteToSend=='L'||byteToSend=='l'){
    analogWrite(ledPin,0);
  }
}
}
