int firstled=12;
int secondled=13;
int firstledstate=LOW;
int secondledstate=HIGH;
void setup() {
  // put your setup code here, to run once:
  // initialize digital pin 13 as an output.
  pinMode(firstled, OUTPUT);
  pinMode(secondled,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  firstledstate=HIGH;
  secondledstate=LOW;
  digitalWrite(firstled,firstledstate);
   delay(1000);
  digitalWrite(secondled,secondledstate);
  firstledstate=LOW;
  secondledstate=HIGH;
  delay(1000);
  digitalWrite(firstled,firstledstate);
   delay(1000);
  digitalWrite(secondled,secondledstate);
}
