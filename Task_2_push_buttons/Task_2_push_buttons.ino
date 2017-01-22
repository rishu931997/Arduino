const int buttonPin = 2;    
const int ledPin =  13;      
const int ledPin1=12;

int buttonState = 0;        

void setup() {
   pinMode(ledPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
        digitalWrite(ledPin, HIGH);
         digitalWrite(ledPin1, LOW);
        
  }
  else {
        digitalWrite(ledPin, LOW);
        digitalWrite(ledPin1, HIGH);
        
  }
}

