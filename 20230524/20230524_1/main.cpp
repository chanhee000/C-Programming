//�̷������Ƽ���� 202315022 ��â��
//360p1�� ������ ���� ������ ����� �ϴ� �Լ����� �ۼ��ϰ�, ����ڷκ��� ������ ���� �Է¹��� �Ŀ� �ۼ��� �Լ����� �׽�Ʈ�Ͽ�����.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>



int even(int n)
{
	if (n % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return n;
}

int absolute(int n)
{
	return abs(n);
	if (n < 0)
	{
		return 1;
	}
	else if(n < 0)
	{
		return - 1;
	}
	else if (n == 0)
	{
		return 0;
	}
}

int sign(int n)
{
	if (n < 0)
	{
		return -1;
	}
	else if(n == 0)
	{
		return -0;
	}
	else if(n>1)
	{
		return 1;
	}
	return n;
}
int main(void)
{
	int n;
	n = 0;
	printf("������ �Է����ּ���.:");
	scanf("%d", &n);
	printf("even()�� �����:%d", even(n));
	printf("\nabsolute()�� �����:%d", absolute(n));
	printf("\nsign()�� �����:%d", sign(n));
}