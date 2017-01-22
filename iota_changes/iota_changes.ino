#define in 14
#define out 19
#define relay 9
int a=0;
int pin2=2;
int pin3=3;
int pin4=4;
int pin5=5;
int pin6=6;
int pin7=7;
int pin8=8;
void setup()
{
  Serial.begin(9600);
   pinMode(in, INPUT);
  pinMode(out, INPUT);
   pinMode(relay, OUTPUT);
   }
void loop()
{  
  
  if(digitalRead(in))
  {
    a++;
  delay(1000);
    }
  if(digitalRead(out))
  {
    a--;
    delay(1000);
    digitalWrite(pin11,HIGH);
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
    digitalWrite(pin11,LOW);
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
     digitalWrite(pin11,HIGH);
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
     }
       if(a<=0)
  {
        digitalWrite(relay, LOW);
        delay(200);
  }
  
  else
    digitalWrite(relay, HIGH);
     
 Serial.println(a); 
}
