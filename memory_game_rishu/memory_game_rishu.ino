  int pinLed1=12;
  int pinLed2=11;
  int pinLed3=10;
  int pinLed4=8;
  int pinLed5=7;
  int ran1;
  int ran2;
  int ran3;
  const int buttonPin1 = 2;
  const int buttonPin2 = 3;
  const int buttonPin3 = 4;

  int buttonState1 = 0;
  int buttonState2 = 0;
  int buttonState3 = 0;

  int a[3];
  int b=0;
  
void setup() {
  // put your main code here, to run repeatedly:
 pinMode(pinLed1,OUTPUT);
 pinMode(pinLed2,OUTPUT);
 pinMode(pinLed3,OUTPUT);
 pinMode(pinLed4,OUTPUT);
  pinMode(pinLed5,OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
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
  for(int i=0;i<=2;i++) 
{ a[i]=0;
while(a[i]==0)
{ buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  
  
 
  
 
    if (buttonState1 == HIGH)
    {
      a[i] = 1;
      digitalWrite(pinLed1,HIGH);
      delay(500);
       digitalWrite(pinLed1,LOW);
    }
    
   else if (buttonState2 == HIGH) 
    {a[i] = 2;
       digitalWrite(pinLed2,HIGH);
       delay(500);
       digitalWrite(pinLed2,LOW);
    }
    else if(buttonState3 == HIGH) 
    {a[i]= 3;
     digitalWrite(pinLed3,HIGH);
     delay(500);
     digitalWrite(pinLed3,LOW);
    }
    else
    a[i]=0;
    
    
  }
  Serial.println(a[i]);
  
 
  delay(1000);
 /* for(int i=0;i<=2;i++) 
{ a[i]=0;}*/
}
  if(a[0]==ran1&&a[1]==ran2&&a[2]==ran3)
  {
    digitalWrite(pinLed4,HIGH);
  }
  else 
  {
    digitalWrite(pinLed5,HIGH);
 }}
