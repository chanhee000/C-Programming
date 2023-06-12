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

void Excersize_4_8(int solution, int answer)
{
    srand(time(NULL));
    double mass = 8;
    mass = 8 + rand() % (4 + 1) - 2;
    double force = 2;
    force = 2 + rand() % (1 + 1) - 1;
    double time = 6;
    time = 6 + rand() % (3 + 1) - 1;
    double distance = 3;
    distance = 3 + rand() % (2 + 1) - 1;
    double initial_speed = 0;
    double first_time = 0;
    double average_speed = (distance * 2) / (time * time);
    double average_speed2 = force / mass;

    printf("\n\n");
    printf("4-8 \n");
    printf("���� %6.2lfkg�� ��ü�� �������¿��� ������ �� %6.2lfN�� �޾Ƽ�\n", mass, force);
    printf("���� ���� ������ ��� %6.2lfs���� �̵��� �Ÿ��� %6.2lfm�̾���.\n\n", time, distance);
    printf("(a) �� ��ü�� ���ӵ��� ���ΰ�?\n\n");
    printf("(b) ��ü�� �۵��� ���� ������ ��� ���ΰ�?\n");




    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) �� ��ü�� ���ӵ��� ���ΰ�?\n\n");
        printf("���ð����� s = v0 * t + 1/2 * a * t^2 �Դϴ�\n");
        printf("s: �Ÿ�, v0: ó���ӵ�, a: ���ӵ�, t: �ð�\n\n");
        printf("s       = v0 * t + 1/2 * a * t^2\n");
        printf("%6.2lfm = %6.2lfm/s * %6.2lfs + 1/2 * a * (%6.2lfs)^2 \n\n", distance, initial_speed,time,time);
        printf("a = %6.2lfm * 2 / (%6.2lfs)^2\n", distance, time);
        printf("  =%6.2lfm/s^2\n", average_speed);
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("a = %6.2lfm/s^2\n",average_speed);
        printf("");
    }

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) ��ü�� �۵��� ���� ������ ��� ���ΰ�?\n\n");
        printf("���ð����� ��F = m * a �Դϴ�\n");
        printf("��F: ��¥��, m: ����, a: ���ӵ�\n\n");
        printf("��F = m * a\n\n");
        printf("a       = ��F / m\n");
        printf("        = %6.2lfN / %6.2lfkg\n\n",force,mass);
        printf("��F : m = %6.2lfN : %6.2lfkg\n",force,mass);
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("��F : m = %6.2lf : %6.2lf\n\n", force, mass);
        printf("=================================================================\n");
        printf("\n\n\n");
    }
}

void Excersize_4_16(int solution, int answer)
{
    srand(time(NULL));
    double mass = 20;
    mass = 20 + rand() % (10 + 1) - 5;
    double coefficient_of_kinetic_friction = 0.3;
    coefficient_of_kinetic_friction = 0.3 + rand() % (1 + 1) - 0.2;
    double coefficient_of_kinetic_friction2 = 0;
    double acceleration_of_gravity = 9.8;
    double average_speed = 0;
    double horizontal_force = coefficient_of_kinetic_friction * mass * acceleration_of_gravity;
    double horizontal_force2 = coefficient_of_kinetic_friction2 * mass * acceleration_of_gravity;

    printf("\n\n");
    printf("4-16 \n");
    printf("(a) %6.2lfkg�� ���� ���ڿ� ����ٴ� ������ ����������\n",mass);
    printf("%6.2lf�̶��, ���� ���ڸ� ������ �ӷ����� �����̴µ� �ʿ�\n", coefficient_of_kinetic_friction);
    printf("�� ������� ���ΰ�?\n\n");
    printf("(b) ���� ��k�� 0�̶�� ������� ���ΰ�?\n");



    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a)������ �ӷ����� �����̴µ� �ʿ��� ������� ���ΰ�?\n\n");
        printf("���ð����� Ff = ��k * N �Դϴ�\n");
        printf("Ff: ������, ��k: ��������, N: �����׷�\n\n");
        printf("N = m * g\n");
        printf("m:����, g:�߷°��ӵ�\n\n");
        printf("Ff  = ��k * (m * g)\n");
        printf("Ff  = %6.2lf * (%6.2lfkg * %6.2lfm/s^2)\n", coefficient_of_kinetic_friction,mass, acceleration_of_gravity);
        printf("    =%6.2lfN\n\n",horizontal_force);
        printf("������ �ӵ��� ���� ������ a = 0�Դϴ�.\n\n");
        printf("��F = F - Ff = m * a \n");
        printf("��F: ��¥��, F: ��, Ff: ������, m: ����, a: ���ӵ�\n\n");
        printf("F - Ff       =     m * a\n");
        printf("F - %6.2lfN  =  %6.2lfkg * % 6.2lfm/s^2\n",horizontal_force,mass,average_speed);
        printf("F = %6.2lfN ",horizontal_force);
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("F = %6.2lfN\n", horizontal_force);
        printf("\n");
    }
    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) ���� ��k�� 0�̶�� ������� ���ΰ�?\n\n");
        printf("���ð����� Ff = ��k * N �Դϴ�\n");
        printf("Ff: ������, ��k: ��������, N: �����׷�\n\n");
        printf("N = m * g\n");
        printf("m: ����, g: �߷°��ӵ�\n\n");
        printf("Ff  = ��k * (m * g)\n");
        printf("Ff  = %6.2lf * (%6.2lfkg * %6.2lfm/s^2)\n", coefficient_of_kinetic_friction2, mass, acceleration_of_gravity);
        printf("    = %6.2lfN\n\n", horizontal_force2);
        printf("������ �ӵ��� ���� ������ a = 0�Դϴ�.\n\n");
        printf("��F = F - Ff = m * a\n");
        printf("��F: ��¥��, F: ��, Ff: ������, m: ����, a: ���ӵ�\n\n");
        printf("F - Ff       =    m * a\n");
        printf("F - %6.2lfN  =  %6.2lfkg * % 6.2lfm/s^2\n", horizontal_force2, mass, average_speed);
        printf("             =  %6.2lfN ", horizontal_force2);
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("F = %6.2lfN\n\n", horizontal_force2);
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
    printf("========================   Chapter 4     ========================\n");
    printf("=================================================================\n");

    //Excersize_4_8(1, 1);
    Excersize_4_16(1, 1);
}