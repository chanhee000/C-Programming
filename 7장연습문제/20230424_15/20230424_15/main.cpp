#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void) {

	int a;
	int b;
	int c;
	int d;

	printf("a 값: ");
	scanf("%d", &a);

	printf("b 값: ");
	scanf("%d", &b);

	c = 1;

	for (d = a; d >= (a - b + 1); d--) {
		c = c * d;
	}

	printf("순열 값: %d\n",c );

	return 0;
}