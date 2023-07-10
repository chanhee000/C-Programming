#include<stdio.h>

int main(void)
{
	int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int i, k;



	for (i = 0; i < 2; i++)

		for (k = 0; k < 3; k++)

			printf("%d\n", a[i][k]);
}