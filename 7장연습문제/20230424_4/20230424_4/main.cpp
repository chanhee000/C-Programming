#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	int a;

	int b;

	printf("정수를 입력하시오: ");
	scanf("%d", &a);

	for (b = 1; b <= a; b++)
	{

		if (a % b == 0)
		{
			printf("%d ", b);
		}
	}
}