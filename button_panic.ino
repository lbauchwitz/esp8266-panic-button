/*
  PanicButton

 Turns on and off a light emitting diode(LED) connected to INTERNAL
 LED of ESP 8266 Dev Board, when pressing a pushbutton attached to pin 2.


 * pushbutton attached to pin 2 (D4) from +5V
 * 10K resistor attached to pin 2 (D4) from ground

 
 */


#include <ESP8266WiFi.h>

// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  LED_BUILTIN;      // the number of the LED pin


// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  } else {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  }
}
