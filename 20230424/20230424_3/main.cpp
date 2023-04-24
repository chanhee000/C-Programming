//202315022 한창희 피보나치수열
#include<stdio.h>

int main(void)
{
	int a,b,c,d;
	a = 0;
	b = 1;
	for (d = 0; d <= 10; d++) {
		printf("%d ", a);
		c = a + b;
		a = b;
		b = c;
	}
}