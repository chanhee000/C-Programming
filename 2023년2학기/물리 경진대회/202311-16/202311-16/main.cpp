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

int main(void)
{

    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("========================= MSC Contest  ==========================\n");
    printf("========================   Chapter 2     ========================\n");
    printf("=================================================================\n");

    Excersize_1_21(1, 1);
}