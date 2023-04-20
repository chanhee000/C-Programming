//202315022
//¹Ì·¡¸ðºô¸®Æ¼°øÇÐ
//ÇÑÃ¢Èñ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(void)
{
	int x, y, op, answer, i;
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
				printf("¸Â¾Ñ½À´Ï´Ù.\n");
			else
				printf("Æ²·È½À´Ï´Ù\n");
		}

		if (op == 1)
		{
			printf("%d - %d=", x, y);
			scanf("%d", &answer);
			if (x - y == answer)
				printf("¸Â¾Ñ½À´Ï´Ù.\n");
			else
				printf("Æ²·È½À´Ï´Ù\n");
		}

		if (op == 2)
		{
			printf("%d * %d=", x, y);
			scanf("%d", &answer);
			if (x * y == answer)
				printf("¸Â¾Ñ½À´Ï´Ù.\n");
			else
				printf("Æ²·È½À´Ï´Ù\n");
		}

		if (op == 3)
		{
			printf("%d / %d=", x, y);
			scanf("%d", &answer);
			if (x / y == answer)
				printf("¸Â¾Ñ½À´Ï´Ù.\n");
			else
				printf("Æ²·È½À´Ï´Ù\n");
		}
		if (op == 4)
		{
			printf("%d % %d=", x, y);
			scanf("%d", &answer);
			if (x / y == answer)
				printf("¸Â¾Ñ½À´Ï´Ù.\n");
			else
				printf("Æ²·È½À´Ï´Ù\n");
		}


	}

}