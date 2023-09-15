#define _CRT_SEUCRE_NO_WARNINGS
#include<stdio.h>


void ChangePlusOne(int n)
{
	n += 1;

}

int main(void)
{

	int num = 3;
	printf("%d\n", num);

	num = 5;
	printf("%d\n", num);

	ChangePlusOne(num);
	printf("%d\n", num);

	return 0;

}