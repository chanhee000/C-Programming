#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void ChangeDouble(int* p)
{  
	*p = *p * 2;
}


int main(void) 
{
	int num;

	printf("���� �Է� : ");
	scanf("%d", &num); 

	ChangeDouble(&num);

	printf("%d\n", num);

	return 0;

}