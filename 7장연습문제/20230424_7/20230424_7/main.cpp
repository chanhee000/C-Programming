#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a;
	int b;

	for (a = 1; a <= 7; a++)
	{
		for (b = 1; b <= 7 - a; b++)
		{
			printf(" ");

		}
		for (b = 1; b <= a; b++)
		{
			printf("*");
		}
		printf("\n");

	}
}