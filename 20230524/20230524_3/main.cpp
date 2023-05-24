//미래모빌리티공학 202315022 한창희
//361p 8번

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int get_tax(int income)
{

	if (income <= 1000)
	{
		return income * 0.08;
	}
	else
	{
		
		return income * 0.1;
	}

}

int main(void)
{
	int income;
	printf("소득을 입력하시오(만원):");
	scanf("%d", &income);
	printf("소득세:%d만원입니다",get_tax(income));
	
}