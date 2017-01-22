const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;

int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;

int a;
int b;
int c;
int count=0;

void setup() {
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  Serial.begin(9600);
  a=0;
  b=0;
  c=0;
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);

  if (buttonState1 == HIGH) 
  {
    a= 1;
  }
    if (buttonState2 == HIGH) 
  {
    b = 2;
  }
    if (buttonState3 == HIGH) 
   {
    c = 3;
  }
  Serial.println(a);
  Serial.println(b);
  Serial.println(c);
  Serial.println(count);
}
