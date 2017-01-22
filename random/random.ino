void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
randomSeed(analogRead(0));
}

void loop() {
  int number=random(1,6);
 Serial.println(number);
}
