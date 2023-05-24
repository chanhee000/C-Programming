//202315022 미래모빌리티공학 한창희
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int coin_toss(void);
int main(void)
{
	int toss;
	int head = 0;
	int tails = 0;
	srand((unsigned)time(NULL));

	for (toss = 0; toss < 100; toss++)
	{
		if (coin_toss() == 1)
			head++;
		else
			tails++;
	}
	printf("동전의 앞면: %d \n", head);
	printf("동전의 뒷면: %d \n", tails);
	return 0;
}
int coin_toss(void)
{
	int head = rand() % 2;
	return head;
}

