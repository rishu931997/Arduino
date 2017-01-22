#include <Servo.h>

Servo myservo; //create servo object control a servo
int pos=0;
void setup() {
  myservo.attach(9);
  }

void loop() {
  
  myservo.write(180);
 /*if(pos==180)
 pos=0;
 delay(10);*/

}
