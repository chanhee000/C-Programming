
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int na;

	na = 0;
	printf("나이를 알려주세요:", na);

	scanf("%d", &na);

	if (na <= 20)
	{
		
		printf("20세 미만이셔서 30% 할인 받으실 수 있습니다.");

	}
	else if (na >= 20)
	{

		printf("20세 초과셔서 30% 할인을 받으실 수 없습니다.");

	}
	else
	{
	}
	
}