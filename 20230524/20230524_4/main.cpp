//�̷������Ƽ���� 202315022 ��â��
//362p 10��

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 90

int main(void)
{
	int i;
	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++)
		printf("%d ", 10 + rand() % MAX);
	printf("\n");
	return 0;
}
