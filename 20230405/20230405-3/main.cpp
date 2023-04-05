#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	double x = 0, O = 0, V = 0, B = 0;


	printf("구의 반지름을 입력하시오: ");
	scanf("%lf", &x);

	O = 3.14;
	V = 4 * x * x * O;
	printf("표면적은 %lf입니다. ", V);

	B = O * x * x * x * 4 / 3;
	printf("체적은 %lf입니다. ", B);
	return 0;

}