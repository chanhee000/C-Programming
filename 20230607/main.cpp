//�̷������Ƽ���� 202315022 ��â��
#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>
#define STUDENTS 10
#include<stdlib.h>
#define SIZE 6
#include<time.h>
#define SIZES 100


//�л����� ��� ���� ���ϱ�
/*int main(void)
{
	int score[STUDENTS];
	int i;
	i = 0;
	int sum;
	sum = 0;
	double average;

	printf("�� �л� ��: %d\n", STUDENTS);
	for (i = 0; i < STUDENTS; i++)
	{
		printf("�л����� ������ �����ּ���:");
		scanf("%d", &score[i]);
	}

	for (i = 0; i < STUDENTS; i++)
	{
		sum += score[i];
	}

	average = (double)sum / STUDENTS;
	printf("�л����� ���� ���: %.2lf\n", average);

	return 0;
}*/

/*int main(void)
{
	srand(time(NULL));

	int freq[SIZE+1] = { 0 };
	int i;

	for (i = 0; i < 10000; i++)
	{
		++freq[1 + rand() % 6];
	}

	printf("==============================\n");
	printf("����       ��\n");
	printf("==============================\n");

	for (i = 1; i < SIZE+1; i++)
	{
		printf("%3d     %3d \n", i, freq[i]);
	}
	return 0;
}*/

int main(void)
{
	srand(time(NULL));

	int freq[SIZES + 1] = { 0 };
	int i;

	for (i = 0; i < 30000; i++)
	{
		++freq[1 + rand() % 100];
	}

	for (i = 1; i < SIZES + 1; i++)
	{
		printf("%3d     %3d \n", i, freq[i]);
	}
	return 0;
}