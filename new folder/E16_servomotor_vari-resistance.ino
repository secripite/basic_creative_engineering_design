#include <Servo.h>
Servo mysv;//Servo 클래스 사용
void setup() {
  mysv.attach(8);//8번핀으로 초기화
} 
//아날로그 A0번의 값(1~1023)을 읽어 0~90도로 매핑하여 동작
void loop() {
  mysv.write(map(analogRead(A0),0,1023,0,180));   
  delay(100); 
}

