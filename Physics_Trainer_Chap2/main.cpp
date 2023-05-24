#include<stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
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
    printf("���ӵ��� ���� +1�̶�� �ǹ̴�?\n");
    printf("(a):�ӵ��� ��ȭ�� ����.\n");
    printf("(b):�ӵ��� ���� Ŀ����.\n");
    printf("(c):�ӵ��� ���� �۾�����.\n");
    printf("(d):�ӵ��� �����ϴ�.\n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("===============================Ǯ��================================\n");
        printf("���ӵ��� �ð��� ��ȭ�� ���� �ӵ��� ��ȭ�� �˷��ִ� ���� ���մϴ�. \n");
        printf("�׷��� ������ ���ӵ��� ���� +1�� ��� +1�� ��� �����Ѵٴ� ���� �� �� �ֽ��ϴ�. \n");
        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n");
        printf("��:(b)\n");
        printf("���ӵ��� ���� +1�� ���� ��� ���̱� ������ �ӵ��� ���� �� �þ�� ���� �´�.\n");
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
    printf("� �ڵ����� %6.2lfs���ȿ� %6.2lfm/s���� %6.2lfm/s�� ���ӵȴ�.\n", time, distance2, distance1);
    printf("�� �ڵ����� ���ӵ��� ���ΰ�? �� �ڵ����� �׵��� �޸� �Ÿ��� ���ΰ�? \n");
    printf("��, ���ӵ��� �����ϴ�.\n");


    if (solution == SHOW)
    {


        printf("\n\n\n");
        printf("===============================Ǯ��================================\n");
        printf("���ð���: a=��v/��t\n");
        printf("a:���ӵ�, ��v:�ӵ��� ��ȭ��, ��t:�ɸ� �ð�\n");
        printf("��v = v -v0\n");
        printf("    = %6.2lfm/s - %6.2lfm/s\n\n", distance1, distance2);
        printf("��t = t - t0\n");
        printf("    = %6.2lfs - %6.2lfs\n\n", time, time1);
        printf("a   = (%6.2lfm/s -%6.2lfm/s) / (%6.2lfs -%6.2lfs)", distance1, distance2, time,time1);
        printf("\n\n");
        printf("���ð���: v^2-V0^2=2as\n");
        printf("v:���߼ӵ�, v0:ó���ӵ�, a:���ӵ�, s:�Ÿ�\n");
        printf("s   = ((%6.2lfm/s)^2 - (%6.2lfm/s)^2) / (2*%6.2lfm/s^2)\n",distance1,distance3,average_speed);
        printf("    = (%6.2lfm/s - %6.2lfm/s) /%6.2lfm/s^2\n", distance1 * distance1, distance3 * distance3, average_speed*2);
        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n");
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
    distance = 10000 + rand() % (70 + 1) - 10;
    double distance1 = 8900;
    distance1 = 8900 + rand() % (50 + 1) - 8;
    double distance2 = distance - distance1;
    double average_speed = 5.49;
    average_speed = 5.49 + rand() % (0 + 1) - 0;
    double all_time = 30;
    all_time = 30 + rand() % (3 + 1) - 1;
    double minute = 27;
    minute = 27 + rand() % (2 + 1) - 1;
    double time = 0;
    double second = 60;
    double rate_of_change = 0.2;
    rate_of_change = 0.2 + rand() % (0 + 1) - 0;
    double time2 = (all_time - minute)*60;
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
    printf("� ���� ������ %6.2lfm�� %6.2lfmin�̳��� �����Ϸ����Ѵ�.\n", distance, all_time);
    printf("��Ȯ�� %6.2lfmin ���� �Ŀ� �޷��� �� �Ÿ��� %6.2lfm ���Ҵ�.\n", minute, distance2);
    printf("�׷��� ���� ������ ���ϴ� �ð� ���� �����ϱ� ���ؼ���\n");
    printf("%6.2lfm/s^2�� ���ӵ��� �� �� ���� �����ؾ��ϴ°�?.\n", rate_of_change);

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("===============================Ǯ��================================\n");
        printf("x=%6.2lfm\n", distance);
        printf("x1:%6.2lfm  x2:%6.2lfm\n\n", distance1, distance2);
        printf("x1\n");
        printf("���ð���: vavg = ��x/��t\n");
        printf("vavg:��ռӷ�, ��x:�̵��� �Ÿ�, ��t:�ɸ��ð�\n");
        printf("��x   = x - x0\n");
        printf("      = %6.2lfm -%6.2lfm\n\n",distance,distance2);
        printf("��t   = t - t0\n");
        printf("      = %6.2lfmin -%6.2lfmin\n\n",minute,time);
        printf("vavg  = (x - x0) / (t - t0)\n");
        printf("      = %6.2lfm / (%6.2lfmin * %6.2lfs)\n\n", distance1, minute, second);
        printf("x2\n");
        printf("���ð���: v1 = v0t + 1/2at^2\n");
        printf("v1:���߼ӵ�, v0t:ó�� �ӵ�, a:���ӵ�, t:�ð�\n");
        printf("v1    =%6.2lfm/st +%6.2lfm/st^2 \n\n", average_speed, rate_of_change / 2);
        printf("���ð���: v2 = (v0 + at) * (%6.2lf- t)\n", time2);
        printf("v2:���߼ӵ�, v0:ó���ӵ�, a:���ӵ�, t:�ð�, (%6.2lf-t):�������� �ʴ� �ð� \n", time2);
        printf("v2    = (%6.2lfm/s + %6.2lfm/s^2t) * (%6.2lf - t)\n",average_speed,rate_of_change,time2);
        printf("      = %6.2lf + %6.2lft -%6.2lft^2\n\n", average_time, (rate_of_change * time2) - average_speed, rate_of_change);
        printf("���ð���: v1 + v2 = x2\n");
        printf("x2    =%6.2lft^2 + %6.2lft +(%6.2lfm)\n", a, b, c,average_time-distance);
        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n");
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
                printf("�Ǳ��� �������� �ʽ��ϴ�\n");
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