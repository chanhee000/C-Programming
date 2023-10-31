#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main() {
    double a, b, x, y;

    printf("직선의 방정식 y = ax + b에서 a와 b 값을 입력하세요:\n");
    scanf("%lf %lf", &a, &b);

    printf("점의 좌표 (x0, y0)를 입력하세요:\n");
    scanf("%lf %lf", &x, &y);

    double distance = fabs((a * x - y + b) / sqrt(a * a + 1));
    double x1 = (x + a * y - a * b) / (a * a + 1);
    double y1 = a * x1 + b;

    printf("직선과 점(%.2lf, %.2lf)사이의 직선에서의 거리: %lf\n",x1,y1, distance);
   

    return 0;
}