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
    printf("��� ��ü�� �������� %6.2lfm�� ���� �ѷ��� %6.2lf�ʵ��ȿ� %6.2lfȸ�� \n", circle, time, spin);
    printf("�ϰ��ִ�\n\n");
    printf("(a) �� ��ü�� �ֱ⸦ ���϶�\n\n");//�� 0.5s
    printf("(b) �������� ���ΰ�?\n\n");
    printf("(c) �ӷ��� ���ΰ�?\n\n");
    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) �� ��ü�� �ֱ⸦ ���϶�\n\n");
        printf("���ð����� T = t / rev �Դϴ�\n");
        printf("T: �ֱ�, t: �ð�, rev: ȸ�� ��\n\n");
        printf("���ð�����  T = t / rev\n");
        printf("T = %6.2lfs / %6.2rev\n",time,spin);
        printf("  = %6.2lfs\n\n", timespin);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf(" T = %6.2lfs\n\n", timespin);
    }
    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) �������� ���ΰ�?\n\n");
        printf("���ð����� f = v / T �Դϴ�\n");
        printf("f: ������, v: �ӵ�, T: �ֱ�\n\n");
        printf("���ð����� f = v / T\n");
        printf("f = %6.2lfm/s / %6.2lfs\n", velocity, timespin);
        printf("  = %6.2lfHz\n\n",frequency);
        
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("f = %6.2lfHz", frequency);
        printf("\n");
    }
    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(c) �ӷ��� ���ΰ�?\n\n");
        printf("���ð����� v = 2 * �� * r / T �Դϴ�\n");
        printf("v: �ӷ�, ��: ����, r: ������ ,T: �ֱ�\n\n");
        printf("���ð����� v = 2 * �� * r / T\n");
        printf("v = 2 * %6.2lf * %6.2lfm / %6.2lfs\n",pie,circle,timespin);
        printf("  =%6.2lfm/s\n",speed);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("v = %6.2lfm/s", speed);
        printf("\n");
    }
}
void Excersize_5_17(int solution, int answer)
{
    double height = 3600;
    printf("\n\n");
    printf("5-17 \n");
    printf("���̰� %6.2lfkm���� ���� ������ ������ ���˵��� �����ϰ�\n", height);
    printf("�ִ� �ΰ������� �ӵ��� ���ΰ�?\n\n");
    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("");
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
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