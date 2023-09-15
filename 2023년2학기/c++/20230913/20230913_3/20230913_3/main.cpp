#include<stdio.h>

int main(void)
{
	int num = 5;
	int* p;
	p = &num;

	printf(" num: %d\n", num);
	printf("  *p: %d\n", *p);
	printf("   p: %d\n", p);
	printf("&num: %d\n", &num);

	return 0;
}