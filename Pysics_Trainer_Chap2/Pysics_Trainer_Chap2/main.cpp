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



void Excersize_2_8(int solution, int answer)
{

    printf("\n\n");
    printf("2-8 \n");
    printf("가속도의 값이 +1이라는 의미는?\n");
    printf("(a):속도의 변화가 없다.\n");
    printf("(b):속도가 점점 커진다.\n");
    printf("(c):속도가 점점 작아진다.\n");
    printf("(d):속도가 일정하다.\n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("===============================풀이================================\n");
        printf("가속도는 시간이 변화에 따라 속도의 변화를 알려주는 것을 말합니다. \n");
        printf("그렇기 때문에 가속도의 값이 +1인 경우 +1씩 계속 증가한다는 것을 알 수 있습니다. \n");
        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n");
        printf("답:(b)\n");
        printf("가속도의 값이 +1인 것을 물어본 것이기 때문에 속도가 점점 더 늘어나는 것이 맞다.\n");
        printf("=================================================================\n");
        printf("\n\n\n");
    }
}

void Excersize_2_12(int solution, int answer)
{
    srand(time(NULL));
    double distance1 = 25;
    distance1 = 25 + rand() % (5 + 1) - 2.5;
    double distance2 = 10;
    distance2 = 10 + rand() % (3 + 1) - 1;
    double distance3 = 0;
    double time = 6;
    time = 3 + rand() % (1 + 1) - 0.5;
    double time1 = 0;
    double distance = distance1 - distance2;
    double average_speed = distance / time;
    double space = ((distance1 * distance1) - (distance3 * distance3)) / (2 * average_speed);

    printf("\n\n");
    printf("2-12 \n");
    printf("어떤 자동차가 6s동안에 10m/s에서 25m/s로 가속된다.\n");
    printf("이 자동차의 가속도는 얼마인가? 이 자동차가 그동안 달린 거리는 얼마인가? \n");
    printf("단, 가속도는 일정하다.\n");


    if (solution == SHOW)
    {


        printf("\n\n\n");
        printf("===============================풀이================================\n");
        printf("관련공식: a=△v/△t\n");
        printf("a:가속도, △v:속도의 변화량, △t:걸린 시간\n");
        printf("△v = v -v0\n");
        printf("    = %6.2lfm/s - %6.2lfm/s\n\n", distance1, distance2);
        printf("△t = t - t0\n");
        printf("    = %6.2lfs - %6.2lfs\n\n", time, time1);
        printf("a   = %6.2lfm/s -%6.2lfm/s /%6.2lfs", distance1, distance2, time);
        printf("\n\n");
        printf("관련공식: v^2-V0^2=2as\n");
        printf("v:나중속도, v0:처음속도, a:가속도, s:거리\n");
        printf("s   = % 6.2lfs - % 6.2lfs / 2 * %6.2lfm/s^2\n", distance1 * distance1, distance3 * distance3, average_speed);
        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n");
        printf("a=%6.2lfm/s^2\n", average_speed);
        printf("s=%6.2lfm\n", space);
        printf("=================================================================\n");
        printf("\n\n\n");
    }
}
void Excersize_2_16(int solution, int answer)
{
    srand(time(NULL));
    double distance = 10000;
    distance = 10000 + rand() % (1000 + 1) - 500;
    double distance1 = 8900;
    distance1 = 8900 + rand() % (890 + 1) - 495;
    double distance2 = 1100;
    distance2 = 1100 + rand() % (110 + 1) - 55;
    double average_speed = 5.49;
    average_speed = 5.49 + rand() % (1 + 1) - 0.2745;
    double minute = 27;
    minute = 27 + rand() % (13 + 1) - 6.75;
    double time = 0;
    double second = 60;
    double rate_of_change = 0.2;
    rate_of_change = 0.2 + rand() % (0 + 1) - 0.02;
    double time2 = 180;
    time2 = 180 + rand() % (18 + 1) - 1.8;
    double medium_speed1 = distance1 / (minute * second);
    double acceleration = rate_of_change * (second * second);
    double medium_speed2 = average_speed + rate_of_change * rate_of_change;
    double rate_time = rate_of_change * time2;
    double medium_speed3 = rate_time - average_speed;
    double average_time = average_speed * time2;
    double a = (rate_of_change / 2) - rate_of_change;
    double b = rate_of_change * time2;
    double c = -distance2 + (average_speed * time2);
    double d = 0;
    double e;
    double t;


    printf("\n\n");
    printf("2-16 \n");
    printf("어떤 육상 선수가 10000m를 30min이내에 주파하려고한다.\n");
    printf("정확히 27min 지난 후에 달려야 할 거리가 1100m 남았다.\n");
    printf("그런데 육상 선수가 원하는 시간 내에 주파하기 위해서는\n");
    printf("0.2m/s^2의 가속도로 몇 초 동안 가속해야하는가?.\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("===============================풀이================================\n");
        printf("x=%6.2lfm\n", distance);
        printf("구간1:%6.2lfm  구간2:%6.2lfm\n\n", distance1, distance2);
        printf("구간1\n");
        printf("관련공식: vavg = △x/△t\n");
        printf("vavg:평균속력, △x:이동한 거리, △t:걸린시간\n");
        printf("vavg = %6.2lfm / (%6.2lfmin * %6.2lfs)\n\n", distance1, minute, second);
        printf("구간2\n");
        printf("관련공식: v1 = v0t + 1/2at^2\n");
        printf("v1:나중속도, v0t:처음 속도, a:가속도, t:시간\n");
        printf("v1  = %6.2lfm/st +%6.2lfm/st^2 \n\n", average_speed, rate_of_change / 2);
        printf("관련공식: v2 = (v0 + at) * (%6.2lf-t)\n", time2);
        printf("v2:나중속도, v0:처음속도, a:가속도, t:시간, (%6.2lf-t):가속하지 않는 시간 \n", time2);
        printf("v2  = %6.2lf + %6.2lft -%6.2lft^2\n\n", average_time, (rate_of_change * time2) - average_speed, rate_of_change);
        printf("구간2: %6.2lft^2 + %6.2lft %6.2lf = %6.2lfm\n", a, b, c, d);
        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n");
        if (a == 0)
            printf("t=%5.2lf\n", -c / b);
        else
        {
            e = b * b - 4.0 * a * c;
            if (e >= 0)
            {
                printf("t=%5.2lfs\n", (-b + sqrt(e)) / ((2.0 * a)));
            }
            else
                printf("실근이 존재하지 않습니다\n");
        }
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
    printf("========================   Chapter 2     ========================\n");
    printf("=================================================================\n");

    Excersize_2_8(1, 1);
    Excersize_2_12(1, 1);
    Excersize_2_16(1, 1);
}