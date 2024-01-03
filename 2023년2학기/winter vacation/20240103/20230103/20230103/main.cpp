#define _CRT_SECURE_NO_WARNINGS
#define M_PI 3.14159265358979323846
#include<stdio.h>
#include<math.h>

void plus(void)
{
	int x, y;
	printf("�� ������ ���� �Է����ּ���.");
	scanf("%d %d", &x, &y);
	printf("\n");
	printf("%d + %d = %d\n\n", x, y, x + y);
}

void subtract(void)
{
	int x, y;
	printf("�� ������ ���� �Է����ּ���.");
	scanf("%d %d", &x, &y);
	printf("\n");
	printf("%d - %d = %d\n\n", x, y, x - y);
}

void multiply(void)
{
	int x, y;
	printf("�� ������ ���� �Է����ּ���.");
	scanf("%d %d", &x, &y);
	printf("\n");
	printf("%d * %d = %d\n\n", x, y, x * y);
}

void divide(void)
{
	int x, y;
	printf("�� ������ ���� �Է����ּ���.");
	scanf("%d %d", &x, &y);
	printf("\n");
	printf("%d / %d = %d\n\n", x, y, x / y);
}

void root(void)
{
	int x;
	printf("��Ʈ�� ����� ������ �Է����ּ���");
	scanf("%d", &x);
	printf("\n");
	if (x < 0) 
	{
		printf("������ �������� ���ǵ��� �ʽ��ϴ�.\n");
	}
	else {
		double result = sqrt((double)x);
		printf("\n");
		printf("��%d = %lf\n\n", x, result);
	}
}

void factorial()
{
	long long n, result = 1, i;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%lld", &n);
	for (i = 1; i <= n; i++)
	{
		result = result * i;
		printf("��� = %lld\n\n", result);
	}
}
void sine(void)
{
	double angle;

	printf("������ �Է��ϼ���: ");
	scanf("%lf", &angle);

	double result = sin(angle * M_PI / 180.0);

	printf("sin(%lf) = %lf\n\n", angle, result);
}

int menu(void)
{
	int choice;
	printf("1.���ϱ�\n");
	printf("2.����\n");
	printf("3.���ϱ�\n");
	printf("4.������\n");
	printf("5.��Ʈ\n");
	printf("6.���丮��\n");
	printf("7.����\n");
	printf("8.����\n");
	
	printf("����ϰ� ���� ������� �������ּ���.");
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
			printf("�����մϴ�.\n");
			return 0;
		}
	}
}


/*
//������� ���丮�� �Լ� ���
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

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("%d!�� %d�Դϴ�.\n", x, factorial(x));
	return 0;
}
*/

/*int get_integer(void)
{
	int n;
	printf("������ �Է��Ͻÿ�: ");
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
		printf("%d�� �Ҽ��Դϴ�", n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.",n);
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

	printf("���� 2���� �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	larger = max(x, y);
	printf("�� ū ���� %d �Դϴ�",larger);

	return 0;
}
*/