//202315022 한창희 사용자가 입력한 정수의 모든 약수를 화면에 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int x, y, z;
	printf("한 개의 정수를 입력하시오: ");
	scanf("%d", &x);

	printf("%d의 약수 :", x);

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