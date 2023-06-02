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


void Excersize_3_15(int solution, int answer)
{

    double height = 490;
    height = 490 + rand() % (49 + 1) - 29.5;
    double first_height = 0;
    double down = 100;
    down = 100 + rand() % (10 + 1) - 5;
    double initial_speed = 0;
    double gravitational_acceleration = -9.8;
    double time = sqrt((height * 2 / -gravitational_acceleration));
    double super_speed = down / time;

  

    printf("\n\n");
    printf("3-15 \n");
    printf("높이 %6.2lfm인 곳에서 수평방향으로 던진 물체가 던진 곳에서\n",height);
    printf("수평방향으로 %6.2lfm인 곳에 떨어졌다.\n",down);
    printf("(a)이 물체가 땅에 떨어질 때까지 걸린 시간은 얼마인가?\n");
    printf("(b)물체의 초속도는 얼마인가?\n");


    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("===============================풀이================================\n");
        printf("(a)이 물체가 땅에 떨어질 때까지 걸린 시간은 얼마인가?\n\n");
        printf("관련공식은 y = y0 + v0yt + 1/2(-g)t^2 입니다. \n");
        printf("y: 높이, y0: 초기 높이 ,v0yt: 초기 속도 ,g: 중력 가속도 ,t: 시간\n\n");
        printf("중력가속도는 아래 방향이므로 %6.2lfm/s^2 입니다.\n\n", gravitational_acceleration);
        printf("y      = y0 + v0yt + 1/2(-g)t^2\n\n");
        printf("%6.2lf = %6.2lfm + %6.2lfm/s + 1/2%6.2lft^2\n", first_height, height, initial_speed, gravitational_acceleration);
        printf("t^2    = %6.2lfm * 2 /%6.2lfm/s^2\n", height, -gravitational_acceleration);
        printf("       = %6.2lfs\n",time);
        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n");
        printf("t = %6.2lfs\n",time);
        printf("=================================================================\n");
        printf("\n\n\n");
    }
    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("===============================풀이================================\n");
        printf("(b)물체의 초속도는 얼마인가?\n\n");
        printf("관련공식은 △x = v0x * t \n");
        printf("△x:수평방향으로 떨어진 거리 ,v0xt: 초속도, t: 시간\n\n");
        printf("△x     = v0x * t\n");
        printf("%6.2lfm = v0x * %6.2lfs\n",down,time);
        printf("v0x     = %6.2lfm / %6.2lfs\n",down,time);
        printf("v0x     = %6.2lfm/s\n",super_speed);
        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n");
        printf("v0x = %6.2lfm/s\n",super_speed);
        printf("=================================================================\n");
        printf("\n\n\n");
    }
}

int main(void)
{

    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("======================== Pysics Trainer  ========================\n");
    printf("========================   Chapter 3     ========================\n");
    printf("=================================================================\n");

    Excersize_3_15(1, 1);
}