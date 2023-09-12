#define _CRT_SECURE_NO_WARNINGS
#define MAX_NO_RESISTOR 10
double resistor_1[MAX_NO_RESISTOR] = { 0,0 };
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

double serial_resistor_calculator(int number)
{
	double total_resistor = 0.0;
	for (int i = 0; i < number; i++)
	{
		total_resistor += resistor_1[i];
	}

	return total_resistor;
}

double parallel_resistor_calcutalor(int number)
{
	double total_resistor = 0.0;

	for (int i = 0; i < number; i++)
	{
		total_resistor += 1.0/resistor_1[i];
	}

	return 1.0/ total_resistor;
}
int main()
{
	int number;
	int resistor;
	double total_resistor;

	printf("직렬 저항이면 1번 병렬 저항이면 2번을 선택해주세요\n");
	scanf("%d", &number);

	switch (number)
	{
	case 1:
		printf("직력 저항을 선택하셨습니다.\n\n");
		break;

	case 2:
		printf("벽력 저항을 선택하셨습니다.\n\n");
		break;

	default:
		printf("잘못 선택하셨습니다. 다시 선택해주세요.\n");
		break;
	}

	printf("저항의 갯수를 입력해주세요\n");
	scanf("%d", &resistor);
	
	for (int i = 0; i < resistor; i++)
	{

		printf("저항 R%d의 값을 입력하세요:", i + 1);
		scanf("%lf", &resistor_1[i]);
	}
	if (number == 1)
	{
		total_resistor = serial_resistor_calculator(number);


	}
	else
	{
		total_resistor = parallel_resistor_calcutalor(number);
	}
	printf("\n\n");
	printf("합성 저항 값:%.1lf\n", total_resistor);

	return 0;
}
