int pin10=10;
int pin11=11;
int pin12=12;
int pin13=13;
void setup() 
{
 pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
   pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
    pinMode(1,OUTPUT);
    beep(50);
    beep(50);
    beep(50);
    delay(1000);
}

void loop() {
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
 beep(100);

}
void beep(unsigned char d)
{
  analogWrite(1,200);
  delay(d);
  analogWrite(1,0);
  delay(d);
}

