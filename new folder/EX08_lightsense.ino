#define led1 4
#define led2 13

void setup() {
  Serial.begin(9600); //시리얼 모니터 오픈
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  int cds = analogRead(A0); //A1으로 들어오는 값을 cds에 저장
  Serial.println(cds);     //시리얼 모니터에 출력

  if(cds < 500) //cds값이 500보다 작으면
  {
    digitalWrite(led1, HIGH); //led1 온
    digitalWrite(led2, LOW);  //led2 오프
  }
  else          //cds값이 500보다 크면
  {
    digitalWrite(led1, LOW);  //led1 오프
    digitalWrite(led2, HIGH); //led2 온
  }
  delay(200);  
}
