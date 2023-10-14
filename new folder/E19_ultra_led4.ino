int echo = 3;
int trig = 2;

int led[] = {8, 9, 10, 11};
//각 핀 변수로 설정

void setup() {
  pinMode(trig, OUTPUT);  
  pinMode(echo, INPUT);   //음파를 받아야 하니 INPUT으로
  for(int i=0; i<4; i++)
    pinMode(led[i], OUTPUT); //각 변수 출력으로 설정
  Serial.begin(9600); //시리얼통신 시작
}

void loop() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  //초음파를 발사!
  
  int duration = pulseIn(echo, HIGH);
  //초음파가 발사되면 물체까지의 시간을 측정하여
  //변수 duration에 넣어준다.
  int distance = duration / 29 / 2;
  //측정된 시간을 cm단위로 바꿔준다.
  
  for(int i=12;i>7;i--) // 12~7까지 1감소 실행
  {
    if(distance < i) // 12~7까지 비교
      digitalWrite(led[12-i], HIGH);
      //12-i를 하면 이전 코드와 같은 동작을 하게된다.
    else
      digitalWrite(led[12-i], LOW);
  }
  delay(100); 
  // 0.1초대기 작동을 빠르게 하고 싶다면 delay를
  // 낮춰주면 된다.
  
}

