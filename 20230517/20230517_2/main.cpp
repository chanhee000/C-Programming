//202315022 미래모빌리티공학 한창희
//키보드에서 입력된 값이 음수가 입력되면 다시 입력을 받을 수 있도록 하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int get_integer(void)
{
	int n;
	do {
		printf("양의 정수를 입력해주세요.: ");
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
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main(void)
{
	int n;
	n = get_integer();


	if (is_prime(n) == 1)
		printf("%d는 소수입니다.\n", n);
	else
		printf("%d는 소수가 아닙니다.\n", n);


	return 0;
}
