#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {


	int hot1,hot2;

	hot1 = 0;
	hot2 = 0;
	

	printf("����Ǵ� ù°�� ü���µ�:", hot1);
	scanf("%d", &hot1);
	printf("����Ǵ� ��°�� ü���µ�:", hot2);
	scanf("%d", &hot2);

	if (hot1  >=35 && hot2 >=35)
	{
		printf("�����溸�� �˷��帳�ϴ�.");
	}
	else if (hot1 >= 33 && hot2>=33)
	{
		printf("�������Ǻ��� �˷��帳�ϴ�.");
	}
	else
	{

	}

}