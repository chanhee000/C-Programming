//1. ������ �ϳ� �Է¹ް� Ȧ������ ¦������ Ȯ���Ͽ� ����ϴ� ���α׷��� �ۼ��ϼ���. 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int h;

	printf("������ �Է����ּ���.:");
	scanf("%d", &h);

	switch (h % 2)
	{
	case 0:
		printf("¦���Դϴ�");
		break;
	case 1:
		printf("Ȧ���Դϴ�");
		break;
	}
}
