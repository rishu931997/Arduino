#include <Servo.h>

Servo myservo;
int a=0;
int b=1;
int pin2=2;
int pin3=3;
int pin4=4;
int pin5=5;
int pin6=6;
int pin7=7;
int pin8=8;
void setup() {
 Serial.begin(9600);
 myservo.attach(12);
   
  
}

void loop() {
    int sensorValue = analogRead(A0);
      if(b==0&&sensorValue>0)
  {
    myservo.write(90);
    a++;
  }
   if(a==0)
  {
    digitalWrite(pin2,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin6,HIGH);
    digitalWrite(pin7,HIGH);
    digitalWrite(pin8,LOW); 
  }
  if(a==1)
  {
   digitalWrite(pin2,LOW);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin5,LOW);
    digitalWrite(pin6,LOW);
    digitalWrite(pin7,LOW);
    digitalWrite(pin8,LOW);   
  }
  if(a==2)
  {
    digitalWrite(pin2,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,LOW);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin6,HIGH);
    digitalWrite(pin7,LOW);
    digitalWrite(pin8,HIGH);
   }
  if(a==3)
  {
     digitalWrite(pin2,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin6,LOW);
    digitalWrite(pin7,LOW);
    digitalWrite(pin8,HIGH);
    }
  if(a==4)
{
   digitalWrite(pin2,LOW);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin5,LOW);
    digitalWrite(pin6,LOW);
    digitalWrite(pin7,HIGH);
    digitalWrite(pin8,HIGH);
    }
if(a==5)
  { digitalWrite(pin2,HIGH);
    digitalWrite(pin3,LOW);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin6,LOW);
    digitalWrite(pin7,HIGH);
    digitalWrite(pin8,HIGH);
    }
  if(a==6)
  { digitalWrite(pin2,HIGH);
    digitalWrite(pin3,LOW);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin6,HIGH);
    digitalWrite(pin7,HIGH);
    digitalWrite(pin8,HIGH);
    }
  if(a==7)
  { digitalWrite(pin2,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin5,LOW);
    digitalWrite(pin6,LOW);
    digitalWrite(pin7,LOW);
    digitalWrite(pin8,LOW);
    }
  if(a==8)
  { digitalWrite(pin2,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin6,HIGH);
    digitalWrite(pin7,HIGH);
    digitalWrite(pin8,HIGH);
  }
  if(a==9)
  {
     digitalWrite(pin2,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin6,LOW);
    digitalWrite(pin7,HIGH);
    digitalWrite(pin8,HIGH);
    delay(1000);
     }
   if(sensorValue==0)
    myservo.write(180);
   
    
         Serial.println(sensorValue);
      Serial.println(a);
    
  // delay in between reads for stability
  b=sensorValue;
  }
