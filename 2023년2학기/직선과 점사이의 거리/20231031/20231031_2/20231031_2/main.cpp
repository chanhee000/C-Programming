#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() 
{
    double a, b, x0, y0;


    printf("������ ������ y = ax + b���� a�� b ���� �Է��ϼ���:\n");
    scanf("%lf %lf", &a, &b);


    printf("���� ��ǥ (x0, y0)�� �Է��ϼ���:\n");
    scanf("%lf %lf", &x0, &y0);

    double c = y0 - (-1 / a) * x0;

    double x2 = x0;
    double y2 = (-1 / a) * x0 + c;

    double distance = sqrt((a - x2) * (a - x2) + (b - y2) * (b - y2));

    printf("���������� �Ÿ�: %.2lf\n", distance);
    printf("������ ���� ���� �� (x2, y2): (%.2lf, %.2lf)\n", x2, y2);

    return 0;
}

