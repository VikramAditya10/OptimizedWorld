
int ledPin=8;
int ledState=HIGH;
unsigned long int currentTime=0;
unsigned long int previousTime=0;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 currentTime=millis();
 if(currentTime-previousTime>=1000)
 {
  previousTime=currentTime;
  if(ledState==HIGH)
  ledState=LOW;
  else
    ledState=HIGH;
digitalWrite(ledPin,ledState);
 }
 

}
