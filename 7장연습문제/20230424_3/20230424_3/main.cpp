#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int c;
	int b;
	int i;
	int a = 100;

	printf("�Է��� ������ ����:");
	scanf("%d", &c);
	b = 0;

	for (i = 0; i < c; i++) {
		printf("��Ҹ� �Է��Ͻÿ�: ", i);
		scanf("%d", &a);
		b += a;
	}

	printf("��= %d", b);

	return 0;
}