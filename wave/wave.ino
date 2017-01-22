/*
 Fade

 This example shows how to fade an LED on pin 9
 using the analogWrite() function.

 This example code is in the public domain.
 */

int led1 = 6;           // the pin that the LED is attached to
int led2 = 11;
int led3 =10;
int led4 = 9;
int brightness1 = 0;  // how bright the LED is
int brightness2 = 50; 
int brightness3 = 100; 
int brightness4 = 150; 
int fadeAmount = 10;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  analogWrite(led1, brightness1);
  brightness1 = brightness1 + fadeAmount;
   if (brightness1 == 50 || brightness1 == 100) {
    fadeAmount = -fadeAmount ;
  }
  analogWrite(led2, brightness2);
  brightness2 = brightness2 + fadeAmount;
   if (brightness2 == 100 || brightness2 ==150 ) {
    fadeAmount = -fadeAmount ;
  }
  analogWrite(led3, brightness3);
  brightness3 = brightness3 + fadeAmount;
   if (brightness3 == 150 || brightness3 == 200) {
    fadeAmount = -fadeAmount ;
  }
  analogWrite(led4, brightness4);
  brightness4 = brightness4 + fadeAmount;
   if (brightness4 == 200 || brightness4 == 250) {
    fadeAmount = -fadeAmount ;
  }

  // change the brightness for next time through the loop:
  // reverse the direction of the fading at the ends of the fade:
 
  // wait for 30 milliseconds to see the dimming effect
  delay(15);
}

