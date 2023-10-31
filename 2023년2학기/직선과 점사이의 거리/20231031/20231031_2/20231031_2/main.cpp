#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() 
{
    double a, b, x0, y0;


    printf("직선의 방정식 y = ax + b에서 a와 b 값을 입력하세요:\n");
    scanf("%lf %lf", &a, &b);


    printf("점의 좌표 (x0, y0)를 입력하세요:\n");
    scanf("%lf %lf", &x0, &y0);

    double c = y0 - (-1 / a) * x0;

    double x2 = x0;
    double y2 = (-1 / a) * x0 + c;

    double distance = sqrt((a - x2) * (a - x2) + (b - y2) * (b - y2));

    printf("직선에서의 거리: %.2lf\n", distance);
    printf("수직인 직선 위의 점 (x2, y2): (%.2lf, %.2lf)\n", x2, y2);

    return 0;
}

