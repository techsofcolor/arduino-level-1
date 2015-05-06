/*
  Buzzer

Plays Buzzer when button is pressed

  Author: Yolanda M. Davis
  Code available on github.com/techsofcolor

 */

// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int speakerPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the speaker pin as an output:
  pinMode(speakerPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  //read the buttonPin to see if HIGH voltage or low voltage
  buttonState = digitalRead(buttonPin);

  // when button is pressed then current reads as low on the pin
  // since the switch closed and more current flows toward ground and less towards the pin

  if (buttonState == LOW) {
    // sends signal to piezo on speakerPin
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(956);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(956);
    
  }
  else {
    // turn off speaker
    digitalWrite(speakerPin, LOW);
  }
}
