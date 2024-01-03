#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a = 0;
	int b = 1;
	int c = 0;

	for (int i = 2; i <= 10; i++)
	{
		c = a + b;
		printf("%d , %d , %d\n", a, b, c);

		a = b;
		b = c;
	}

}
/*
int main()
{
	int dec = 17;
	int bimy[20] = { 0 };
	int p = 0;

	
	for (;;)
	 {  
		bimy[p] = dec % 2;
		dec = dec / 2;
		p++;

		if (dec == 0)
		{
			break;
		}
	 
	}  
	for (int i = p - 1; i >= 0; i--)
	 {
		printf("%d", bimy[i]);
		return 0;
	 }
	}
*/
/*
int main()
{
	int marr[10] = { 1, 2, - 1. - 2, 1 , 2. - 1. - 2, 1, 2 };
	int tmp = 0;

	for(int i = 0; i < sizeof(marr) / sizeof(int); i++)
		tmp += marr[i];

		printf("°á°ú= %d",tmp);
}
*/