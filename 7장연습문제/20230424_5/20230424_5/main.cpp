#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	double a = 1.0;
	double b = 1.0;
	double c = 1.0;

	printf("�Ǽ��� ���� �Է��ϼ���: ");
	scanf("%lf", &a);

	printf("�ŵ�����Ƚ���� �Է��ϼ���: ");
	scanf("%lf", &b);

	while (b != 0)
	{
		c *= a;
		b--;
	}

	printf("�����: %5.2lf", c);

	return 0;

}