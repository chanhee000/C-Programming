#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {


	int hot;

	hot = 0;

	printf("���� �µ�:", hot);
	scanf("%d", &hot);

	if (hot >= 35)
	{
		printf("���� ��ü���µ��� %d���� �����溸�� �˷��帳�ϴ�.\n���� �̻��´� 2���̻� ���ӵ� ������ ����˴ϴ�.", hot);
	}
	else if (hot >= 33)
	{
		printf("���� ��ü���µ��� %d���� �������Ǻ��� �˷��帳�ϴ�.\n���� �̻��´� 2���̻� ���ӵ� ������ ����˴ϴ�.", hot);
	}
	else
	{

	}

}