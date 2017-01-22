/*
 Piezo
 
 This example shows how to run a Piezo Buzzer on pin 9
 using the analogWrite() function.
 
 It beeps 3 times fast at startup, waits a second then beeps continuously
 at a slower pace
 
 */

void setup()  { 
  // declare pin 9 to be an output:
  pinMode(10, OUTPUT);
  beep(50);
  beep(50);
  beep(50);
  delay(1000);
} 

void loop()  { 
  beep(200); 
}

void beep(unsigned char delayms){
  analogWrite(10, 200);      // Almost any value can be used except 0 and 255
                           // experiment to get the best tone
  delay(delayms=100);          // wait for a delayms ms
  analogWrite(10, 0);       // 0 turns it off
  delay(delayms=100);          // wait for a delayms ms   
}  
