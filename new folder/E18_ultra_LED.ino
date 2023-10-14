int echo = 3; 
int trig = 2;
#define led 8
void setup() { 
  Serial.begin(9600);
  pinMode(trig,OUTPUT); 
  pinMode(echo,INPUT); 
  pinMode(led,OUTPUT); 
} 
void loop() { 
  digitalWrite(trig,HIGH);   
  delay(10);
  digitalWrite(trig,LOW); 
  int distance=pulseIn(echo,HIGH)/29/2;
  // 센치미터(cm)로 변경
  // 10cm 이내로 접근 시 LED를 켠다 
  Serial.print(distance);
  Serial.println("cm");
  delay(100);
  if (distance<=10) {
    digitalWrite(led,HIGH); 
    delay(1000);
    digitalWrite(led,LOW);
  } else { 
    digitalWrite(led,LOW); 
  } 
} 

