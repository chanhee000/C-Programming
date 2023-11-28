#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_1_21(int solution, int answer)
{
    srand(time(NULL));

    double Ax = 3.00;
    Ax = 3.00   + rand() % (2 + 1) - 1;
    double Ay = 45.00;
    Ay = 45.00  + rand() % (15 + 1) - 15;
    double Bx = 6.00;
    Bx = 6.00   + rand() % (3 + 1) - 1;
    double By = -60.0;
    By = -60.00 + rand() % (30 + 1) - 15;
    double x1, x2,x3, y1, y2,y3;
    double distance;
    double xy;

    x1 = Ax * cos(DEG2RAD(Ay));
    y1 = Ax * sin(DEG2RAD(Ay));
    x2 = Bx * cos(DEG2RAD(By));
    y2 = Bx * sin(DEG2RAD(By));
    x3 = x1 - x2;
    y3 = y1 - y2;
    xy = sqrt(pow(x3, 2) + pow(y3, 2));

    printf("\n\n");
    printf("1 - 21\n");
    printf("극좌표계에서 (r, θ) = (%.2lfm, %.2lf°)와 (%.2lfm, %.2lf°)이다.\n",Ax,Ay,Bx,By);
    printf("두 점 사이의 거리를 구하라.\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("A = (%.2lfcos%.2lf°, %.2lfsin%.2lf°)\n",Ax,Ay,Ax,Ay);
        printf("B = (%.2lfcos%.2lf°, %.2lfsin%.2lf°)\n\n", Bx, By, Bx, By);
        printf("√(x1-x2)^2 + (y1-y2)^2\n");
        printf("√((%.2lf * cos%.2lf) - (%.2lf * cos%.2lf))^2 + ((%.2lf * sin%.2lf) - (%.2lf * sin%.2lf))^2\n", Ax, Ay, Bx, By,Ax,Ay,Bx,By);
        printf("√(%.2lf + (%.2lf))^2 + (%.2lf + (%.2lf))^2\n",x1,-x2,y1,- y2);
        printf("√(%.2lf)^2 + (%.2lf)^2\n", x1 - x2, y1 - y2);
        printf("√%.2lf + %.2lf\n", pow(x3,2), pow(y3,2));
        printf("√%.2lf\n",pow(x3, 2) + pow(y3, 2));

    }
    if (answer == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   정 답   =============================\n\n");
        printf("두 점 사이의 거리: %.2lf",xy);
        printf("\n\n\n");
    }
}
void Excersize_2_1(int solution, int answer)
{
    srand(time(NULL));

    double north_distance1 = 130.0 + rand() % (13 + 1) - 6;
    double south_distance = 76.7 + rand() % (7 + 1) - 4;
    double north_distance2 = 80.5 + rand() % (8 + 1) - 4;
    double y_displacement = 0.0;
    double displacement_a = 0.0;
    double displacement_b = 0.0;
    y_displacement = north_distance1 + north_distance2;
    displacement_a = y_displacement - south_distance;
    displacement_b = y_displacement + south_distance;

    printf("\n\n");
    printf("2-1 \n");
    printf("대형기동헬기가 기지를 출발하여 북쪽으로 %4.1lf km를 날아간 후\n", north_distance1);
    printf("짐을 내려놓고 남쪽으로 %4.1lf km를 날아가 다른 물건을 싣고 \n", south_distance);
    printf("다시 북쪽으로 %4.1lf km를 날아 착륙하였다.\n\n", north_distance2);
    printf("(a) 처음 기지로부터 마지막 도착 지점까지의 헬기의 변위는 얼마인가 ?\n\n");

    if (solution == SHOW)
    {
        printf("============================= 풀 이 =============================\n\n");
        printf("(a) 처음 기지로부터 마지막 도착 지점까지의 헬기의 변위는 얼마인가 ?\n\n");
        printf("관련 공식은 Δy = Δy1 - Δy2 \n");
        printf("Δy1은 총 북쪽으로 날아간 거리, Δy2는 총 남쪽으로 날아간 거리\n\n");
        printf("Δy = Δy1 - Δy2\n");
        printf("    = %6.2lfkm - %6.2lfkm\n", y_displacement, south_distance);
        printf("    = %6.2lfkm\n\n", displacement_a);
    }

    if (answer == SHOW)
    {
        printf("============================= 정 답 =============================\n\n");
        printf("Δy = %4.1lf km\n\n", displacement_a);
    }

    if (solution == SHOW)
    {
        printf("============================= 풀 이 =============================\n\n");
        printf("(b) 또 이날 헬기가 움직인 총 거리는 얼마인가 ? \n\n");
        printf("관련 공식은 Δy = Δy1 + Δy2 \n");
        printf("Δy = Δy1 + Δy2\n");
        printf("    = %6.2lfkm + %6.2lfkm\n", y_displacement, south_distance);
        printf("    = %6.2lfkm\n\n", displacement_b);
    }

    if (answer == SHOW)
    {
        printf("========================= 정 답 =================================\n\n");
        printf("Δy = %4.1lfkm \n\n", displacement_b);
    }

}

void Excersize_2_10(int solution, int answer)
{
    srand(time(NULL));

    double initial_velocity = 90.0 + rand() % (9 + 1) - 4;
    double final_velocity = 110.0 + rand() % (9 + 1) - 4;
    double change_of_velocity = 0.0;
    double final_change_of_velocity = 0;
    double acceleration = 1.7 + rand() % (5 + 1) - 2;
    double time = 0.0;

    printf("\n\n");
    printf("2_10 \n");
    printf("고속도로에서 어떤 자동차가 약 %6.2lf m/s^2 의 가속도를 낼 수 있다.\n", acceleration);
    printf("이 비율로 %6.2lf km/h 에서 %6.2lf km/h 로 가속하는 데 걸리 는 시간은 얼마나 될까? \n\n", initial_velocity, final_velocity);

    if (solution == SHOW)
    {
        change_of_velocity = final_velocity - initial_velocity;
        final_change_of_velocity = change_of_velocity * 1000 / 3600;
        //change_of_velocity = ((final_velocity)-(frist_velocity));
        time = final_change_of_velocity / acceleration;

        printf("\n\n\n");
        printf("============================  풀 이  =============================\n\n");

        printf("관련 공식은 a = Δv / Δt 입니다 \n");
        printf("a는 가속도 ,Δv는 속도 변화량 , Δt는 시간 변화량 입니다. \n\n");
        printf("Δt = ( %6.2lf km/h - %6.2lf km/h) / %6.2lfm/s^2 . \n", final_velocity, initial_velocity, acceleration);
        printf("km/h 를 m/s (으)로 단위를 맞춰줍니다. \n\n");
        printf("%6.2lf km/h = (%6.2lf * 1000 / 3600 )m/s = %6.2lf m/s\n", change_of_velocity, change_of_velocity, final_change_of_velocity);
        printf("Δt =  %6.2lf m/s / %6.2lf m/s^2\n", final_change_of_velocity, acceleration);

        printf("\n=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n");
        printf("\n");
        printf("Δt=  %6.2lf s \n", time);
        printf("\n\n\n");
    }
}

void Excersize_2_14(int solution, int answer)
{
    srand(time(NULL));

    double initial_velocity = 0.0;
    double final_velocity = 30.0 + rand() % (8 + 1) - 4;
    double acceleration = 3.00 + rand() % (5 + 1) - 2;
    double distance = 0.0;

    printf("\n\n");
    printf("2_14 \n");
    printf("경비행기가 이륙하기 위해서는 속력이 %6.2lf m/s 에 도달해야 한다.\n", final_velocity);
    printf("%6.2lf m/s^2 으로 일정하게 가속한다면 이륙 속도에 도달하기 위해서 얼마의 활주거리가 필요한가? \n\n", acceleration);

    if (solution == SHOW)
    {
        distance = ((final_velocity * final_velocity) - (initial_velocity * initial_velocity)) / (2 * acceleration);

        printf("\n\n\n");
        printf("============================  풀 이  =============================\n\n");

        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx 입니다.\n");
        printf("v:최종속도, v0:초기속도, a:가속도, Δx : 거리변화량   \n\n");
        printf("v^2 - v0^2 = 2 * a * Δx\n");
        printf("(%6.2lfm/s)^2 - (%6.2lfm/s)^2  =  2 * (%6.2lfm/s^2) * Δx   \n", final_velocity, initial_velocity, acceleration);
        printf("Δx = (%6.2lfm/s)^2 / (2 *%6.2lfm/s^2) \n", (final_velocity), acceleration);
        printf("Δx = %6.2lfm \n", distance);

        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("Δx = %6.2lf m \n\n", distance);
        printf("\n\n\n");
    }
}

void Excersize_2_26(int solution, int answer)
{
    srand(time(NULL));
    double height = 15.0 + rand() % (4 + 1) - 1;
    double height0 = 0;
    double velocity_m_s = 22.0 + rand() % (6 + 1) - 3;
    double g = 9.80;
    double time_1;
    double time_2;
    double velocity_f;
    double velocity_f_2;
    double delta_velocity1;
    double delta_velocity2;

    printf("\n\n");
    printf("2-26 \n");
    printf("돌을 %6.2lf m/s의 속력으로 수직하게 던져 올렸다. \n\n", velocity_m_s);

    printf("(a) 돌은 %6.2lf m에서 얼마나 빨리 운동하겠는가? \n\n", height);

    printf("(b) 이 높이에 도달하는 데 걸린 시간은 얼마인가? \n\n");


    if (solution == SHOW)

    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 돌은 %6.2lf m에서 얼마나 빨리 운동하겠는가? \n\n", height);

        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δy\n");
        printf(" a : 가속도, v : 나중속도, v0 : 처음속도\n");
        printf("Δy = y - y0, y : 나중높이, y0 : 처음높이\n\n");

        printf("중력 가속도는 아래 방향이므로 -%6.2lf m/s^2 입니다.\n\n", g);

        printf("v^2 = v0^2 + 2 * a * Δy\n");
        printf("v^2 = (%6.2lf m/s)^2 + 2 * (-%6.2lf m/s^2) * %6.2lf m\n", velocity_m_s, g, height);

        velocity_f_2 = (velocity_m_s * velocity_m_s + 2 * (-g) * height);

        printf("    = %6.2lf m/s\n\n", velocity_f_2);

        velocity_f = sqrt(velocity_m_s * velocity_m_s + 2 * (-g) * height);
        printf("v   = √((%6.2lf m/s)^2 + 2 * (-%6.2lf m/s^2) * %6.2lf m)\n", velocity_m_s, g, height);
        printf("    =%6.2lf m/s\n\n", velocity_f);


    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");
        printf("v =%6.2lf m/s\n\n", velocity_f);

    }

    if (solution == SHOW)

    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 이 높이에 도달하는 데 걸린 시간은 얼마인가? \n\n");


        printf("관련 공식은 v = v0 + a * Δt\n");
        printf("Δt = Δv / a, a : 중력가속도\n");
        printf("Δv = v - v0, v : 나중속도, v0 : 처음속도\n");
        printf("t1 = 돌이 올라가는 시간, t2 = 돌이 내려오는 시간\n\n");;
        printf(" v - v0= a * t1\n");
        printf("-v - v0= a * t2\n\n");


        time_1 = (velocity_f - velocity_m_s) / -g;
        time_2 = (-velocity_f - velocity_m_s) / -g;
        delta_velocity1 = velocity_f - velocity_m_s;
        delta_velocity2 = -velocity_f - velocity_m_s;

        printf(" %6.2lf m/s - %6.2lf m/s = (-%6.2lf m/s^2) * t1\n", velocity_f, velocity_m_s, g);
        printf("-%6.2lf m/s - %6.2lf m/s = (-%6.2lf m/s^2) * t2\n\n", velocity_f, velocity_m_s, g);

        printf("t1 = (%6.2lf m/s) / (-%6.2lf m/s^2)\n", delta_velocity1, g);
        printf("   = %6.2lf s\n", time_1);

        printf("t2 = (%6.2lf m/s) / (-%6.2lf m/s^2)\n", delta_velocity2, g);
        printf("   = %6.2lf s\n\n", time_2);



    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");

        printf("t1 =%6.2lf s\n", time_1);
        printf("t2 =%6.2lf s\n\n", time_2);
        printf("\n");
    }

}
void Excersize_3_9(int solution, int answer)
{
    srand((unsigned)time(NULL));
    double speed = 41.0 + rand() % (10 + 1) - 7;
    double angle = 1 + rand() % 90;
    double angle2 = 90;
    double randamu = rand() % (4 + 1) - 1;
    double Changed_Speed = 25.0 + rand() % (5 + 1) - 2;
    double First_hour = 3 + randamu;
    double Later_hour = 4.5 + randamu;
    double r = (speed * First_hour);
    double theta = 360.0 - angle;
    double x1 = r * cos(DEG2RAD(angle));
    double y1 = r * sin(DEG2RAD(angle));
    double x2 = 0;
    double x2_2 = 0;
    double y2 = Changed_Speed * (Later_hour - First_hour);
    double y2_2 = y2 * sin(DEG2RAD(angle2));
    double x = 0.0;
    double y = 0.0;
    double conv_angle = 0;
    double x_conv_angle = 0;
    double y_conv_angle = 0;
    double north_angle_x = 0;
    double north_angle_y = 90;
    double r1 = 0;
    double r2 = 0;
    double r3 = 0;



    conv_angle = angle;
    x_conv_angle = angle;
    y_conv_angle = angle;

    x1 = r * cos(DEG2RAD(x_conv_angle));
    y1 = r * sin(DEG2RAD(y_conv_angle));
    x = x1 + x2;
    y = y1 + y2;


    double d = sqrt(pow(x, 2) + pow(y, 2));
    double qwer = sqrt(pow((x1 / d), 2));
    double radian = DEG2RAD(qwer);
    double result = RAD2DEG(acos(qwer));
    double result_acos = RAD2DEG(acos(qwer));


    printf("\n");
    printf("3-9 \n");
    printf("제주도에 태풍이 지나가고 있다.\n");

    printf("속도가 %6.2lf km/h 인 태풍의 눈이 서쪽 %6.2lf° 방향으로 통과해 지나간다.\n", speed, angle);

    printf("%6.2lf h 후 이 태풍의 방향이 북쪽으로 %6.2lf km/h 의 느린 속도로 바뀌었다. \n", First_hour, Changed_Speed);
    printf("제주도를 지난 태풍은 %6.2lf h 후에는 제주도에서 얼마나 멀리 갔을까?\n\n", Later_hour);

    printf("(a) 태풍이 이동한 거리(r)는 얼마인가?\n\n");
    printf("(b) 태풍이 이동한 각(θ)은 얼마인가?\n\n");
    printf("(c) 태풍의 극좌표를 구하여라\n\n");


    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 태풍이 이동한 거리는 얼마인가?\n\n");

        printf("관련 공식은 Δx = v * t\n");
        printf("Δx: 거리, v: 속도, t: 시간, cos: 각도 θ에 대응하는 x 좌표의 비율\n");
        printf(" sin: 각도 θ에 대응하는 y 좌표의 비율,r:원점에서 이동한 거리\n");
        printf("x1: 동쪽을 x 축 기준으로 했을때의 x좌표, y1: 북쪽을 y 축 기준으로 했을때의 y좌표\n\n");

        printf("각도의 기준은 x축(서쪽), 반시계 방향으로 %6.2lf°입니다.\n\n", angle);

        printf("태풍이 제주도를 통과한 변위: %6.2lf km/h * %6.2lf h = %6.2lf km\n\n", speed, First_hour, speed * First_hour);

        printf("x1 = r * cosθ\n");
        printf("   = %6.2lf km * cos (%6.2lf°) \n", speed * First_hour, x_conv_angle);
        printf("   = %6.2lfkm\n\n", x1);

        printf("y1 = r * sinθ\n");
        printf("   = %6.2lf km * sin (%6.2lf°) \n", speed * First_hour, y_conv_angle);
        printf("   =  %6.2lfkm\n\n", y1);

        printf("태풍이 각도를 바꾼 후 변위: %6.2lf km/h * %6.2lf h = %6.2lf km\n\n", Changed_Speed, Later_hour - First_hour, Changed_Speed * (Later_hour - First_hour));

        printf("x2 = %6.2lf km * cos (%6.2lf°)\n", x2, angle2);
        printf("   =  %6.2lfkm\n\n", x2_2);

        printf("y2 = %6.2lf km * sin (%6.2lf°)\n", y2, angle2);
        printf("   =  %6.2lfkm\n\n", y2_2);

        printf("x = x1 + x2\n");
        printf("  = %6.2lf km + %6.2lf km\n", x1, x2);
        printf("  = %6.2lf km\n\n", x);

        printf("y = y1 + y2\n");
        printf("  = %6.2lf km + %6.2lf km\n", y1, y2);
        printf("  = %6.2lf km\n\n", y);

        printf("r = √(x^2 + y^2)\n");
        printf("  = √((%6.2lf km)^2 + (%6.2lf km)^2) \n", x, y);
        printf("  = %6.2lfkm\n\n", d);


        if (answer == SHOW) {
            printf("=========================   정 답   =============================\n\n");

            printf("r = %6.2lfkm", d);

        }
        if (solution == SHOW)
        {

            printf("\n\n");
            printf("=========================   풀 이   =============================\n\n");

            printf("(b) 태풍이 이동한 각(θ)은 얼마인가?\n\n");

            printf("각도 : θ = a\n\n");
            printf("cos a = (x / r)\n");
            printf("a = cos^-1 * (x / r)\n");
            printf("  = cos^-1 * (%6.2lf km / %6.2lf km)\n", x, d);
            printf("  = cos^-1 * (%6.2lf)\n", x / d);
            printf("  = %6.2lf°\n\n", result_acos);
            printf("θ = a\n");
            printf("  = %6.2lf°\n\n", result_acos);




        }
        if (answer == SHOW) {
            printf("=========================   정 답   =============================\n\n");

            printf("θ = %6.2lf°\n", result_acos);

        }
        if (solution == SHOW)
        {
            r3 = sqrt(pow(x, 2) + pow(y, 2));
            printf("\n");
            printf("=========================   풀 이   =============================\n\n");

            printf("(c) 태풍의 극좌표를 구하여라\n\n");

            printf("극좌표 = (r,θ)\n\n");


            printf("θ = %6.2lf°\n\n", result_acos);


        }
        if (answer == SHOW)
        {
            printf("=========================   정 답   =============================\n\n");

            printf("(%6.2lf km, %6.2lf°)\n\n", d, result_acos);

        }

    }
}

void Excersize_3_13(int solution, int answer)
{
    srand(time(NULL));

    double h = 0;
    double g = 9.80;
    double t;
    double v0x = 5 + rand() % (2 + 1) - 1;
    double Δx = 20 + rand() % (10 + 1) - 5;
    t = Δx / v0x;
    double Δy;

    printf("\n\n");
    printf("3-13 \n");
    printf("그림 P3-13과 같이 높이가 h인 곳에서 돌을 수평방향으로 %6.2lfm/s의 속력으로 던졌더니 수평거리 %6.2lfm인 곳에 떨어졌다.\n\n", v0x, Δx);
    printf("(a) 이 돌이 지면에 떨어질 때까지 걸린 시간은 몇 초인가? \n\n");
    printf("(b) 처음 돌을 던진 순간의 높이 h는 몇 m인가? \n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 이 돌이 지면에 떨어질 때까지 걸린 시간은 몇 초인가? \n");
        printf("관련 공식은 Δx = v0x * t\n");
        printf("Δx: x의 변화량 v0x: 초기속도 t: 시간\n\n");
        printf("Δx = v0x * t\n");
        printf("t = Δx / v0x\n");
        printf("  =%6.2lfm /%6.2lfm/s\n", Δx, v0x);
        printf("  =%6.2lfs\n\n", t);
    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("걸린 시간 t =%6.2lfs\n", t);
    }
    if (solution == SHOW)
    {
        Δy = -g * pow(t, 2) / 2;

        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 처음 돌을 던진 순간의 높이 h는 몇 m인가?\n");
        printf("관련 공식은 Δy = voy * t + 1/2 * a * t^2\n");
        printf("Δy: y의 변화량 v0y: 초기속도 t: 시간 a: 가속도\n\n");
        printf("시작하기전 정지 상태이기 때문에 v0y = 0 입니다.\n");
        printf("중력가속도는 아래 방향이므로 -9.80m/s^2 입니다. \n\n");
        printf("Δy = voy * t + 1/2 * a * t^2\n");
        printf("    = 0 * t + 1/2 * (-g) * t^2\n");
        printf("    = 1/2 * %6.2lfm/s^2 * (%6.2lfm/s)^2\n", -g, pow(t, 2));
        printf("    = %6.2lfm\n\n", Δy);
        printf("Δy = 0 - h\n");
        printf("h = %6.2lfm\n\n", -Δy);
    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("h =%6.2lfm \n", -Δy);
    }
}

void Excersize_3_18(int solution, int answer)
{
    srand(time(NULL));

    double v0 = 60  + rand() % (30 + 1) - 15;
    double y = 0;
    double y0 = 0;
    double vy = 0;
    double angle = 30 + rand() % (15 + 1) - 10;
    double v0x = 0;
    double v0y = 0;
    double t = 0;
    double g = 9.8;
    double Δx = 0;
    v0x = v0 * cos(angle * M_PI / 180);
    v0y = v0 * sin(angle * M_PI / 180);
    t = v0y / g;
    y = (v0y * t) - (0.5 * g * t * t);
    Δx = v0x * t;
    printf("\n\n");
    printf("3-18\n");
    printf("초속도 %6.2lfm/s로 수평면에 대해 %6.2lf˚의 각으로 공을 던졌다.\n", v0, angle);
    printf("이 물체가 올라갈 수 있는 (a) 최고 높이와 (b) 수평도달거리를 구하라.\n\n");
    printf("(a) 이 물체가 올라갈 수 있는 최고 높이의 시간을 구하라.\n");
    printf("(b) 이 물체가 올라갈 수 있는 최고 높이를 구하라.\n");
    printf("(c) 이 물체가 움직인 수평도달거리를 구하라.\n\n");

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 이 물체가 올라갈 수 있는 최고 높이의 시간을 구하라.\n\n");
        printf("관련공식 t = (vy - v0y) / a\n");
        printf("vy : 나중높이속력, v0y : 처음높이속력, t : 시간, a : 가속도\n\n");
        printf("중력가속도는 아래 방향이므로 %6.2lfm/s^2 입니다.\n\n", -g);
        printf("t = (vy - v0y) / -g\n");
        printf("  = (%6.2lfm/s - %6.2lfm/s) / %6.2lfm/s^2\n", vy, v0y, -g);
        printf("  = %6.2lfs\n\n", t);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("t = %6.2lfs\n\n", t);
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 이 물체가 올라갈 수 있는 최고 높이를 구하라.\n\n");
        printf("관련공식 y - y0 = v0y * t + 1/2 * a * t^2\n");
        printf("y : 높이, y0 : 처음높이, v0y : 처음높이 속도, v0 : 처음속도, t : 시간, a : 가속도\n\n");
        printf("중력가속도는 아래 방향이므로 -%6.2lfm/s^2 입니다.\n\n", g);
        printf("y -    y0   = v0y * t + 1/2 * a * t^2\n");
        printf("y - %6.2lfm = %6.2lfm/s * %6.2lfs - 1/2 * %6.2lf m/s^2 * (%6.2lfs)^2\n", y0, v0y, t, g, t);
        printf("            = %6.2lfm\n\n", y);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("y = %6.2lfm\n\n", y);
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(c) 이 물체가 움직인 수평도달거리를 구하라.\n\n");
        printf("관련 공식 Δx = v0x * t\n");
        printf("Δx : 수평방향거리, v0x : 처음거리속력, t : 시간\n\n");
        printf("Δx = v0x * t\n");
        printf("    = %6.2lf m/s * %6.2lfs\n", v0x, t);
        printf("    = %6.2lfm\n\n", Δx);

    }
    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("Δx = %6.2lfm\n\n\n", Δx);
    }
}

void Excersize_4_7(int solution, int answer)
{
    srand(time(NULL));
    double a1 = 8 + rand() % (10 + 1) - 5;
    double a2 = 24 + rand() % (30 + 1) - 15;
    double α = 3 + rand() % (5 + 1) - 2;
    double n = 5 + rand() % (5 + 1) - 2;
    printf("\n");
    printf("4-7 \n");
    printf("%6.2lfN의 힘을 물체 M1에 작용시키면 %6.2lf m/s^2의 가속도가 생기고\n", n, a1);
    printf("물체 M2에 작용시키면 %6.2lf m/s^2의 가속도가 생긴다.\n", a2);
    printf("이 두 물체를 하나로 묶었을 때 이 힘에 의한 가속도는 얼마인가?\n\n");
    printf("(a) 물체 1,2 를 구하여라.\n\n");
    printf("(b) 두 물체를 하나로 묶었을 때 힘에 의한 가속도를 구하여라.\n\n");

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 물체 1,2 를 구하여라.\n\n");
        printf("관련 공식은 ΣF = m * a\n");
        printf("ΣF:알짜 힘, m:질량, a:가속도\n\n");
        printf(" 물체1 :%6.2lf N = M1 * %6.2lf m/s^2\n", n, a1);
        printf("          M1     = %6.2lf kg\n", n / a1);
        printf(" 물체2 :%6.2lf N = M2 * %6.2lf m/s^2\n", n, a2);
        printf("          M2     = %6.2lf kg\n\n", n / a2);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("          M1     = %6.2lf kg\n", n / a1);
        printf("          M2     = %6.2lf kg\n\n", n / a2);
        printf("\n\n");
    }
    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 두 물체를 하나로 묶었을 때 힘에 의한 가속도를 구하여라.\n\n");
        printf("관련 공식은 ΣF = m * a\n");
        printf("ΣF:알짜 힘, m:질량, a:가속도\n\n");
        printf("   ΣF   = ( M1 + M2 ) * a\n");
        printf("%6.2lfN = (%6.2lf/%6.2lf + %6.2lf/%6.2lf )kg * a \n", n, n, a1, n, a2);
        printf("   a    = (%6.2lf/%6.2lf + %6.2lf/%6.2lf )m/s^2\n", n * 1 / n, a1, n * 1 / n, a2);
        printf("        =   %6.2lf m/s^2\n", (n * 1 / n, a1) + (n * 1 / n, a2));
        printf("\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf(" a = %6.2lf m/s^2\n\n", (n * 1 / n, a1) + (n * 1 / n, a2));
        printf("\n\n\n");
    }

}

void Excersize_4_14(int solution, int answer)
{
    srand(time(NULL));

    double N = 1000 + rand() % (100 + 1) - 50;
    double μ = 0.5 + (rand() % (10 + 1) - 1) * 0.08;
    double Ff = 0;
    double g = 9.80;
    Ff = N * μ;

    printf("\n\n");
    printf("4-14 \n");
    printf("수평한 마루 위에 놓인 무게가 %6.2lfN인 상자에 그림 P4-14와 같이\n 수평방향으로 300N의 힘을 가했다. 마루와 상자 사이의 정지마찰\n계수가 %6.2lf일때, 이 상자에 작용하는 마찰력은 얼마인가?", N, μ);


    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("상자에 작용하는 마찰력은 얼마인가?\n\n");
        printf("관련 공식은 Ff = μ * N\n");
        printf("Ff :마찰력, μ :마찰 계수, N :수직항력\n\n");
        printf("수직항력 N = m * g = %6.2lfN 입니다.\n\n", N);
        printf("Ff = μ * N\n");
        printf("   = %6.2lfN *%6.2lf\n", μ, N);
        printf("   = %6.2lfN\n\n", Ff);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        printf("Ff = %6.2lfN\n\n", Ff);
    }
}



int main(void)
{

    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("========================= MSC Contest  ==========================\n");
    printf("=================================================================\n");
    printf("=================================================================\n");

    //Excersize_1_21(1 , 1);
    //Excersize_2_1 (1 , 1);
    //Excersize_2_10(1 , 1);
    //Excersize_2_14(1 , 1);
    //Excersize_2_26(1, 1);
    //Excersize_3_9 (1 , 1);
    //Excersize_3_13(1, 1);
    //Excersize_3_18(1 , 1);
    //Excersize_4_7 (1 , 1);
    //Excersize_4_14(1 , 1);
}