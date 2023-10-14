#define DELAY_TIME 1000 
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}
void loop(){
  digitalWrite(3,HIGH); //2번핀 켜짐
  delay(DELAY_TIME); 	//0.2초 지연
  digitalWrite(3,LOW); 	//2번핀 꺼짐
  digitalWrite(2,HIGH); 
  delay(DELAY_TIME);
  digitalWrite(2,LOW); 
  digitalWrite(5,HIGH); 
  delay(DELAY_TIME);
  digitalWrite(5,LOW); 
  digitalWrite(4,HIGH); 
  delay(DELAY_TIME);
  digitalWrite(4,LOW); 
}



