#define piezo 7
#define time 500
int tones[] = { 784,784,880,880,784,784,659,784,784,659,659,587,
                784,784,880,880,784,784,659,784,659,587,659,523 }; 

void setup() {
  pinMode(piezo, OUTPUT);
  for(int i=0; i < 24; i++)  
  {                         
    tone(piezo, tones[i]);   
    delay(time);
    noTone(piezo);
  }
}

void loop() {
  
}
