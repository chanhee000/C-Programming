#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int A[3][3] = { 0 };
	int B[3][3] = { 0 };
	int C[3][3] = { 0 };
	int y;
	int z;
	int o;

	printf("상수 o값: ");
	scanf("%d", &o);


	for (y = 0; y < 3; y++)
	{
		for (z = 0; z < 3; z++)
		{
			printf("A행렬 %d행 %d열:", y + 1, z + 1);
			scanf("%d", &A[y][z]);
		}
		printf("\n");
	}



	for (y = 0; y < 3; y++) {
		for (z = 0; z < 3; z++)
			printf("%d ", C[y][z]= A[y][z]*o);
		printf("\n");
	}
	}
