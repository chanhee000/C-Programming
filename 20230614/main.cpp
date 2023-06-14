#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 100

/*int main(void)
{
	int prices[SIZE] = { 0 };
	int i;
	int minimum;

	printf("-----------------------------------\n");
	printf("1  2  3  4  5  6  7  8  9  10\n");
    printf("-----------------------------------\n");

	srand((unsigned)time(NULL));
	for (i = 0; i < SIZE; i++)
	{
		prices[i] = (rand() % 100) + 1;
		printf("%-3d", prices[i]);
	}
	printf("\n\n");

	minimum = prices[0];

	for (i = 1; i < SIZE; i++)
	{
		if (prices[i] < minimum)
			minimum = prices[i];
	}

	printf("최소값은 %d입니다.\n", minimum);
	return 0;
}*/

/*int main(void)
{

	int prices[SIZE] = { 0 };
	int i;
	int minimum;

	printf("-----------------------------------\n");
	printf("1  2  3  4  5  6  7  8  9  10\n");
	printf("-----------------------------------\n");

	srand((unsigned)time(NULL));
	for (i = 0; i < SIZE; i++)
	{
		prices[i] = (rand() % 1000) + 1;
		printf("%-3d ", prices[i]);
	}
	printf("\n\n");

	minimum = prices[0];

	for (i = 1; i < SIZE; i++)
	{
		if (prices[i] > minimum)
			minimum = prices[i];
	}

	printf("최소값은 %d입니다.\n", minimum);
	return 0;
}*/

	void modify_array(int a[], int size);
	void printf_array(int a[], int size);

	int main(void)
	{
		int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

		printf_array(list,SIZE);
		modify_array(list, SIZE);
		printf_array(list, SIZE);

		return 0;
	}

	void modify_array(int a[], int size)
	{
		int i;

		for (i = 0; i < size; i++)
			++a[i];
	}

	void printf_array(int a[], int size)
	{
		int i;

		for (i = 0; i < size; i++)
		
			printf("%3d", a[i]);
		printf("\n");
		
	}