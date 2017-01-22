const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;

int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;

int a[3];
int b=0;

void setup() {
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  Serial.begin(9600);
 
}

void loop() {

for(int i=0;i<=2;i++) 
{ a[i]=0;
while(a[i]==0)
{ buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  
  
 
  
 
    if (buttonState1 == HIGH)
    a[i] = 1;
   else if (buttonState2 == HIGH) 
    a[i] = 2;
    else if(buttonState3 == HIGH) 
    a[i]= 3;
    else
    a[i]=0;
    
    
  }
  Serial.println(a[i]);
  
 
  delay(1000);
  for(int i=0;i<=2;i++) 
{ a[i]=0;

}}}
  
