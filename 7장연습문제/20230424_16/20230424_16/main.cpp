#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a;
	int b;

	printf("정수를 입력하시오: ");
	scanf("%d", &a);

	do
	{
		b = a % 10;
		a /= 10;
		printf("%d", b);

	}
	while (a != 0);
}