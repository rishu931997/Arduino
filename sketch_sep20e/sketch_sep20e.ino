int pin2=2;
int pin3=3;
int pin4=4;
int pin5=5;
int pin6=6;
int pin7=7;
int pin8=8;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(pin5,OUTPUT);
  pinMode(pin6,OUTPUT);
  pinMode(pin7,OUTPUT);
  pinMode(pin8,OUTPUT);
 }

void loop() {
  for(int i=0;i<=9;i++)
  {
  if(i==0)
  {
    digitalWrite(pin2,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin6,HIGH);
    digitalWrite(pin7,HIGH);
    digitalWrite(pin8,LOW);
  }
  if(i==1)
  {
   digitalWrite(pin2,LOW);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin5,LOW);
    digitalWrite(pin6,LOW);
    digitalWrite(pin7,LOW);
    digitalWrite(pin8,LOW);
  }
  delay(1000);
  if(i==2)
  {
    digitalWrite(pin2,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,LOW);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin6,HIGH);
    digitalWrite(pin7,LOW);
    digitalWrite(pin8,HIGH);
  }
  if(i==3)
  {
     digitalWrite(pin2,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin6,LOW);
    digitalWrite(pin7,LOW);
    digitalWrite(pin8,HIGH);
  }
if(i==4)
{
   digitalWrite(pin2,LOW);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin5,LOW);
    digitalWrite(pin6,LOW);
    digitalWrite(pin7,HIGH);
    digitalWrite(pin8,HIGH);
}
if(i==5)
  { digitalWrite(pin2,HIGH);
    digitalWrite(pin3,LOW);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin6,LOW);
    digitalWrite(pin7,HIGH);
    digitalWrite(pin8,HIGH);
  }
  if(i==6)
  { digitalWrite(pin2,HIGH);
    digitalWrite(pin3,LOW);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin6,HIGH);
    digitalWrite(pin7,HIGH);
    digitalWrite(pin8,HIGH);
  }
  if(i==7)
  { digitalWrite(pin2,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin5,LOW);
    digitalWrite(pin6,LOW);
    digitalWrite(pin7,LOW);
    digitalWrite(pin8,LOW);
  }
  if(i==8)
  { digitalWrite(pin2,HIGH);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,HIGH);
    digitalWrite(pin5,HIGH);
    digitalWrite(pin6,HIGH);
    digitalWrite(pin7,HIGH);
    digitalWrite(pin8,HIGH);
  }
  if(i==9)
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

  }

  }
  
