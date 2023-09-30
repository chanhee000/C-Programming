#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
	double V;
	double R1;
	double R2;
	double R3;
	double R4;
	double VB;
	double VC;
	double VBD;
	double VAB;
	double VAD;

	printf("V= ");
	scanf("%lf", &V);

	printf("R1= ");
	scanf("%lf", &R1);

	printf("R2= ");
	scanf("%lf", &R2);

	printf("R3= ");
	scanf("%lf", &R3);

	printf("R4= ");
	scanf("%lf", &R4);

	VB = (R2 / (R1 + R2)) * V;
	VC = (R4 / (R3 + R4)) * V;

	printf("VB = %lf\n", VB);
	printf("VC = %lf\n", VC);

	VBD = ((R1 * R3 - R2 * R4) / ((R1 + R2) * (R3 + R4))) * V;

	printf("VBD = %lf\n", VBD);


}