#define RED 7
#define YELLOW 8
#define GREEN 9
void setup() { 
  pinMode(RED,OUTPUT);
  pinMode(YELLOW, OUTPUT); 
  pinMode(GREEN, OUTPUT); 
}
void loop() {
  digitalWrite(RED, HIGH); 
  delay(3000); 
  digitalWrite(RED, LOW); 

  digitalWrite(YELLOW,HIGH);
  delay(1000); 
  digitalWrite(YELLOW,LOW);
  
  digitalWrite(GREEN,HIGH);
  delay(2000); 
  digitalWrite(GREEN,LOW);
  delay(500);
  digitalWrite(GREEN,HIGH);
  delay(500);
  digitalWrite(GREEN,LOW);
  delay(500);
  digitalWrite(GREEN,HIGH);
  delay(500);
  digitalWrite(GREEN,LOW);
}

