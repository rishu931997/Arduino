void setup() {
 Serial.begin(9600);
 pinMode(2,INPUT);// put your setup code here, to run once:

}

void loop() {
 int readValue= digitalRead(2);
 Serial.println("Rishu");// put your main code here, to run repeatedly:
delay(100);
}
