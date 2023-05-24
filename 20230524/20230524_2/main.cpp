//미래모빌리티공학 202315022 한창희
//360p 4번

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int check_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}

	else
	{
		return 0;
	}

}
int main(void)
{	
	int c;
	printf("문자를 입력하시오:");
	scanf("%c", &c);
	if(check_alpha(c))
	{
		printf("%c는 알파벳입니다.",c);
	}
	else
	{
		printf("%c는 알파벳이 아닙니다.",c);
	}
}
