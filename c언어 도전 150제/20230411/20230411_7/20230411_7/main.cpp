#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {


	int hot1,hot2;

	hot1 = 0;
	hot2 = 0;
	

	printf("예상되는 첫째날 체감온도:", hot1);
	scanf("%d", &hot1);
	printf("예상되는 둘째날 체감온도:", hot2);
	scanf("%d", &hot2);

	if (hot1  >=35 && hot2 >=35)
	{
		printf("폭염경보를 알려드립니다.");
	}
	else if (hot1 >= 33 && hot2>=33)
	{
		printf("폭염주의보를 알려드립니다.");
	}
	else
	{

	}

}