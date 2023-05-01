#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 
int main(void) {
	char c;
	int x;
	int y;

	printf("*****************\n");
	printf("A---- Add \n");
	printf("S---- Subtract \n");
	printf("M---- Multiply \n");
	printf("D---- Divide \n");
	printf("Q---- Quit \n");
	printf("*****************\n");

	do {
		printf("연산을 선택하시오:");
		scanf_s(" %c", &c);

		if (c == 'Q')

			break;

		printf("두수를 공백으로 분리하여 입력하시오: ");
		scanf_s("%d %d", &x, &y);

		if (c== 'A')

			printf("%d \n", x + y);

		else if (c == 'S')

			printf("%d \n", x - y);

		else if (c == 'M')

			printf("%d \n", x * y);

		else if (c == 'D')

			printf("%d \n", x / y);

		else

			printf("연산자가 아닙니다. \n");

	} while (1);

	return 0;
}