 int pinLed1=1;
  int pinLed2=2;
  int pinLed3=3;
  int pinLed4=4;
int ran;
 


void setup() {
  // put your main code here, to run repeatedly:
 pinMode(pinLed1,OUTPUT);
 pinMode(pinLed2,OUTPUT);
 pinMode(pinLed3,OUTPUT);
 pinMode(pinLed4,OUTPUT);
randomSeed(analogRead(0));
  Serial.begin(9600);
 ran=random(1,7);
}
void loop(){


if(ran==1)
digitalWrite(pinLed4,HIGH);
if(ran==2)
digitalWrite(pinLed3,HIGH);
if(ran==3){
digitalWrite(pinLed4,HIGH);
digitalWrite(pinLed3,HIGH);}
if(ran==4){
digitalWrite(pinLed2,HIGH);
digitalWrite(pinLed3,HIGH);}
if(ran==5){
digitalWrite(pinLed4,HIGH);
digitalWrite(pinLed2,HIGH);
digitalWrite(pinLed3,HIGH);}
if(ran==6){
digitalWrite(pinLed1,HIGH);
digitalWrite(pinLed2,HIGH);
digitalWrite(pinLed3,HIGH);}
Serial.println(ran);

}
