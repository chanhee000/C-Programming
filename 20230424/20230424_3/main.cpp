//202315022 ��â�� �Ǻ���ġ����
#include<stdio.h>

int main(void)
{
	int a,b,c,d;
	a = 0;
	b = 1;
	for (d = 0; d <= 10; d++) {
		printf("%d ", a);
		c = a + b;
		a = b;
		b = c;
	}
}