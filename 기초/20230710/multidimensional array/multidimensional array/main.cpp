#include<stdio.h>

int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
int i, k;


int main(void)
{
 for (i = 0; i < 2; i++)
 for (k = 0; k < 3; k++)
 printf("%d\n", a[i][k]);
}