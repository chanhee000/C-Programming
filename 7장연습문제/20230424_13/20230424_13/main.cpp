#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a;
	int c;
	a = 0;
	c = 0;

	while (1)
	{
		a++;
		c += a;
		if (c >= 10000)
			break;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", (a - 1), c - a);
}