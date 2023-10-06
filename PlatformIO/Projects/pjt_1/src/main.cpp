#include <Arduino.h>

#define red 3
#define yellow 1
#define green 2

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  digitalWrite(green, HIGH);
  delay(2000);
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(2000);
  digitalWrite(red, LOW);
}