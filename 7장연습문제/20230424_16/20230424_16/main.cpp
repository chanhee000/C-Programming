#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a;
	int b;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &a);

	do
	{
		b = a % 10;
		a /= 10;
		printf("%d", b);

	}
	while (a != 0);
}