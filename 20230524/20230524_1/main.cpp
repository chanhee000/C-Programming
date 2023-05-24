//미래모빌리티공학 202315022 한창희
//360p1번 다음과 같은 간단한 기능을 하는 함수들을 작성하고, 사용자로부터 임의의 값을 입력받은 후에 작성한 함수들을 테스트하여보자.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>



int even(int n)
{
	if (n % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return n;
}

int absolute(int n)
{
	return abs(n);
	if (n < 0)
	{
		return 1;
	}
	else if(n < 0)
	{
		return - 1;
	}
	else if (n == 0)
	{
		return 0;
	}
}

int sign(int n)
{
	if (n < 0)
	{
		return -1;
	}
	else if(n == 0)
	{
		return -0;
	}
	else if(n>1)
	{
		return 1;
	}
	return n;
}
int main(void)
{
	int n;
	n = 0;
	printf("정수를 입력해주세요.:");
	scanf("%d", &n);
	printf("even()의 결과값:%d", even(n));
	printf("\nabsolute()의 결과값:%d", absolute(n));
	printf("\nsign()의 결과값:%d", sign(n));
}