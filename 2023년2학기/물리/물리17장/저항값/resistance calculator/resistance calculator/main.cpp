#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num = 0;
    double voltage = 5.0;
    double resistance[10] = { 0.0 };
    double voltage_out = 0;

    printf("저항의 개수:");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("저항의 값을 입력하세요 :");
        scanf("%lf", &resistance[i]);
    }

    voltage_out = (voltage * resistance[1]) / (resistance[0] + resistance[1]);

    printf("V_out 값은 %.2lf입니다. ", voltage_out);