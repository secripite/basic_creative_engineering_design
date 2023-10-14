#define DELAY_TIME 1000 //지연시간을 1초로 정의
void setup() {   //2~5번핀을 출력으로 사용합니다
	pinMode(2,OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
}
void loop(){
	for(int i=2;i<6;i++){
	digitalWrite(i,HIGH); 
	delay(DELAY_TIME);
	digitalWrite(i,LOW);
	}
} 


