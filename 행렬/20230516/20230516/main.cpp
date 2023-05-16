#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ROWS 3
#define COLS 3

int main(void)
{
	int A[ROWS][COLS] = { {1,2,3},{4,5,6},{7,8,9} };
	int B[ROWS][COLS] = { {1,2,3},{4 ,5 ,6},{7 ,8 ,9}};
	int C[ROWS][COLS];
	int a, b;

	for (a = 0; a < ROWS; a++)

		for (b = 0; b < COLS; b++)
			C[a][b] = A[a][b] + B[a][b];


	for (a = 0; a < ROWS; a++) {

		for (b = 0; b < COLS; b++)
			printf("%d ", C[a][b]);
		printf("\n");
	}
	
}