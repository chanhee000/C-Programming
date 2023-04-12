#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int t;
	t = 0;

	printf("정수을 입력하세요:");
	scanf("%d", &t);



	if (t < 0)
	{
		printf("\n%d인 절대값이 나왔습니다.", -t);
	}

	else
	{
		printf("\n%d인 절대값이 나왔습니다.", t);
	}


}