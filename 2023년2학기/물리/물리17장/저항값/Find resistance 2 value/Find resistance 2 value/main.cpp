#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double voltage = 5.0;
    double resistance1 = 0.0;
    double voltage_out = 0;

    printf("저항1의 값을 입력하세요: ");
    scanf("%lf", &resistance1);

    printf("(소수점 다 적어주셔야 정확히 나옵니다.)\n V_out 값 입력: ");
    scanf("%lf", &voltage_out);

    double resistance2 = (resistance1 * voltage_out) / (voltage - voltage_out);
    printf("저항2의 값은 %.2lf입니다. ", resistance2);

    return 0;
}