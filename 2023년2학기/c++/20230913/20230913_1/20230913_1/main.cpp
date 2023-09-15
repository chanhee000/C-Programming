#define _CRT_SEUCRE_NO_WARNINGS
#include<stdio.h>

//Prosto
int ReturnPlusOne(int n) 
{
	return n + 1;

}

int main(void)
{

	int num = 3;

	printf("%d\n", num);

	num = 5;

	printf("%d\n", num);

	num = ReturnPlusOne(num);

	printf("%d\n", num);

	return 0;

}