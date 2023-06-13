#include<stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include<time.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1
#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_5_3(int solution, int answer)
{
    double circle = 1;
    double time = 5;
    double spin = 10;
    double pie = M_PI;
    double velocity = 1;
    double timespin = time / spin;
    double frequency = velocity / timespin;
    double speed = (2 * pie * circle) / timespin;


    printf("\n\n");
    printf("5-3 \n");
    printf("어느 물체가 반지름이 %6.2lfm인 원의 둘레를 %6.2lf초동안에 %6.2lf회전 \n", circle, time, spin);
    printf("하고있다\n\n");
    printf("(a) 이 물체의 주기를 구하라\n\n");//답 0.5s
    printf("(b) 진동수는 얼마인가?\n\n");
    printf("(c) 속력은 얼마인가?\n\n");
    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 이 물체의 주기를 구하라\n\n");
        printf("관련공식은 T = t / rev 입니다\n");
        printf("T: 주기, t: 시간, rev: 회전 수\n\n");
        printf("관련공식은  T = t / rev\n");
        printf("T = %6.2lfs / %6.2rev\n",time,spin);
        printf("  = %6.2lfs\n\n", timespin);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf(" T = %6.2lfs\n\n", timespin);
    }
    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 진동수는 얼마인가?\n\n");
        printf("관련공식은 f = v / T 입니다\n");
        printf("f: 진동수, v: 속도, T: 주기\n\n");
        printf("관련공식은 f = v / T\n");
        printf("f = %6.2lfm/s / %6.2lfs\n", velocity, timespin);
        printf("  = %6.2lfHz\n\n",frequency);
        
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("f = %6.2lfHz", frequency);
        printf("\n");
    }
    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(c) 속력은 얼마인가?\n\n");
        printf("관련공식은 v = 2 * π * r / T 입니다\n");
        printf("v: 속력, π: 파이, r: 반지름 ,T: 주기\n\n");
        printf("관련공식은 v = 2 * π * r / T\n");
        printf("v = 2 * %6.2lf * %6.2lfm / %6.2lfs\n",pie,circle,timespin);
        printf("  =%6.2lfm/s\n",speed);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("v = %6.2lfm/s", speed);
        printf("\n");
    }
}
void Excersize_5_17(int solution, int answer)
{
    double height = 3600;
    printf("\n\n");
    printf("5-17 \n");
    printf("높이가 %6.2lfkm에서 지구 주위의 안정한 원궤도를 운행하고\n", height);
    printf("있는 인공위성의 속도는 얼마인가?\n\n");
    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("");
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("");
        printf("\n");
    }
}


int main(void)
{

    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("======================== Pysics Trainer  ========================\n");
    printf("========================   Chapter 2     ========================\n");
    printf("=================================================================\n");

    //Excersize_2_8(1, 1);
    //Excersize_2_12(1, 1);
    //Excersize_2_16(1, 1);
    //Excersize_3_15(1, 1);
    //Excersize_4_8(1, 1);
    //Excersize_4_16(1, 1);
    Excersize_5_3(1, 1);
}