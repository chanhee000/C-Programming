//202315022 미래모빌리티공학 한창희
//1부터 사용자가 입력한 숫자 사이의 모든 소수를 찾도록 프로그램 업그레이드

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int get_integer(void)
{
	int n;
	do {
		printf("1부터 구할 소수의 구간을 알려주세요.: ");
		scanf("%d", &n);

	} while (n <= 0);

	return n;
}

int is_prime(int n)
{
	int i;
	int j;
	for (i = 2; i < n; i++)
	{
		for (j = 2; j < i; j++) {

			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

int main(void)
{
	int n;
	n = get_integer();


	is_prime(n);


	return 0;
}