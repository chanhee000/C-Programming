//미래모빌리티공학 202315022 한창희
#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>
#define STUDENTS 10
#include<stdlib.h>
#define SIZE 6
#include<time.h>
#define SIZES 100


//학생들의 평균 성적 구하기
/*int main(void)
{
	int score[STUDENTS];
	int i;
	i = 0;
	int sum;
	sum = 0;
	double average;

	printf("총 학생 수: %d\n", STUDENTS);
	for (i = 0; i < STUDENTS; i++)
	{
		printf("학생들의 성적을 적어주세요:");
		scanf("%d", &score[i]);
	}

	for (i = 0; i < STUDENTS; i++)
	{
		sum += score[i];
	}

	average = (double)sum / STUDENTS;
	printf("학생들의 성적 평균: %.2lf\n", average);

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
	printf("숫자       빈도\n");
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