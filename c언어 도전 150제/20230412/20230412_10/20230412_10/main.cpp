#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int point;
	point = 0;
	printf("���� ������ �Է����ּ���:");
	scanf("%d" , &point);

	if (point >= 90 && point <= 100)
	{
		printf("A�����Դϴ�.");
	}
	else if (point >= 80 && point <= 89)
	{
		printf("B�����Դϴ�.");
	}
	else if (point >= 70 && point <= 79)
	{
		printf("C�����Դϴ�.");
	}
	else if (point >= 60 && point <= 69)
	{
		printf("D�����Դϴ�.");
	}

	else
	{
		printf("F�����Դϴ�.");
	}
}