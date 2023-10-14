#define LED 7        //LED 라는 글자를 7으로 바꿔라.
void setup()
{
    pinMode(LED, OUTPUT);
    Serial.begin(9600);           //통신 속도 설정
}
void loop()
{
    char ch = Serial.read();
    if(ch=='h') {
        digitalWrite(LED, HIGH);
        delay(2000);
        digitalWrite(LED, LOW);
     }
}

