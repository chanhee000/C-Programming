//실수형으로 성적을 입력 받아서 90점 이상이면 A, 89~80이면 B, 79~70이면 C, 69~60이면 D, 59이하이면 F로 출력하도록 switch문

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int h;

	printf("점수를 입력해주세요.");
	scanf("%d", &h);

	switch(h/10)
	{
	case 10:
	{
		printf("A등급입니다");
		break;
	}
	case 9:
	{
		printf("A등급입니다");
		break;
	}
	case 8:
	{
		printf("B등급입니다.");
		break;
	}
	
	case 7:
	{
		printf("C등급입니다.");
		break;
	}

	case 6:
	{
		printf("D등급입니다.");
		break;
	}

	default:
	{
		printf("F등급입니다.");
	}

	}
}