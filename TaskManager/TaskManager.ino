#include <TaskManagerIO.h>
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

// constants won't change:
const long interval = 60;  
const long interval2 = 900;
const long interval3 = 1200;
const long interval4 = 15000;
const long interval5 = 200000;// interval at which to blink (milliseconds)

void ledOn(int ledState, int ledPin) {
    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
}

void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  taskManager.scheduleFixedRate(interval, [] {
    ledOn(ledState, ledPin);
  }, TIME_MICROS);
  taskManager.scheduleFixedRate(interval2, [] {
    ledOn(ledState2, ledPin2);
  }, TIME_MICROS);
  taskManager.scheduleFixedRate(interval3, [] {
    ledOn(ledState3, ledPin3);
  }, TIME_MICROS);
  taskManager.scheduleFixedRate(interval4, [] {
    ledOn(ledState4, ledPin4);
  }, TIME_MICROS);
  taskManager.scheduleFixedRate(interval5, [] {
    ledOn(ledState5, ledPin5);
  }, TIME_MICROS);
}

void loop() {
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the difference
  // between the current time and last time you blinked the LED is bigger than
  // the interval at which you want to blink the LED.
  taskManager.runLoop();
}
