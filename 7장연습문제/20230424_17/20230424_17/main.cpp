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
		printf("������ �����Ͻÿ�:");
		scanf_s(" %c", &c);

		if (c == 'Q')

			break;

		printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
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

			printf("�����ڰ� �ƴմϴ�. \n");

	} while (1);

	return 0;
}