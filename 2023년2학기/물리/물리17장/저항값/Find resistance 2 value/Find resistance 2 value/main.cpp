#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double voltage = 5.0;
    double resistance1 = 0.0;
    double voltage_out = 0;

    printf("����1�� ���� �Է��ϼ���: ");
    scanf("%lf", &resistance1);

    printf("(�Ҽ��� �� �����ּž� ��Ȯ�� ���ɴϴ�.)\n V_out �� �Է�: ");
    scanf("%lf", &voltage_out);

    double resistance2 = (resistance1 * voltage_out) / (voltage - voltage_out);
    printf("����2�� ���� %.2lf�Դϴ�. ", resistance2);

    return 0;
}