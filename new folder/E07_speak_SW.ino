#define MI 659
#define SOL 784
#define LA 880
int pin[]={2,3,4}; //버튼 입력핀
int note[]={MI, SOL, LA}; // 음계 배열
void setup() { //2,3,4번핀을 입력핀으로 사용
  for(int i=2;i<5;i++){
  pinMode(pin[i],INPUT); 
  }
}
void loop() {
    if(digitalRead(pin[0])==HIGH){
    tone(8,note[0],20);
    }
    if(digitalRead(pin[1])==HIGH){
    tone(8,note[1],20);
    }
    if(digitalRead(pin[2])==HIGH){
    tone(8,note[2],20);
    }
}


