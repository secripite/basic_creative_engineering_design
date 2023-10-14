#define DELAY_TIME 200 
//지연시간을 0.2초로 정의
void setup() {
//2~5번핀을 출력으로 사용
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}
void loop(){
  digitalWrite(2,HIGH); //2번핀 켜짐
  delay(DELAY_TIME); 	//0.2초 지연
  digitalWrite(2,LOW); 	//2번핀 꺼짐
  digitalWrite(3,HIGH); 
  delay(DELAY_TIME);
  digitalWrite(3,LOW); 
  digitalWrite(4,HIGH); 
  delay(DELAY_TIME);
  digitalWrite(4,LOW); 
  digitalWrite(5,HIGH); 
  delay(DELAY_TIME);
  digitalWrite(5,LOW); 
}



