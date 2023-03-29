#define _CRT_SECURE_NO_WARNINGS
#define SEC_PER_MINUTE 60
#include<stdio.h>


int main(void)
{
	
	int input, minute, second;

	printf("초를 입력하시요;");
	scanf("%d", &input);		// 초단위의 시간을 읽는다.
	minute = input / SEC_PER_MINUTE; //몇분
	second = input % SEC_PER_MINUTE; //몇초

	printf("%d초는 %d분 %d초입니다. \n", input, minute, second);
	return 0;


}