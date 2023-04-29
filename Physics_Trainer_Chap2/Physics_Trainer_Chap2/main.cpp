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



void Excersize_2_8(int solution, int answer)
{

	printf("\n\n");
	printf("2-8 \n");
	printf("가속도의 값이 +1이라는 의미는?\n");
	printf("(a):속도의 변화가 없다.\n");
	printf("(b):속도가 점점 커진다.\n");
	printf("(c):속도가 점점 작아진다.\n");
	printf("(d):속도가 일정하다.\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("===============================풀이================================\n");
		printf("가속도는 시간이 변할 떄 속도의 변화를 알려주는 것을 말합니다. \n");
		printf("그렇기 때문에 가속도의 값이 +1인 경우 +1씩 계속 증가한다는 것을 알 수 있습니다. \n");
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("답:(b)\n");
		printf("가속도의 값이 +1인 것을 물어본 것이기 때문에 속도가 점점 더 늘어나는 것이 맞다.\n");
		printf("=================================================================\n");
		printf("\n\n\n");
	}
}
void Excersize_2_16(int solution, int answer)
{
	double distance = 10000;
	double distance1 = 8900;
	double distance2 = 1100;
	double average_speed = 5.49;
	double minute = 27;
	double time = 0;
	double second = 60;
	double rate_of_change = 0.2;
	double medium_speed1 = distance1 / (minute * second);
	double acceleration = rate_of_change * (second * second);
	double medium_speed2 = average_speed + rate_of_change * rate_of_change;
	double rate_time = rate_of_change * 180;
	double medium_speed3 = rate_time - average_speed;
	double average_time = average_speed * 180;
	double t;
	double a = (rate_of_change / 2) - rate_of_change;
	double b = rate_of_change * 180;
	double c = -distance2 + (average_speed * 180);
	double d = 0, e = 0;



	printf("\n\n");
	printf("2-16 \n");
	printf("어떤 육상 선수가 10000m를 30min이내에 주파하려고한다.\n");
	printf("정확히 27min 지난 후에 달려야 할 거리가 1100m 남았다.\n");
	printf("그런데 육상 선수가 원하는 시간 내에 주파하기 위해서는\n");
	printf("0.2m/s^2의 가속도로 몇 초 동안 가속해야하는가?.\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("===============================풀이================================\n");
		printf("처음거리 %5.1lfm를 구간1과 구간2로 나눈다.\n",distance);
		printf("구간1을 % 5.1lfm로 두고 구간2를 % 5.1lfm로 둔다\n", distance1, distance2);
		printf("평균속도 구하는 공식은 v= △x/ △t입니다.\n");
		printf("구간1 평균속도는  %5.1lfm/(%5.1lfm * %5.1lfs)= %.2lfm/s 입니다\n", distance1, minute, second, medium_speed1);
		printf("구간2 평균속도는 가속화하는 시간 가속화하지 않는 시간을 둘 수 있습니다.\n");
		printf("등가속도 구하는 공식은 v=v0+1/2at^2입니다. △\n");
		printf("구간2의 등가속도는 %5.2lfm/s^2 +%5.1lfm/s^2 입니다\n", average_speed, rate_of_change / 2);
		printf("등속도의 공식은 v=v0+at입니다.\n");
		printf("구간2의 등속도는%5.1lf+(%5.2lf-%5.2lf)t -%5.2lft^2입니다\n", average_time, rate_of_change * 180, average_speed, rate_of_change);
		printf("구간2의 등가속도와 등속도를 합쳐계산하면 %5.2lft^2 +%5.2lft %5.2lf=%5.2lfm가 된다.\n", a, b, c, d);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		if (a == 0)
			printf("t의 값은 %5.2lf입니다\n", -c / b);
		else
		{
			t = b * b - 4.0 * a * c;
			if (t >= 0)
			{
				printf("t의 값은 %5.2lf입니다\n", (-b + sqrt(t)) / ((2.0 * a)));
			}
			else
				printf("실근이 존재하지 않습니다\n");
		}
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

	Excersize_2_8(1, 1);
	Excersize_2_16(1, 1);
}