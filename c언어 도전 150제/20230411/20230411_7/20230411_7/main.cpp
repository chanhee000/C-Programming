#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {


	int hot;

	hot = 0;

	printf("현재 온도:", hot);
	scanf("%d", &hot);

	if (hot >= 35)
	{
		printf("현재 일체감온도는 %d도로 폭염경보를 알려드립니다.\n현재 이상태는 2일이상 지속될 것으로 예상됩니다.", hot);
	}
	else if (hot >= 33)
	{
		printf("현재 일체감온도는 %d도로 폭염주의보를 알려드립니다.\n현재 이상태는 2일이상 지속될 것으로 예상됩니다.", hot);
	}
	else
	{

	}

}