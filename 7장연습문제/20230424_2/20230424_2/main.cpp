#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a = 0;
	int b;
	for (b = 1; b <= 100; b++)
	{
		if (b % 3 == 0)
		{
			a += b;
		}
	}

	printf("1부터 100사이의 3의 배수 합: %d", a);
	return 0;
}