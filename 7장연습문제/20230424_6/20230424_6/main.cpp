#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c = 0;

	printf("n�� ���� �Է��Ͻÿ�: ");
	scanf("%d", &b);

	for (a = 1; a <= b; a++)
	{
		c += a * a;

	}

	printf("��갪�� %d�Դϴ�.\n", c);

}