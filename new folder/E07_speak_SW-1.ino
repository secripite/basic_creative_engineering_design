#define MI 659
#define SOL 784
#define LA 880
int pin[]={2,3,4}; //버튼 입력핀
int note[]={MI, SOL, LA}; // 음계 배열
void setup() { //2,3,4번핀을 입력핀으로 사용
  for(int i=0;i<3;i++){
  pinMode(pin[i],INPUT); 
  }
}
void loop() {
  for(int i=0;i<3;i++){
    if(digitalRead(pin[i])==HIGH){
    tone(8,note[i],20);
    }
  }
}



