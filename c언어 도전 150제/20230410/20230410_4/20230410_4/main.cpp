#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int x = 20;			//x�� ���� 20���� �����Ѵ�.
	int y  = 0;
	printf("y�� ���� �Է��Ͻÿ�:");
	scanf("%d", &y);

	if (x > y) {

		printf("x�� ���� y�� ������ Ů�ϴ�. \n");			//���� x�� ���� y������ Ŭ ��� x�� ���� y�� ������ Ů�ϴٰ� �������Ѵ�.
		
	}
	else
	{

		printf("x�� ���� y�� ������ �۽��ϴ�. \n");			//���� x�� ������ y�� ������ ���� ��� x�� ���� y�� ������ �۽��ϴٰ� �������Ѵ�.

	}

}