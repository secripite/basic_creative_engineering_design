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
    int pitch=map(sensVal,sensLow,sensHeigh,0,255);
    analogWrite(2,pitch);
    Serial.println(pitch); 
    delay(10);
}

