#define LED 10 //led는 10번핀
#define BUTTON 7 //버튼은 7번핀
void setup() { 
    pinMode(LED,OUTPUT); //led를 출력모드로
    pinMode(BUTTON,INPUT); //버튼을 입력모드로
}
void loop() {
    if(digitalRead(BUTTON)==HIGH){ //버튼에 전기가 인가되면
    digitalWrite(LED, HIGH); //led를 켠다
    delay(100); //0.5초 지연
    digitalWrite(LED, LOW); //led를 끈다
    }
}

