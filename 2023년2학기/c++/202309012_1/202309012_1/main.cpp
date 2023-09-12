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

	printf("���� �����̸� 1�� ���� �����̸� 2���� �������ּ���\n");
	scanf("%d", &number);

	switch (number)
	{
	case 1:
		printf("���� ������ �����ϼ̽��ϴ�.\n\n");
		break;

	case 2:
		printf("���� ������ �����ϼ̽��ϴ�.\n\n");
		break;

	default:
		printf("�߸� �����ϼ̽��ϴ�. �ٽ� �������ּ���.\n");
		break;
	}

	printf("������ ������ �Է����ּ���\n");
	scanf("%d", &resistor);
	
	for (int i = 0; i < resistor; i++)
	{

		printf("���� R%d�� ���� �Է��ϼ���:", i + 1);
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
	printf("�ռ� ���� ��:%.1lf\n", total_resistor);

	return 0;
}
