#include <stdio.h>

int main()
{
	int array[3];
	int i;

	array[0] = 100;
	array[1] = 200;
	array[2] = 300;

	for (i = 0; i < 3; i++)
		printf("array[%d]�� ��: %d\n", i, array[i]);
	return 0;
}