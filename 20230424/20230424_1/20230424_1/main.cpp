//202315022 ��â�� ����ڰ� �Է��� ������ ��� ����� ȭ�鿡 ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int x, y, z;
	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	printf("%d�� ��� :", x);

	for (y = 1; y <= x; y++)
	{
		if (x % y == 0)
		{
			printf("%d ", y);
		}
}
	printf("\n");
	return 0;
}