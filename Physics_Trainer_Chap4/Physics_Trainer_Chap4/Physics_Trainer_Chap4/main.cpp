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
    printf("질량 %6.2lfkg인 물체가 정지상태에서 일정한 힘 %6.2lfN을 받아서\n", mass, force);
    printf("직선 위를 움직인 결과 %6.2lfs동안 이동한 거리가 %6.2lfm이었다.\n\n", time, distance);
    printf("(a) 이 물체의 가속도는 얼마인가?\n\n");
    printf("(b) 물체에 작동한 힘과 질량의 비는 얼마인가?\n");




    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 이 물체의 가속도는 얼마인가?\n\n");
        printf("관련공식은 s = v0 * t + 1/2 * a * t^2 입니다\n");
        printf("s: 거리, v0: 처음속도, a: 가속도, t: 시간\n\n");
        printf("s       = v0 * t + 1/2 * a * t^2\n");
        printf("%6.2lfm = %6.2lfm/s * %6.2lfs + 1/2 * a * (%6.2lfs)^2 \n\n", distance, initial_speed,time,time);
        printf("a = %6.2lfm * 2 / (%6.2lfs)^2\n", distance, time);
        printf("  =%6.2lfm/s^2\n", average_speed);
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("a = %6.2lfm/s^2\n",average_speed);
        printf("");
    }

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 물체에 작동한 힘과 질량의 비는 얼마인가?\n\n");
        printf("관련공식은 ΣF = m * a 입니다\n");
        printf("ΣF: 알짜힘, m: 질량, a: 가속도\n\n");
        printf("ΣF = m * a\n\n");
        printf("a       = ΣF / m\n");
        printf("        = %6.2lfN / %6.2lfkg\n\n",force,mass);
        printf("ΣF : m = %6.2lfN : %6.2lfkg\n",force,mass);
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("ΣF : m = %6.2lf : %6.2lf\n\n", force, mass);
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
    printf("(a) %6.2lfkg의 나무 상자와 마룻바닥 사이의 운동마찰계수가\n",mass);
    printf("%6.2lf이라면, 나무 상자를 일정한 속력으로 움직이는데 필요\n", coefficient_of_kinetic_friction);
    printf("한 수평력은 얼마인가?\n\n");
    printf("(b) 만일 μk가 0이라면 수평력은 얼마인가?\n");



    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a)일정한 속력으로 움직이는데 필요한 수평력은 얼마인가?\n\n");
        printf("관련공식은 Ff = μk * N 입니다\n");
        printf("Ff: 마찰력, μk: 운동마찰계수, N: 수직항력\n\n");
        printf("N = m * g\n");
        printf("m:질량, g:중력가속도\n\n");
        printf("Ff  = μk * (m * g)\n");
        printf("Ff  = %6.2lf * (%6.2lfkg * %6.2lfm/s^2)\n", coefficient_of_kinetic_friction,mass, acceleration_of_gravity);
        printf("    =%6.2lfN\n\n",horizontal_force);
        printf("일정한 속도로 가기 때문에 a = 0입니다.\n\n");
        printf("ΣF = F - Ff = m * a \n");
        printf("ΣF: 알짜힘, F: 힘, Ff: 마찰력, m: 질량, a: 가속도\n\n");
        printf("F - Ff       =     m * a\n");
        printf("F - %6.2lfN  =  %6.2lfkg * % 6.2lfm/s^2\n",horizontal_force,mass,average_speed);
        printf("F = %6.2lfN ",horizontal_force);
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("F = %6.2lfN\n", horizontal_force);
        printf("\n");
    }
    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 만일 μk가 0이라면 수평력은 얼마인가?\n\n");
        printf("관련공식은 Ff = μk * N 입니다\n");
        printf("Ff: 마찰력, μk: 운동마찰계수, N: 수직항력\n\n");
        printf("N = m * g\n");
        printf("m: 질량, g: 중력가속도\n\n");
        printf("Ff  = μk * (m * g)\n");
        printf("Ff  = %6.2lf * (%6.2lfkg * %6.2lfm/s^2)\n", coefficient_of_kinetic_friction2, mass, acceleration_of_gravity);
        printf("    = %6.2lfN\n\n", horizontal_force2);
        printf("일정한 속도로 가기 때문에 a = 0입니다.\n\n");
        printf("ΣF = F - Ff = m * a\n");
        printf("ΣF: 알짜힘, F: 힘, Ff: 마찰력, m: 질량, a: 가속도\n\n");
        printf("F - Ff       =    m * a\n");
        printf("F - %6.2lfN  =  %6.2lfkg * % 6.2lfm/s^2\n", horizontal_force2, mass, average_speed);
        printf("             =  %6.2lfN ", horizontal_force2);
        printf("\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
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