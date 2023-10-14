int echo = 3; // Echo Port
int trig = 2; // Trigger Port
 void setup() {
    Serial.begin(9600);
    pinMode(echo,INPUT);
    pinMode(trig,OUTPUT);
}
 void loop() {
    digitalWrite(trig,HIGH);
    delay(10);
    digitalWrite(trig,LOW); 
    int duration = pulseIn(echo,HIGH);
    int distance = duration / 29 / 2; 
    Serial.print(distance);
    Serial.println("cm");
    delay(100);
}

