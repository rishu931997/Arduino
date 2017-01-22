 int pinLed1=3;
  int pinLed2=4;
  int pinLed3=5;
  int pinLed4=6;

   int ran;


void setup() {
  // put your main code here, to run repeatedly:
 pinMode(pinLed1,OUTPUT);
 pinMode(pinLed2,OUTPUT);
 pinMode(pinLed3,OUTPUT);
 pinMode(pinLed4,OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));
  ran=random(1,4);
}

void loop(){

if(ran==1)
digitalWrite(pinLed4,HIGH);
else if(ran==2)
digitalWrite(pinLed3,HIGH);
else if(ran==3){
digitalWrite(pinLed4,HIGH);
digitalWrite(pinLed3,HIGH);}
else if(ran==4){
digitalWrite(pinLed2,HIGH);
digitalWrite(pinLed3,HIGH);}
else if(ran==5){
digitalWrite(pinLed4,HIGH);
digitalWrite(pinLed2,HIGH);
digitalWrite(pinLed3,HIGH);}
else if(ran==6){
digitalWrite(pinLed1,HIGH);
digitalWrite(pinLed2,HIGH);
digitalWrite(pinLed3,HIGH);}
Serial.println(ran);
delay(1000);
}
