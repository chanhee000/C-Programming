#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main(void)
{
	double kc = 8.99 * pow(10,9);
	double q1 = 0;
	double q2 = 0;
	double r = 0;
	double Fc = 0;

	printf("Fc를 구하라\n");

	printf("r,q1,q2을 입력하세요:\n");
	scanf("%lf,%lf,%lf",&r,&q1,&q2);

	printf("Fc=%lf", kc * ((q1 * q2) / (r * r)));

}