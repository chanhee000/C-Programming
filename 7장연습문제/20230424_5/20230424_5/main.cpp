#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	double a = 1.0;
	double b = 1.0;
	double c = 1.0;

	printf("실수의 값을 입력하세요: ");
	scanf("%lf", &a);

	printf("거듭제곱횟수를 입력하세요: ");
	scanf("%lf", &b);

	while (b != 0)
	{
		c *= a;
		b--;
	}

	printf("결과값: %5.2lf", c);

	return 0;

}