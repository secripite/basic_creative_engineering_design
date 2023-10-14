#define led 8
void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  int a = analogRead(A0);
  analogWrite(led, a/4);
}
