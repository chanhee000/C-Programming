//�̷������Ƽ���� 202315022 ��â��
//360p 4��

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int check_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}

	else
	{
		return 0;
	}

}
int main(void)
{	
	int c;
	printf("���ڸ� �Է��Ͻÿ�:");
	scanf("%c", &c);
	if(check_alpha(c))
	{
		printf("%c�� ���ĺ��Դϴ�.",c);
	}
	else
	{
		printf("%c�� ���ĺ��� �ƴմϴ�.",c);
	}
}
