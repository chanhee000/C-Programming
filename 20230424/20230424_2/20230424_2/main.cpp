//202315022 ��â�� 2��100���̿� �ִ� ��� �Ҽ��� ã�� ���α׷�
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