#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c = 0;

	printf("n의 값을 입력하시오: ");
	scanf("%d", &b);

	for (a = 1; a <= b; a++)
	{
		c += a * a;

	}

	printf("계산값은 %d입니다.\n", c);

}