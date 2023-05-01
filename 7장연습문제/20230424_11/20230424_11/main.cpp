#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	double oil;
	double sold;

	oil = 100;
	printf("현재 연료량: %5.0lf\n", oil);
	do {
		printf("연료 충전은 +,소모는 -로 입력해주세요.: ");
		scanf("%lf", &sold);

		oil += sold;
		if (oil > 500)
		{
			printf("이 차의 최대 연료용량은 500입니다.\n");
			oil -= sold;
			printf("현재 연료량:%lf\n", oil);
			oil = 500;
		}
		printf("현재 남아있는 연료:%lf\n", oil);
		if (oil <= 20)
			break;
	}
	while (1);
	printf("(경고)연료가 20리터 미만입니다.\n");

}