//1. ������ �ϳ� �Է¹ް� Ȧ������ ¦������ Ȯ���Ͽ� ����ϴ� ���α׷��� �ۼ��ϼ���. 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int h;

	printf("������ �Է����ּ���: ");
	scanf("%d", &h);

	if (h % 2 == 0)

		printf("¦���Դϴ�.");

	else
		printf("Ȧ���Դϴ�.");
}