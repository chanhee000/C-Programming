#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	double oil;
	double sold;

	oil = 100;
	printf("���� ���ᷮ: %5.0lf\n", oil);
	do {
		printf("���� ������ +,�Ҹ�� -�� �Է����ּ���.: ");
		scanf("%lf", &sold);

		oil += sold;
		if (oil > 500)
		{
			printf("�� ���� �ִ� ����뷮�� 500�Դϴ�.\n");
			oil -= sold;
			printf("���� ���ᷮ:%lf\n", oil);
			oil = 500;
		}
		printf("���� �����ִ� ����:%lf\n", oil);
		if (oil <= 20)
			break;
	}
	while (1);
	printf("(���)���ᰡ 20���� �̸��Դϴ�.\n");

}