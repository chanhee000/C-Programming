#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



int main(void)
{
    int a;
    double b = 0;
    double c;

    printf("���� ����: ");
    scanf("%d", &a);

    for (c = 1; c <= a; c++)
    {
        b += 1.0 / c;
    }

    printf("������ ��:%lf\n", b);
}
