#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 
#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI



void Excersize_3_3(int solution, int answer)
{
	double high = 30;
	double degree = 210;
	double z;
	z = sqrt(3);
	double u = 1 / 2;
	double x;
	double y;


	printf("\n\n");
	printf("3-3 \n");
	printf("변위의 높이가 %.lfm이고", high);
	printf("방향이 %.lf° 라고한다. 이 변위의 x성분과 y성분을 구하라.\n\n", degree);

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("===============================풀이================================\n");
		printf("(a) 문제를 풀기를 위해서는 삼각함수의 식을 사용하셔야합니다. \n");
		printf("210°를 cos과 sin에 넣어 x와 y의 변위의 위치를 알 수 있습니다.\n\n");
		printf("x의 식은 (변위의 위치=부호)(변위의 길이)*cos210입니다.\n");
		printf("y의 식은 (변위의 위치=부호)(변위의 길이)*sin210입니다.\n");
		printf("x의 부호는 -이고 변위의 길이는 30입니다\n ");
		printf("y의 부호는 -이고 변위의 길이는 30입니다\n ");
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("x=-30m*cos210=%lf\n", x = z / 2);
		printf("y=-30m*sin210=%.1lf\n", y = 0.5);
		printf("0.866025=√3/2입니다.\n");
		printf("0.5=1/2입니다\n");
		printf("=================================================================\n");
		printf("\n\n\n");
	}
}
void Excersize_3_15(int solution, int answer)
{
	double x;
	double z;


	printf("\n\n");
	printf("3-15 \n");
	printf("높이490m인 곳에서 수평방향으로 던진 물체가 던진 곳에서 수평방항으로 100m인곳에 떨어졌다.");
	printf("(a)이 물체가 땅에 떨어질 때까지 걸린 시간은 얼마인가");
	printf("(b)물체의 초속도는 얼마인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("===============================풀이================================\n");
		printf("(a)문제 \n");
		printf("y축의 이동방향으로 식을 새울 수 있습니다.식을 새우면 y=y0+Vogt+1/2(-g)t^2입니다. \n");
		printf("y는 공이 도달한 위치,g는 중력가속도,t는 시간을 말합니다.\n\n");
		printf("y=0,Vogt=0이고 g는 -9.8입니다.식에 숫자를 대입할 경우\n");
		printf("0=490m+0+1/2(-9.80)t^2라는 식이 나옵니다.\n");
		printf("t^2=490*2/9.8이라는 식으로 바꿀 수 있습니다.\n");
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("t^2=490*2/9.8=%.lfs\n", x = 10);
		printf("=================================================================\n");
		printf("\n\n\n");
	}
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("===============================풀이================================\n");
		printf("(b)문제 \n");
		printf("물체의 초속도를 구하는 문제로 초기 높이는 Voxt입니다.초기높이는 100m입니다. \n");
		printf("Voxt=초기높이/t라는 식으로 바꿔줄 수 있습니다.\n\n");
		printf("t=10입니다 (a)문제에서 t=10s라는 값을 구했습니다.\n");
		printf("식에 대입을 할 경우 Voxt=100/10s가 나옵니다.\n");
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("Voxt=100/10s=%.lfm/s\n",z=100/10);
		printf("=================================================================\n");
		printf("\n\n\n");
	}
}


int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_3_3(1, 1);
	Excersize_3_15(1, 1);



}