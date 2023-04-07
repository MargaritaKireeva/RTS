/*
  Blink without Delay

  Turns on and off a light emitting diode (LED) connected to a digital pin,
  without using the delay() function. This means that other code can run at the
  same time without being interrupted by the LED code.

  The circuit:
  - Use the onboard LED.
  - Note: Most Arduinos have an on-board LED you can control. On the UNO, MEGA
    and ZERO it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN
    is set to the correct LED pin independent of which board is used.
    If you want to know what pin the on-board LED is connected to on your
    Arduino model, check the Technical Specs of your board at:
    https://www.arduino.cc/en/Main/Products

  created 2005
  by David A. Mellis
  modified 8 Feb 2010
  by Paul Stoffregen
  modified 11 Nov 2013
  by Scott Fitzgerald
  modified 9 Jan 2017
  by Arturo Guadalupi

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/BlinkWithoutDelay
*/

// constants won't change. Used here to set a pin number:
const int ledPin = 11;  // the number of the LED pin
const int ledPin2 = 10;
const int ledPin3 = 9;
const int ledPin4 = 6;
const int ledPin5 = 5;

// Variables will change:
int ledState = LOW;  // ledState used to set the LED
int ledState2 = LOW;
int ledState3 = LOW;
int ledState4 = LOW;
int ledState5 = LOW;
// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;
unsigned long previousMillis2 = 0;
unsigned long previousMillis3 = 0;
unsigned long previousMillis4 = 0;
unsigned long previousMillis5 = 0;  // will store last time LED was updated

// constants won't change:
const long interval = 60;  
const long interval2 = 900;
const long interval3 = 1200;
const long interval4 = 15000;
const long interval5 = 200000;// interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
}

void loop() {
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the difference
  // between the current time and last time you blinked the LED is bigger than
  // the interval at which you want to blink the LED.
  unsigned long currentMillis = micros();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
  if (currentMillis - previousMillis2 >= interval2) {
    previousMillis2 = currentMillis;
    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }
    digitalWrite(ledPin2, ledState2);
  }
  if (currentMillis - previousMillis3 >= interval3) {
    previousMillis3 = currentMillis;
    if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }
    digitalWrite(ledPin3, ledState3);
  }
  if (currentMillis - previousMillis4 >= interval4) {
    previousMillis4 = currentMillis;
    if (ledState4 == LOW) {
      ledState4 = HIGH;
    } else {
      ledState4 = LOW;
    }
    digitalWrite(ledPin4, ledState4);
  }
  if (currentMillis - previousMillis5 >= interval5) {
    previousMillis5 = currentMillis;
    if (ledState5 == LOW) {
      ledState5 = HIGH;
    } else {
      ledState5 = LOW;
    }
    digitalWrite(ledPin5, ledState5);
  }
}
