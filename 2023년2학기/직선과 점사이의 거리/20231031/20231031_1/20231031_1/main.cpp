#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main() {
    double a, b, x, y;

    printf("������ ������ y = ax + b���� a�� b ���� �Է��ϼ���:\n");
    scanf("%lf %lf", &a, &b);

    printf("���� ��ǥ (x0, y0)�� �Է��ϼ���:\n");
    scanf("%lf %lf", &x, &y);

    double distance = fabs((a * x - y + b) / sqrt(a * a + 1));
    double x1 = (x + a * y - a * b) / (a * a + 1);
    double y1 = a * x1 + b;

    printf("������ ��(%.2lf, %.2lf)������ ���������� �Ÿ�: %lf\n",x1,y1, distance);
   

    return 0;
}