#define piezo 7
#define delay_time 500
int tones[] = { 784,784,880,880,784,784,659,784,784,659,659,587,
                 784,784,880,880,784,784,659,784,659,587,659,523 }; 
void setup() {
  pinMode(piezo, OUTPUT);
  Serial.begin(9600);           //통신 속도 설정
}
void loop() {
    char ch = Serial.read();
    if(ch == 's'){

       for(int i=0; i < 24; i++) {
       tone(piezo, tones[i]);   
       delay(delay_time);
       noTone(piezo);
        }
     }
}



