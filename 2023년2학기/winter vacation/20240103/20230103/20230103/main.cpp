#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

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
}*/