#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	double x = 0, O = 0, V = 0, B = 0;


	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &x);

	O = 3.14;
	V = 4 * x * x * O;
	printf("ǥ������ %lf�Դϴ�. ", V);

	B = O * x * x * x * 4 / 3;
	printf("ü���� %lf�Դϴ�. ", B);
	return 0;

}