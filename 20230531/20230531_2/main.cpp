//�̷������Ƽ���� 202315022 ��â��

#include<stdio.h>

void sub()
{
	static int scount = 0;
	int acount = 0;
	printf("scount = %d\t", scount);
	printf("acount = 5d\n", acount);
	scount++;
	acount++;
}

int main(void)
{
	sub();
	sub();
	sub();
	return 0;
}
