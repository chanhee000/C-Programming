#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int cm;
	float feet, inch;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%d", &cm);

	inch = float(cm) / 2.54;
	feet = inch / 12;

	printf("%dcm %f��Ʈ %f��ġ �Դϴ�.\n", cm, feet, inch);
	return 0;

}