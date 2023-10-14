#define LED 10        //LED 라는 글자를 10으로 바꿔라
void setup() {
    pinMode(LED, OUTPUT);
    Serial.begin(9600);           //통신 속도 설정
}
void loop() {
    char ch = Serial.read();
    if(ch=='h') {
        digitalWrite(LED, HIGH);
     }
    if(ch=='q') {
        digitalWrite(LED, LOW);
     }
}

