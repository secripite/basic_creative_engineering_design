#include <Arduino.h>

#define led 3
#define PIR 2

int val;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(PIR, INPUT);
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(PIR);
  if(val == HIGH){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
  Serial.println(val);
}