//�̷������Ƽ���� 202315022 ��â��
//361p 8��

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int get_tax(int income)
{

	if (income <= 1000)
	{
		return income * 0.08;
	}
	else
	{
		
		return income * 0.1;
	}

}

int main(void)
{
	int income;
	printf("�ҵ��� �Է��Ͻÿ�(����):");
	scanf("%d", &income);
	printf("�ҵ漼:%d�����Դϴ�",get_tax(income));
	
}