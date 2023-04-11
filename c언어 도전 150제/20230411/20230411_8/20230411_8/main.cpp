#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int money, coin;
	int coka = 500;

	printf("음료수의 값은 500원입니다.\n");

	printf("투입하실 금액을 입력하시오:");
	scanf("%d", &money);
	

	if (money >= 500)
	{
	printf("\n음료수가 나왔습니다");
	}
	else if (money <= 500)
	{
		printf("\n가격이 부족하여 %d원이 반환되었습니다", money);

	
	}
	else
	{

	}

}