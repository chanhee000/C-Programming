#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	int a;

	int b;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &a);

	for (b = 1; b <= a; b++)
	{

		if (a % b == 0)
		{
			printf("%d ", b);
		}
	}
}