
int ledPin = 9;
int sensorPin = A1;
int sensorValue = 0;
int sensorVariable = 0;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  while (millis() < 5000) {
    if (analogRead(sensorPin) > sensorValue)
    {
      sensorValue = analogRead(sensorPin);
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorVariable = analogRead(sensorPin);// - sensorValue;
  Serial.println(sensorVariable);
}
