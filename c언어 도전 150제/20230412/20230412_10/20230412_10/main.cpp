#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int point;
	point = 0;
	printf("시험 점수를 입력해주세요:");
	scanf("%d" , &point);

	if (point >= 90 && point <= 100)
	{
		printf("A학점입니다.");
	}
	else if (point >= 80 && point <= 89)
	{
		printf("B학점입니다.");
	}
	else if (point >= 70 && point <= 79)
	{
		printf("C학점입니다.");
	}
	else if (point >= 60 && point <= 69)
	{
		printf("D학점입니다.");
	}

	else
	{
		printf("F학점입니다.");
	}
}