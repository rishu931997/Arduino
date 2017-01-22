 int pinLed1=4;
  int pinLed2=2;
  int pinLed3=3;
 // int pinLed4=4;
  int ran1;
  int ran2;
  int ran3;
  
void setup() {
  // put your main code here, to run repeatedly:
 pinMode(pinLed1,OUTPUT);
 pinMode(pinLed2,OUTPUT);
 pinMode(pinLed3,OUTPUT);
// pinMode(pinLed4,OUTPUT);
randomSeed(analogRead(0));
  Serial.begin(9600);
  ran1=random(1,4);
  ran2=random(1,4);
  ran3=random(1,4);
if(ran1==1)
digitalWrite(pinLed1,HIGH);
delay(500);
digitalWrite(pinLed1,LOW);
if(ran1==2)
digitalWrite(pinLed2,HIGH);
delay(500);
digitalWrite(pinLed2,LOW);
if(ran1==3)
digitalWrite(pinLed3,HIGH);
delay(500);
digitalWrite(pinLed3,LOW);

if(ran2==1)
digitalWrite(pinLed1,HIGH);
delay(500);
digitalWrite(pinLed1,LOW);
if(ran2==2)
digitalWrite(pinLed2,HIGH);
delay(500);
digitalWrite(pinLed2,LOW);
if(ran2==3)
digitalWrite(pinLed3,HIGH);
delay(500);
digitalWrite(pinLed3,LOW);

if(ran3==1)
digitalWrite(pinLed1,HIGH);
delay(500);
digitalWrite(pinLed1,LOW);
if(ran3==2)
digitalWrite(pinLed2,HIGH);
delay(500);
digitalWrite(pinLed2,LOW);
if(ran3==3)
digitalWrite(pinLed3,HIGH);
delay(1000);
digitalWrite(pinLed3,LOW);

Serial.println(ran1);
Serial.println(ran2);
Serial.println(ran3);
}
void loop(){
  
  
  
  }
