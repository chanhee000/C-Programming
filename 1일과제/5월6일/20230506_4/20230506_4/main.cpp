//3. �Ǽ������� ������ �Է� �޾Ƽ� 90�� �̻��̸� A, 89~80�̸� B, 79~70�̸� C, 69~60�̸� D,59�����̸� F�� ����ϴ� if��

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int h;
	printf("������ �Է����ּ���.:");
	scanf("%d", &h);

	if (h >= 90 && h <= 100)
	{
		printf("A����Դϴ�.");
	}
	else if (h >= 80 && h >= 89)
	{
		printf("B����Դϴ�.");
	}
	else if (h >= 70 && h <= 79)
	{
		printf("C����Դϴ�.");
	}
	else if (h >= 60 && h <= 69)
	{
		printf("D����Դϴ�.");
	}
	else if(h>=0&&h<=59)
	{
		printf("F����Դϴ�.");
	}
	else
	{
		printf("������ �ٽ� �Է����ּ���.");
	}
}