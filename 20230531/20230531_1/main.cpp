//미래모빌리티공학 202315022 한창희
//은행 계좌 구현하기
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
	printf("입금 \t출금\t 잔고\n");
	printf("==============================\n");
	save(10000);
	save(50000);
	save(-10000);
	save(30000);
	printf("==============================\n");
	return 0;
}

