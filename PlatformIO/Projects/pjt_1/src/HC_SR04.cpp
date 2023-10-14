#include <Arduino.h>

#define echo 3
#define trig 2

int val;

void setup() {
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  int distance = pulseIn(echo, HIGH) * 340 / 2 / 10000;

  Serial.print(distance);
  Serial.println("cm");
  delay(100);
}