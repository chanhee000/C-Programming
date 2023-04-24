//202315022 한창희 2와100사이에 있는 모든 소수를 찾는 프로그램
#include<stdio.h>

int main(void)
{
	int x, y, z;

	for (x = 2; x <= 100; x++) {
		y = 1;
		for (z = 2; z < x; z++)
		{
			if (x % z == 0)
			{
				y = 0;
				
			}
		}
		if (y == 1)
		{
			printf(" %d ", x);
		}
	}

	return 0;
}