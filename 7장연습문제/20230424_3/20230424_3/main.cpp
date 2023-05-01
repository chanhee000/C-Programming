#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int c;
	int b;
	int i;
	int a = 100;

	printf("입력할 정수의 개수:");
	scanf("%d", &c);
	b = 0;

	for (i = 0; i < c; i++) {
		printf("요소를 입력하시오: ", i);
		scanf("%d", &a);
		b += a;
	}

	printf("합= %d", b);

	return 0;
}