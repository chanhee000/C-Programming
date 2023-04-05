#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int cm;
	float feet, inch;

	printf("키를 입력하시오(cm): ");
	scanf("%d", &cm);

	inch = float(cm) / 2.54;
	feet = inch / 12;

	printf("%dcm %f피트 %f인치 입니다.\n", cm, feet, inch);
	return 0;

}