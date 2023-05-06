//3. 실수형으로 성적을 입력 받아서 90점 이상이면 A, 89~80이면 B, 79~70이면 C, 69~60이면 D,59이하이면 F로 출력하는 if문

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int h;
	printf("점수를 입력해주세요.:");
	scanf("%d", &h);

	if (h >= 90 && h <= 100)
	{
		printf("A등급입니다.");
	}
	else if (h >= 80 && h >= 89)
	{
		printf("B등급입니다.");
	}
	else if (h >= 70 && h <= 79)
	{
		printf("C등급입니다.");
	}
	else if (h >= 60 && h <= 69)
	{
		printf("D등급입니다.");
	}
	else if(h>=0&&h<=59)
	{
		printf("F등급입니다.");
	}
	else
	{
		printf("점수를 다시 입력해주세요.");
	}
}