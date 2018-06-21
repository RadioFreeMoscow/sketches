//Constants

const int buttonPin = 14;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

//variables
int buttonState = 0;


void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println("Initialising Button Press Mechanism ....");
  delay(1000);
  pinMode(ledPin,(OUTPUT));
  Serial.println("ledPin is now tagged as an Output ....");
  delay(1000);
  pinMode(buttonPin,INPUT_PULLUP);
  Serial.println("buttonPin is now recording as an input ....");
}

void loop() {
  buttonState=digitalRead(buttonPin);
  Serial.println(buttonState);
  delay(2000);
  if(buttonState == 0) {
    digitalWrite(ledPin, LOW);
  Serial.println("Looping ledPinLOW");
  }else if (buttonState >=1)
      digitalWrite(ledPin,HIGH);
    Serial.println("Looping ledPinHIGH");
    
  }

