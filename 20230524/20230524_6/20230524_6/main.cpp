//미래모빌리티공학 202315022 한창희
//11번 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand() {
	return rand() % (80 + 1) + 10;
}

int main(void) 
{
	int a, b;

	srand(time(NULL));

	for (a = 1; b <= 10; b++) 
	{
		printf("%d ", b_rand());
	}
	return 0;
}