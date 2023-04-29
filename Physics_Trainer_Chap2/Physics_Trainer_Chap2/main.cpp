#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
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
	printf("���ӵ��� ���� +1�̶�� �ǹ̴�?\n");
	printf("(a):�ӵ��� ��ȭ�� ����.\n");
	printf("(b):�ӵ��� ���� Ŀ����.\n");
	printf("(c):�ӵ��� ���� �۾�����.\n");
	printf("(d):�ӵ��� �����ϴ�.\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("===============================Ǯ��================================\n");
		printf("���ӵ��� �ð��� ���� �� �ӵ��� ��ȭ�� �˷��ִ� ���� ���մϴ�. \n");
		printf("�׷��� ������ ���ӵ��� ���� +1�� ��� +1�� ��� �����Ѵٴ� ���� �� �� �ֽ��ϴ�. \n");
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		printf("��:(b)\n");
		printf("���ӵ��� ���� +1�� ���� ��� ���̱� ������ �ӵ��� ���� �� �þ�� ���� �´�.\n");
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
	printf("� ���� ������ 10000m�� 30min�̳��� �����Ϸ����Ѵ�.\n");
	printf("��Ȯ�� 27min ���� �Ŀ� �޷��� �� �Ÿ��� 1100m ���Ҵ�.\n");
	printf("�׷��� ���� ������ ���ϴ� �ð� ���� �����ϱ� ���ؼ���\n");
	printf("0.2m/s^2�� ���ӵ��� �� �� ���� �����ؾ��ϴ°�?.\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("===============================Ǯ��================================\n");
		printf("ó���Ÿ� %5.1lfm�� ����1�� ����2�� ������.\n",distance);
		printf("����1�� % 5.1lfm�� �ΰ� ����2�� % 5.1lfm�� �д�\n", distance1, distance2);
		printf("��ռӵ� ���ϴ� ������ v= ��x/ ��t�Դϴ�.\n");
		printf("����1 ��ռӵ���  %5.1lfm/(%5.1lfm * %5.1lfs)= %.2lfm/s �Դϴ�\n", distance1, minute, second, medium_speed1);
		printf("����2 ��ռӵ��� ����ȭ�ϴ� �ð� ����ȭ���� �ʴ� �ð��� �� �� �ֽ��ϴ�.\n");
		printf("��ӵ� ���ϴ� ������ v=v0+1/2at^2�Դϴ�. ��\n");
		printf("����2�� ��ӵ��� %5.2lfm/s^2 +%5.1lfm/s^2 �Դϴ�\n", average_speed, rate_of_change / 2);
		printf("��ӵ��� ������ v=v0+at�Դϴ�.\n");
		printf("����2�� ��ӵ���%5.1lf+(%5.2lf-%5.2lf)t -%5.2lft^2�Դϴ�\n", average_time, rate_of_change * 180, average_speed, rate_of_change);
		printf("����2�� ��ӵ��� ��ӵ��� ���İ���ϸ� %5.2lft^2 +%5.2lft %5.2lf=%5.2lfm�� �ȴ�.\n", a, b, c, d);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		if (a == 0)
			printf("t�� ���� %5.2lf�Դϴ�\n", -c / b);
		else
		{
			t = b * b - 4.0 * a * c;
			if (t >= 0)
			{
				printf("t�� ���� %5.2lf�Դϴ�\n", (-b + sqrt(t)) / ((2.0 * a)));
			}
			else
				printf("�Ǳ��� �������� �ʽ��ϴ�\n");
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