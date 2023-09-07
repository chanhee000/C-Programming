#include <stdio.h>
#include <string.h>

int main()
{
	const char* msg = "Hello\n";

	for (int i = 0; i < strlen(msg); i++)
	{
		printf("%c\n",*(msg + i));
	}

}

/*int main()
{
	int* a = (int*)malloc(sizeof(int) * 10);
	//for(int i = 0; i < 10; i++)
	//a[i] = 0;
	memset(a, 0, sizeof(int) * 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d %d\n", i, a[i]);
	}
}
*/

/*int main()
{
	int arr1[2][3] = { (1,2,3),(4,5,6) };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d", arr1[i][j]);
		}
	}
	printf("\n");
	int arr2[2][3] = { 0 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d", arr2[i][j]);
		}
	}
	printf("\n");
}*/