#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int t;
	t = 0;

	printf("������ �Է��ϼ���:");
	scanf("%d", &t);



	if (t < 0)
	{
		printf("\n%d�� ���밪�� ���Խ��ϴ�.", -t);
	}

	else
	{
		printf("\n%d�� ���밪�� ���Խ��ϴ�.", t);
	}


}