//1. 정수를 하나 입력받고 홀수인지 짝수인지 확인하여 출력하는 프로그램을 작성하세요. 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int h;

	printf("정수를 입력해주세요.:");
	scanf("%d", &h);

	switch (h % 2)
	{
	case 0:
		printf("짝수입니다");
		break;
	case 1:
		printf("홀수입니다");
		break;
	}
}
