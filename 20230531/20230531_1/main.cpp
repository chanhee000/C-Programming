//�̷������Ƽ���� 202315022 ��â��
//���� ���� �����ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void save(int coin)
{
	static long balance = 0;

	if (coin >= 0)
	{
		printf("%d \t\t", coin);
	}
	else
	{
		printf("\t %d \t", -coin);
	}
	balance += coin;
	printf("%d \n", balance);
}

int main(void)
{
	printf("==============================\n");
	printf("�Ա� \t���\t �ܰ�\n");
	printf("==============================\n");
	save(10000);
	save(50000);
	save(-10000);
	save(30000);
	printf("==============================\n");
	return 0;
}

