#define _CRT_SECURE_WARNINGS
#include <stdio.h>

int main(void)
{
	int money, change;
	int price, c5000, c1000, c500, c100, c50, c10;

	printf("���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &price);

	printf("������ �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &money);
	change = money - price;

	c5000 = change / 5000;
	change = change % 5000;

	c1000 = change / 1000;
	change = change % 1000;

	c500 = change / 500;
	change = change % 500;

	c100 = change / 100;
	change = change % 100;

	c50 = change / 50;
	change = change % 50;

	c10 = change / 10;
	change = change % 10;

	printf("�Ž������� ������ �����ϴ�\n��õ����: %d��\n", c5000);
	printf("õ����: %d��\n", c1000);
	printf("����� ����: %d��\n", c500);
	printf("��� ����: %d��\n", c100);
	printf("���ʿ� ����: %d��\n", c50);
	printf("�ʿ� ����: %d��\n", c10);
	return 0;
}