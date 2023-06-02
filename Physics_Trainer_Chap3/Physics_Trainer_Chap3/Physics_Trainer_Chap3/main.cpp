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
    printf("���� %6.2lfm�� ������ ����������� ���� ��ü�� ���� ������\n",height);
    printf("����������� %6.2lfm�� ���� ��������.\n",down);
    printf("(a)�� ��ü�� ���� ������ ������ �ɸ� �ð��� ���ΰ�?\n");
    printf("(b)��ü�� �ʼӵ��� ���ΰ�?\n");


    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("===============================Ǯ��================================\n");
        printf("(a)�� ��ü�� ���� ������ ������ �ɸ� �ð��� ���ΰ�?\n\n");
        printf("���ð����� y = y0 + v0yt + 1/2(-g)t^2 �Դϴ�. \n");
        printf("y: ����, y0: �ʱ� ���� ,v0yt: �ʱ� �ӵ� ,g: �߷� ���ӵ� ,t: �ð�\n\n");
        printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� %6.2lfm/s^2 �Դϴ�.\n\n", gravitational_acceleration);
        printf("y      = y0 + v0yt + 1/2(-g)t^2\n\n");
        printf("%6.2lf = %6.2lfm + %6.2lfm/s + 1/2%6.2lft^2\n", first_height, height, initial_speed, gravitational_acceleration);
        printf("t^2    = %6.2lfm * 2 /%6.2lfm/s^2\n", height, -gravitational_acceleration);
        printf("       = %6.2lfs\n",time);
        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n");
        printf("t = %6.2lfs\n",time);
        printf("=================================================================\n");
        printf("\n\n\n");
    }
    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("===============================Ǯ��================================\n");
        printf("(b)��ü�� �ʼӵ��� ���ΰ�?\n\n");
        printf("���ð����� ��x = v0x * t \n");
        printf("��x:����������� ������ �Ÿ� ,v0xt: �ʼӵ�, t: �ð�\n\n");
        printf("��x     = v0x * t\n");
        printf("%6.2lfm = v0x * %6.2lfs\n",down,time);
        printf("v0x     = %6.2lfm / %6.2lfs\n",down,time);
        printf("v0x     = %6.2lfm/s\n",super_speed);
        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n");
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