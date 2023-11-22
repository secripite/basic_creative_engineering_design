#include <stdlib.h>
#include <time.h>
#define MAX 5
#define btn1 1
#define btn2 2
#define btn3 3
#define btn4 4
#define resetbtn 5

int randNumber[MAX];
int cnt = 0;

void setup() {
    pinMode(btn1, INPUT);
    pinMode(btn2, INPUT);
    pinMode(btn3, INPUT);
    pinMode(btn4, INPUT);
    pinMode(resetbtn, INPUT);

    Serial.begin(9600);
    srand(time(NULL));
}


void loop() {
    int btn1_state = 0,
        btn2_state = 0,
        btn3_state = 0,
        btn4_state = 0,
        resetbtn_state = 0,
        reset_cnt = 0,
        nums_cur = 0;

    while (cnt < 3)
    {
        for(int i = 0; i < MAX ; i++)
        {
          randNumber[i] = rand() % 4 + 1;
        }
            /*
            LCD표시 코드
            */
        for (int i = 0; i < MAX; i++)
        {
            Serial.print(randNumber[i]);
        }

        while(1){
            int input_temp = 0;
            btn1_state = digitalRead(btn1);
            btn2_state = digitalRead(btn2);
            btn3_state = digitalRead(btn3);
            btn4_state = digitalRead(btn4);
            resetbtn_state = digitalRead(resetbtn);

            if(reset_cnt > 3){
                return;
            }

            if(nums_cur > MAX){
                cnt++;
                break;
            }
            
            if (btn1_state == 1)
            {
                input_temp = 1;
            }
            else if(btn2_state == 1)
            {
                input_temp = 2;
            }
            else if(btn3_state == 1)
            {
                input_temp = 3;
            }
            else if(btn4_state == 1)
            {
                input_temp = 4;
            }
            else
            {
                reset_cnt++;
            }
            
            if(randNumber[nums_cur] == input_temp){
                nums_cur++;
            }
            else if(!(resetbtn_state == 1)){
                break;
            }

            btn1_state = 0;
            btn2_state = 0;
            btn3_state = 0;
            btn4_state = 0;
            resetbtn_state = 0;
        }
    }
}