#include <Servo.h>
Servo mysv;//Servo 클래스 사용
int po=0;
void setup() {
  mysv.attach(8);//8번핀으로 초기화.
} 
//0도에서 90도까지 0.1초지연 시간을 가지고 회전
void loop() {
  for(po=0;po<180;po+=1){
    mysv.write(po);
    delay(100); 
  }
}

