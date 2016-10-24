int firstledpin=9;
int secondledpin=10;
int firstledbrightness=0;
int secondledbrightness=255;
int fadelevel = 5;
int i=1;
void setup() {
  // put your setup code here, to run once:
  pinMode(secondledpin,OUTPUT);
pinMode(firstledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(9,firstledbrightness++);
  delay(30);
  analogWrite(9,secondledbrightness--);
  delay(30);
  if(firstledbrightness>=255)
  {
   firstledbrightness=0;
  }
  if(secondledbrightness<=0)
  {
   firstledbrightness=255;
  }
}

