//202315022
//�̷������Ƽ����
//��â��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(void)
{
	int x, y,op, answer, i;
	srand(time(NULL));

	while (1) {
		x = rand() % 10;
		y = rand() % 10;
		op = rand() % 4;
		if (op == 0)
		{
			printf("%d + %d=", x, y);
			scanf("%d", &answer);
			if (x + y == answer)
				printf("�¾ѽ��ϴ�.\n");
			else
				printf("Ʋ�Ƚ��ϴ�\n");
		}

		if(op == 1)
		{
		printf("%d - %d=", x, y);
		scanf("%d", &answer);
		if (x - y == answer)
		printf("�¾ѽ��ϴ�.\n");
		else
		printf("Ʋ�Ƚ��ϴ�\n");
		}

		if(op == 2)
		{
		printf("%d * %d=", x, y);
		scanf("%d", &answer);
		if (x * y == answer)
		printf("�¾ѽ��ϴ�.\n");
		else
		printf("Ʋ�Ƚ��ϴ�\n");
		}

		if(op == 3)
		{
		x = rand() % (1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
		y = rand() % (1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
		printf("%d / %d=", x, y);
		scanf("%d", &answer);
		if (x / y == answer)
		printf("�¾ѽ��ϴ�.\n");
		else
		printf("Ʋ�Ƚ��ϴ�\n");
		}
		if(op==4)
		{
		x = rand() % (1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
		y = rand() % (1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
		printf("%d % %d=", x, y);
		scanf("%d", &answer);
		if (x / y == answer)
		printf("�¾ѽ��ϴ�.\n");
		else
		printf("Ʋ�Ƚ��ϴ�\n");
		}


	}

}