#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//재귀적인 팩토리얼 함수 계산
long factorial(int n)
{
	printf("factorial(%d)\n", n);

	if (n <= 1)return 1;
	else return n * factorial(n - 1);
}

int main(void)
{
	int x = 0;
	long f;

	printf("정수를 입력하시오: ");
	scanf("%d", &x);
	printf("%d!는 %d입니다.\n", x, factorial(x));
	return 0;
}
/*int get_integer(void)
{
	int n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	return n;
}

int is_prime(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main(void)
{
	int n = get_integer();

	if (is_prime(n) == 1)
		printf("%d는 소수입니다", n);
	else
		printf("%d는 소수가 아닙니다.",n);
	return 0;
}
*/
/*int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main(void)
{
	int x, y, larger;

	printf("정수 2개를 입력하시오: ");
	scanf("%d %d", &x, &y);

	larger = max(x, y);
	printf("더 큰 값은 %d 입니다",larger);

	return 0;
}*/