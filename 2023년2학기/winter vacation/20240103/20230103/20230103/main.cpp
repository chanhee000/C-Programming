#define _CRT_SECURE_NO_WARNINGS
#define M_PI 3.14159265358979323846
#include<stdio.h>
#include<math.h>

void plus(void)
{
	int x, y;
	printf("두 정수의 값을 입력해주세요.");
	scanf("%d %d", &x, &y);
	printf("\n");
	printf("%d + %d = %d\n\n", x, y, x + y);
}

void subtract(void)
{
	int x, y;
	printf("두 정수의 값을 입력해주세요.");
	scanf("%d %d", &x, &y);
	printf("\n");
	printf("%d - %d = %d\n\n", x, y, x - y);
}

void multiply(void)
{
	int x, y;
	printf("두 정수의 값을 입력해주세요.");
	scanf("%d %d", &x, &y);
	printf("\n");
	printf("%d * %d = %d\n\n", x, y, x * y);
}

void divide(void)
{
	int x, y;
	printf("두 정수의 값을 입력해주세요.");
	scanf("%d %d", &x, &y);
	printf("\n");
	printf("%d / %d = %d\n\n", x, y, x / y);
}

void root(void)
{
	int x;
	printf("루트를 사용할 정수를 입력해주세요");
	scanf("%d", &x);
	printf("\n");
	if (x < 0) 
	{
		printf("음수의 제곱근은 정의되지 않습니다.\n");
	}
	else {
		double result = sqrt((double)x);
		printf("\n");
		printf("√%d = %lf\n\n", x, result);
	}
}

void factorial()
{
	long long n, result = 1, i;
	printf("정수를 입력하시오: ");
	scanf("%lld", &n);
	for (i = 1; i <= n; i++)
	{
		result = result * i;
		printf("결과 = %lld\n\n", result);
	}
}
void sine(void)
{
	double angle;

	printf("각도를 입력하세요: ");
	scanf("%lf", &angle);

	double result = sin(angle * M_PI / 180.0);

	printf("sin(%lf) = %lf\n\n", angle, result);
}

int menu(void)
{
	int choice;
	printf("1.더하기\n");
	printf("2.빼기\n");
	printf("3.곱하기\n");
	printf("4.나누기\n");
	printf("5.루트\n");
	printf("6.팩토리얼\n");
	printf("7.사인\n");
	printf("8.종료\n");
	
	printf("계산하고 싶은 계산방법을 선택해주세요.");
	scanf("%d", &choice);
	printf("\n");
	return choice;
}

int main(void)
{
	while (1)
	{
		switch (menu())
		{
		case 1:
			plus();
			break;
		case 2:
			subtract();
			break;

		case 3:
			multiply();
			break;
		case 4:
			divide();
			break;
		case 5:
			root();
			break;
		case 6:
			factorial();
			break;
		case 7:
			sine();
			break;
		case 8:
			printf("종료합니다.\n");
			return 0;
		}
	}
}


/*
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
*/

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
}
*/