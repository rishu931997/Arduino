void setup() {
  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
    float voltage = sensorValue * (1.5 / 1023.0);
  Serial.println(voltage);
}
