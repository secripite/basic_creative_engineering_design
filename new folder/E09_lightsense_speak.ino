int sensVal;
int sensLow=1023;
int sensHeigh=0;
void setup() {
    Serial.begin(9600);
    while(millis()<5000){
    sensVal=analogRead(A0);
    if(sensVal>sensHeigh)sensHeigh=sensVal;
    if(sensVal<sensHeigh)sensLow=sensVal;
    }
}
void loop(){
    sensVal=analogRead(A0);
    int pitch=map(sensVal,sensLow,sensHeigh,50,4000);
    tone(2,pitch,20); //2번핀을 통해 해당 주파수 소리 출력
    Serial.println(pitch); // 시리얼 모니터에 빛을 양 출력
    delay(10);
}

