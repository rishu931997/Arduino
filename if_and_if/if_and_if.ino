#define in 14
#define out 19
#define relay 9
#define a2 15
#define a3 16
#define a4 17
#define a5 18

int a=0;
int pin2=2;
int pin3=3;
int pin4=4;
int pin5=5;
int pin6=6;
int pin7=7;
int pin8=8;
int pin10=10;
int pin11=11;
int pin12=12;
int pin13=13;
void setup()
{
  Serial.begin(9600);
   pinMode(in, INPUT);
   pinMode(out, INPUT);
   pinMode(relay, OUTPUT);
   pinMode(a2, OUTPUT);
   pinMode(a3, OUTPUT);
   pinMode(a4, OUTPUT);
   pinMode(a5, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(11, OUTPUT);
   pinMode(12, OUTPUT);
   pinMode(13, OUTPUT);
       }
void loop()
{  
  
  if(digitalRead(in))
  {
    if(!digitalRead(in))
    {
      if(digitalRead(out))
      {
        if(!digitalRead(out))
        {
        a++;
        }
      }
    }
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
  }
       if(a<=0)
  {
        digitalWrite(relay, LOW);
     
 /*digitalWrite(pin10,HIGH);
 delay(100);
 digitalWrite(pin11,HIGH);
 delay(100);
 digitalWrite(pin12,HIGH);
 delay(100);
 digitalWrite(pin13,HIGH);
 delay(100);
  digitalWrite(pin10,LOW);
 delay(100);
 digitalWrite(pin11,LOW);
 delay(100);
 digitalWrite(pin12,LOW);
 delay(100);
 digitalWrite(pin13,LOW);
 delay(100);
 digitalWrite(a2,HIGH);
 delay(100);
 digitalWrite(a3,HIGH);
 delay(100);
 digitalWrite(a4,HIGH);
 delay(100);
 digitalWrite(a5,HIGH);
 delay(100);
  digitalWrite(a2,LOW);
 delay(100);
 digitalWrite(a3,LOW);
 delay(100);
 digitalWrite(a4,LOW);
 delay(100);
 digitalWrite(a5,LOW);
 */
  }
  
  else
    digitalWrite(relay, HIGH);
    /*if(digitalRead(in))
    {
      for(int i=0;i<2;i++)
      {
      digitalWrite(a2,HIGH);
 delay(100);
 digitalWrite(a3,HIGH);
 delay(100);
 digitalWrite(a4,HIGH);
 delay(100);
 digitalWrite(a5,HIGH);
 delay(100);
  digitalWrite(a2,LOW);
 delay(100);
 digitalWrite(a3,LOW);
 delay(100);
 digitalWrite(a4,LOW);
 delay(100);
 digitalWrite(a5,LOW);
 delay(100);
    }}
     if(digitalRead(out))
    {
      for(int i=0;i<2;i++)
      {
      digitalWrite(pin10,HIGH);
 delay(100);
 digitalWrite(pin11,HIGH);
 delay(100);
 digitalWrite(pin12,HIGH);
 delay(100);
 digitalWrite(pin13,HIGH);
 delay(100);
  digitalWrite(pin10,LOW);
 delay(100);
 digitalWrite(pin11,LOW);
 delay(100);
 digitalWrite(pin12,LOW);
 delay(100);
 digitalWrite(pin13,LOW);
 delay(100);
    }}*/
     
 Serial.println(out); 
}




