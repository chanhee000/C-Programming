#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>
#include <time.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_1_21(int solution, int answer)
{
    srand(time(NULL));

    double Ax = 3.00;
    Ax = 3.00   + rand() % (2 + 1) - 1;
    double Ay = 45.00;
    Ay = 45.00  + rand() % (15 + 1) - 15;
    double Bx = 6.00;
    Bx = 6.00   + rand() % (3 + 1) - 1;
    double By = -60.0;
    By = -60.00 + rand() % (30 + 1) - 15;
    double x1, x2,x3, y1, y2,y3;
    double distance;
    double xy;

    x1 = Ax * cos(DEG2RAD(Ay));
    y1 = Ax * sin(DEG2RAD(Ay));
    x2 = Bx * cos(DEG2RAD(By));
    y2 = Bx * sin(DEG2RAD(By));
    x3 = x1 - x2;
    y3 = y1 - y2;
    xy = sqrt(pow(x3, 2) + pow(y3, 2));

    printf("\n\n");
    printf("1 - 21\n");
    printf("����ǥ�迡�� (r, ��) = (%.2lfm, %.2lf��)�� (%.2lfm, %.2lf��)�̴�.\n",Ax,Ay,Bx,By);
    printf("�� �� ������ �Ÿ��� ���϶�.\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("A = (%.2lfcos%.2lf��, %.2lfsin%.2lf��)\n",Ax,Ay,Ax,Ay);
        printf("B = (%.2lfcos%.2lf��, %.2lfsin%.2lf��)\n\n", Bx, By, Bx, By);
        printf("��(x1-x2)^2 + (y1-y2)^2\n");
        printf("��((%.2lf * cos%.2lf) - (%.2lf * cos%.2lf))^2 + ((%.2lf * sin%.2lf) - (%.2lf * sin%.2lf))^2\n", Ax, Ay, Bx, By,Ax,Ay,Bx,By);
        printf("��(%.2lf + (%.2lf))^2 + (%.2lf + (%.2lf))^2\n",x1,-x2,y1,- y2);
        printf("��(%.2lf)^2 + (%.2lf)^2\n", x1 - x2, y1 - y2);
        printf("��%.2lf + %.2lf\n", pow(x3,2), pow(y3,2));
        printf("��%.2lf\n",pow(x3, 2) + pow(y3, 2));

    }
    if (answer == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   �� ��   =============================\n\n");
        printf("�� �� ������ �Ÿ�: %.2lf",xy);
        printf("\n\n\n");
    }
}
void Excersize_2_1(int solution, int answer)
{
    srand(time(NULL));

    double north_distance1 = 130.0 + rand() % (13 + 1) - 6;
    double south_distance = 76.7 + rand() % (7 + 1) - 4;
    double north_distance2 = 80.5 + rand() % (8 + 1) - 4;
    double y_displacement = 0.0;
    double displacement_a = 0.0;
    double displacement_b = 0.0;
    y_displacement = north_distance1 + north_distance2;
    displacement_a = y_displacement - south_distance;
    displacement_b = y_displacement + south_distance;

    printf("\n\n");
    printf("2-1 \n");
    printf("�����⵿��Ⱑ ������ ����Ͽ� �������� %4.1lf km�� ���ư� ��\n", north_distance1);
    printf("���� �������� �������� %4.1lf km�� ���ư� �ٸ� ������ �ư� \n", south_distance);
    printf("�ٽ� �������� %4.1lf km�� ���� �����Ͽ���.\n\n", north_distance2);
    printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ� ?\n\n");

    if (solution == SHOW)
    {
        printf("============================= Ǯ �� =============================\n\n");
        printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ� ?\n\n");
        printf("���� ������ ��y = ��y1 - ��y2 \n");
        printf("��y1�� �� �������� ���ư� �Ÿ�, ��y2�� �� �������� ���ư� �Ÿ�\n\n");
        printf("��y = ��y1 - ��y2\n");
        printf("    = %6.2lfkm - %6.2lfkm\n", y_displacement, south_distance);
        printf("    = %6.2lfkm\n\n", displacement_a);
    }

    if (answer == SHOW)
    {
        printf("============================= �� �� =============================\n\n");
        printf("��y = %4.1lf km\n\n", displacement_a);
    }

    if (solution == SHOW)
    {
        printf("============================= Ǯ �� =============================\n\n");
        printf("(b) �� �̳� ��Ⱑ ������ �� �Ÿ��� ���ΰ� ? \n\n");
        printf("���� ������ ��y = ��y1 + ��y2 \n");
        printf("��y = ��y1 + ��y2\n");
        printf("    = %6.2lfkm + %6.2lfkm\n", y_displacement, south_distance);
        printf("    = %6.2lfkm\n\n", displacement_b);
    }

    if (answer == SHOW)
    {
        printf("========================= �� �� =================================\n\n");
        printf("��y = %4.1lfkm \n\n", displacement_b);
    }

}

void Excersize_2_10(int solution, int answer)
{
    srand(time(NULL));

    double initial_velocity = 90.0 + rand() % (9 + 1) - 4;
    double final_velocity = 110.0 + rand() % (9 + 1) - 4;
    double change_of_velocity = 0.0;
    double final_change_of_velocity = 0;
    double acceleration = 1.7 + rand() % (5 + 1) - 2;
    double time = 0.0;

    printf("\n\n");
    printf("2_10 \n");
    printf("��ӵ��ο��� � �ڵ����� �� %6.2lf m/s^2 �� ���ӵ��� �� �� �ִ�.\n", acceleration);
    printf("�� ������ %6.2lf km/h ���� %6.2lf km/h �� �����ϴ� �� �ɸ� �� �ð��� �󸶳� �ɱ�? \n\n", initial_velocity, final_velocity);

    if (solution == SHOW)
    {
        change_of_velocity = final_velocity - initial_velocity;
        final_change_of_velocity = change_of_velocity * 1000 / 3600;
        //change_of_velocity = ((final_velocity)-(frist_velocity));
        time = final_change_of_velocity / acceleration;

        printf("\n\n\n");
        printf("============================  Ǯ ��  =============================\n\n");

        printf("���� ������ a = ��v / ��t �Դϴ� \n");
        printf("a�� ���ӵ� ,��v�� �ӵ� ��ȭ�� , ��t�� �ð� ��ȭ�� �Դϴ�. \n\n");
        printf("��t = ( %6.2lf km/h - %6.2lf km/h) / %6.2lfm/s^2 . \n", final_velocity, initial_velocity, acceleration);
        printf("km/h �� m/s (��)�� ������ �����ݴϴ�. \n\n");
        printf("%6.2lf km/h = (%6.2lf * 1000 / 3600 )m/s = %6.2lf m/s\n", change_of_velocity, change_of_velocity, final_change_of_velocity);
        printf("��t =  %6.2lf m/s / %6.2lf m/s^2\n", final_change_of_velocity, acceleration);

        printf("\n=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n");
        printf("\n");
        printf("��t=  %6.2lf s \n", time);
        printf("\n\n\n");
    }
}

void Excersize_2_14(int solution, int answer)
{
    srand(time(NULL));

    double initial_velocity = 0.0;
    double final_velocity = 30.0 + rand() % (8 + 1) - 4;
    double acceleration = 3.00 + rand() % (5 + 1) - 2;
    double distance = 0.0;

    printf("\n\n");
    printf("2_14 \n");
    printf("�����Ⱑ �̷��ϱ� ���ؼ��� �ӷ��� %6.2lf m/s �� �����ؾ� �Ѵ�.\n", final_velocity);
    printf("%6.2lf m/s^2 ���� �����ϰ� �����Ѵٸ� �̷� �ӵ��� �����ϱ� ���ؼ� ���� Ȱ�ְŸ��� �ʿ��Ѱ�? \n\n", acceleration);

    if (solution == SHOW)
    {
        distance = ((final_velocity * final_velocity) - (initial_velocity * initial_velocity)) / (2 * acceleration);

        printf("\n\n\n");
        printf("============================  Ǯ ��  =============================\n\n");

        printf("���� ������ v^2 - v0^2 = 2 * a * ��x �Դϴ�.\n");
        printf("v:�����ӵ�, v0:�ʱ�ӵ�, a:���ӵ�, ��x : �Ÿ���ȭ��   \n\n");
        printf("v^2 - v0^2 = 2 * a * ��x\n");
        printf("(%6.2lfm/s)^2 - (%6.2lfm/s)^2  =  2 * (%6.2lfm/s^2) * ��x   \n", final_velocity, initial_velocity, acceleration);
        printf("��x = (%6.2lfm/s)^2 / (2 *%6.2lfm/s^2) \n", (final_velocity), acceleration);
        printf("��x = %6.2lfm \n", distance);

        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("��x = %6.2lf m \n\n", distance);
        printf("\n\n\n");
    }
}

void Excersize_2_26(int solution, int answer)
{
    srand(time(NULL));
    double height = 15.0 + rand() % (4 + 1) - 1;
    double height0 = 0;
    double velocity_m_s = 22.0 + rand() % (6 + 1) - 3;
    double g = 9.80;
    double time_1;
    double time_2;
    double velocity_f;
    double velocity_f_2;
    double delta_velocity1;
    double delta_velocity2;

    printf("\n\n");
    printf("2-26 \n");
    printf("���� %6.2lf m/s�� �ӷ����� �����ϰ� ���� �÷ȴ�. \n\n", velocity_m_s);

    printf("(a) ���� %6.2lf m���� �󸶳� ���� ��ϰڴ°�? \n\n", height);

    printf("(b) �� ���̿� �����ϴ� �� �ɸ� �ð��� ���ΰ�? \n\n");


    if (solution == SHOW)

    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) ���� %6.2lf m���� �󸶳� ���� ��ϰڴ°�? \n\n", height);

        printf("���� ������ v^2 - v0^2 = 2 * a * ��y\n");
        printf(" a : ���ӵ�, v : ���߼ӵ�, v0 : ó���ӵ�\n");
        printf("��y = y - y0, y : ���߳���, y0 : ó������\n\n");

        printf("�߷� ���ӵ��� �Ʒ� �����̹Ƿ� -%6.2lf m/s^2 �Դϴ�.\n\n", g);

        printf("v^2 = v0^2 + 2 * a * ��y\n");
        printf("v^2 = (%6.2lf m/s)^2 + 2 * (-%6.2lf m/s^2) * %6.2lf m\n", velocity_m_s, g, height);

        velocity_f_2 = (velocity_m_s * velocity_m_s + 2 * (-g) * height);

        printf("    = %6.2lf m/s\n\n", velocity_f_2);

        velocity_f = sqrt(velocity_m_s * velocity_m_s + 2 * (-g) * height);
        printf("v   = ��((%6.2lf m/s)^2 + 2 * (-%6.2lf m/s^2) * %6.2lf m)\n", velocity_m_s, g, height);
        printf("    =%6.2lf m/s\n\n", velocity_f);


    }

    if (answer == SHOW)

    {
        printf("=========================   �� ��   =============================\n\n");
        printf("v =%6.2lf m/s\n\n", velocity_f);

    }

    if (solution == SHOW)

    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) �� ���̿� �����ϴ� �� �ɸ� �ð��� ���ΰ�? \n\n");


        printf("���� ������ v = v0 + a * ��t\n");
        printf("��t = ��v / a, a : �߷°��ӵ�\n");
        printf("��v = v - v0, v : ���߼ӵ�, v0 : ó���ӵ�\n");
        printf("t1 = ���� �ö󰡴� �ð�, t2 = ���� �������� �ð�\n\n");;
        printf(" v - v0= a * t1\n");
        printf("-v - v0= a * t2\n\n");


        time_1 = (velocity_f - velocity_m_s) / -g;
        time_2 = (-velocity_f - velocity_m_s) / -g;
        delta_velocity1 = velocity_f - velocity_m_s;
        delta_velocity2 = -velocity_f - velocity_m_s;

        printf(" %6.2lf m/s - %6.2lf m/s = (-%6.2lf m/s^2) * t1\n", velocity_f, velocity_m_s, g);
        printf("-%6.2lf m/s - %6.2lf m/s = (-%6.2lf m/s^2) * t2\n\n", velocity_f, velocity_m_s, g);

        printf("t1 = (%6.2lf m/s) / (-%6.2lf m/s^2)\n", delta_velocity1, g);
        printf("   = %6.2lf s\n", time_1);

        printf("t2 = (%6.2lf m/s) / (-%6.2lf m/s^2)\n", delta_velocity2, g);
        printf("   = %6.2lf s\n\n", time_2);



    }

    if (answer == SHOW)

    {
        printf("=========================   �� ��   =============================\n\n");

        printf("t1 =%6.2lf s\n", time_1);
        printf("t2 =%6.2lf s\n\n", time_2);
        printf("\n");
    }

}
void Excersize_3_9(int solution, int answer)
{
    srand((unsigned)time(NULL));
    double speed = 41.0 + rand() % (10 + 1) - 7;
    double angle = 1 + rand() % 90;
    double angle2 = 90;
    double randamu = rand() % (4 + 1) - 1;
    double Changed_Speed = 25.0 + rand() % (5 + 1) - 2;
    double First_hour = 3 + randamu;
    double Later_hour = 4.5 + randamu;
    double r = (speed * First_hour);
    double theta = 360.0 - angle;
    double x1 = r * cos(DEG2RAD(angle));
    double y1 = r * sin(DEG2RAD(angle));
    double x2 = 0;
    double x2_2 = 0;
    double y2 = Changed_Speed * (Later_hour - First_hour);
    double y2_2 = y2 * sin(DEG2RAD(angle2));
    double x = 0.0;
    double y = 0.0;
    double conv_angle = 0;
    double x_conv_angle = 0;
    double y_conv_angle = 0;
    double north_angle_x = 0;
    double north_angle_y = 90;
    double r1 = 0;
    double r2 = 0;
    double r3 = 0;



    conv_angle = angle;
    x_conv_angle = angle;
    y_conv_angle = angle;

    x1 = r * cos(DEG2RAD(x_conv_angle));
    y1 = r * sin(DEG2RAD(y_conv_angle));
    x = x1 + x2;
    y = y1 + y2;


    double d = sqrt(pow(x, 2) + pow(y, 2));
    double qwer = sqrt(pow((x1 / d), 2));
    double radian = DEG2RAD(qwer);
    double result = RAD2DEG(acos(qwer));
    double result_acos = RAD2DEG(acos(qwer));


    printf("\n");
    printf("3-9 \n");
    printf("���ֵ��� ��ǳ�� �������� �ִ�.\n");

    printf("�ӵ��� %6.2lf km/h �� ��ǳ�� ���� ���� %6.2lf�� �������� ����� ��������.\n", speed, angle);

    printf("%6.2lf h �� �� ��ǳ�� ������ �������� %6.2lf km/h �� ���� �ӵ��� �ٲ����. \n", First_hour, Changed_Speed);
    printf("���ֵ��� ���� ��ǳ�� %6.2lf h �Ŀ��� ���ֵ����� �󸶳� �ָ� ������?\n\n", Later_hour);

    printf("(a) ��ǳ�� �̵��� �Ÿ�(r)�� ���ΰ�?\n\n");
    printf("(b) ��ǳ�� �̵��� ��(��)�� ���ΰ�?\n\n");
    printf("(c) ��ǳ�� ����ǥ�� ���Ͽ���\n\n");


    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) ��ǳ�� �̵��� �Ÿ��� ���ΰ�?\n\n");

        printf("���� ������ ��x = v * t\n");
        printf("��x: �Ÿ�, v: �ӵ�, t: �ð�, cos: ���� �迡 �����ϴ� x ��ǥ�� ����\n");
        printf(" sin: ���� �迡 �����ϴ� y ��ǥ�� ����,r:�������� �̵��� �Ÿ�\n");
        printf("x1: ������ x �� �������� �������� x��ǥ, y1: ������ y �� �������� �������� y��ǥ\n\n");

        printf("������ ������ x��(����), �ݽð� �������� %6.2lf���Դϴ�.\n\n", angle);

        printf("��ǳ�� ���ֵ��� ����� ����: %6.2lf km/h * %6.2lf h = %6.2lf km\n\n", speed, First_hour, speed * First_hour);

        printf("x1 = r * cos��\n");
        printf("   = %6.2lf km * cos (%6.2lf��) \n", speed * First_hour, x_conv_angle);
        printf("   = %6.2lfkm\n\n", x1);

        printf("y1 = r * sin��\n");
        printf("   = %6.2lf km * sin (%6.2lf��) \n", speed * First_hour, y_conv_angle);
        printf("   =  %6.2lfkm\n\n", y1);

        printf("��ǳ�� ������ �ٲ� �� ����: %6.2lf km/h * %6.2lf h = %6.2lf km\n\n", Changed_Speed, Later_hour - First_hour, Changed_Speed * (Later_hour - First_hour));

        printf("x2 = %6.2lf km * cos (%6.2lf��)\n", x2, angle2);
        printf("   =  %6.2lfkm\n\n", x2_2);

        printf("y2 = %6.2lf km * sin (%6.2lf��)\n", y2, angle2);
        printf("   =  %6.2lfkm\n\n", y2_2);

        printf("x = x1 + x2\n");
        printf("  = %6.2lf km + %6.2lf km\n", x1, x2);
        printf("  = %6.2lf km\n\n", x);

        printf("y = y1 + y2\n");
        printf("  = %6.2lf km + %6.2lf km\n", y1, y2);
        printf("  = %6.2lf km\n\n", y);

        printf("r = ��(x^2 + y^2)\n");
        printf("  = ��((%6.2lf km)^2 + (%6.2lf km)^2) \n", x, y);
        printf("  = %6.2lfkm\n\n", d);


        if (answer == SHOW) {
            printf("=========================   �� ��   =============================\n\n");

            printf("r = %6.2lfkm", d);

        }
        if (solution == SHOW)
        {

            printf("\n\n");
            printf("=========================   Ǯ ��   =============================\n\n");

            printf("(b) ��ǳ�� �̵��� ��(��)�� ���ΰ�?\n\n");

            printf("���� : �� = a\n\n");
            printf("cos a = (x / r)\n");
            printf("a = cos^-1 * (x / r)\n");
            printf("  = cos^-1 * (%6.2lf km / %6.2lf km)\n", x, d);
            printf("  = cos^-1 * (%6.2lf)\n", x / d);
            printf("  = %6.2lf��\n\n", result_acos);
            printf("�� = a\n");
            printf("  = %6.2lf��\n\n", result_acos);




        }
        if (answer == SHOW) {
            printf("=========================   �� ��   =============================\n\n");

            printf("�� = %6.2lf��\n", result_acos);

        }
        if (solution == SHOW)
        {
            r3 = sqrt(pow(x, 2) + pow(y, 2));
            printf("\n");
            printf("=========================   Ǯ ��   =============================\n\n");

            printf("(c) ��ǳ�� ����ǥ�� ���Ͽ���\n\n");

            printf("����ǥ = (r,��)\n\n");


            printf("�� = %6.2lf��\n\n", result_acos);


        }
        if (answer == SHOW)
        {
            printf("=========================   �� ��   =============================\n\n");

            printf("(%6.2lf km, %6.2lf��)\n\n", d, result_acos);

        }

    }
}

void Excersize_3_13(int solution, int answer)
{
    srand(time(NULL));

    double h = 0;
    double g = 9.80;
    double t;
    double v0x = 5 + rand() % (2 + 1) - 1;
    double ��x = 20 + rand() % (10 + 1) - 5;
    t = ��x / v0x;
    double ��y;

    printf("\n\n");
    printf("3-13 \n");
    printf("�׸� P3-13�� ���� ���̰� h�� ������ ���� ����������� %6.2lfm/s�� �ӷ����� �������� ����Ÿ� %6.2lfm�� ���� ��������.\n\n", v0x, ��x);
    printf("(a) �� ���� ���鿡 ������ ������ �ɸ� �ð��� �� ���ΰ�? \n\n");
    printf("(b) ó�� ���� ���� ������ ���� h�� �� m�ΰ�? \n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) �� ���� ���鿡 ������ ������ �ɸ� �ð��� �� ���ΰ�? \n");
        printf("���� ������ ��x = v0x * t\n");
        printf("��x: x�� ��ȭ�� v0x: �ʱ�ӵ� t: �ð�\n\n");
        printf("��x = v0x * t\n");
        printf("t = ��x / v0x\n");
        printf("  =%6.2lfm /%6.2lfm/s\n", ��x, v0x);
        printf("  =%6.2lfs\n\n", t);
    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("�ɸ� �ð� t =%6.2lfs\n", t);
    }
    if (solution == SHOW)
    {
        ��y = -g * pow(t, 2) / 2;

        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) ó�� ���� ���� ������ ���� h�� �� m�ΰ�?\n");
        printf("���� ������ ��y = voy * t + 1/2 * a * t^2\n");
        printf("��y: y�� ��ȭ�� v0y: �ʱ�ӵ� t: �ð� a: ���ӵ�\n\n");
        printf("�����ϱ��� ���� �����̱� ������ v0y = 0 �Դϴ�.\n");
        printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� -9.80m/s^2 �Դϴ�. \n\n");
        printf("��y = voy * t + 1/2 * a * t^2\n");
        printf("    = 0 * t + 1/2 * (-g) * t^2\n");
        printf("    = 1/2 * %6.2lfm/s^2 * (%6.2lfm/s)^2\n", -g, pow(t, 2));
        printf("    = %6.2lfm\n\n", ��y);
        printf("��y = 0 - h\n");
        printf("h = %6.2lfm\n\n", -��y);
    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("h =%6.2lfm \n", -��y);
    }
}

void Excersize_3_18(int solution, int answer)
{
    srand(time(NULL));

    double v0 = 60  + rand() % (30 + 1) - 15;
    double y = 0;
    double y0 = 0;
    double vy = 0;
    double angle = 30 + rand() % (15 + 1) - 10;
    double v0x = 0;
    double v0y = 0;
    double t = 0;
    double g = 9.8;
    double ��x = 0;
    v0x = v0 * cos(angle * M_PI / 180);
    v0y = v0 * sin(angle * M_PI / 180);
    t = v0y / g;
    y = (v0y * t) - (0.5 * g * t * t);
    ��x = v0x * t;
    printf("\n\n");
    printf("3-18\n");
    printf("�ʼӵ� %6.2lfm/s�� ����鿡 ���� %6.2lf���� ������ ���� ������.\n", v0, angle);
    printf("�� ��ü�� �ö� �� �ִ� (a) �ְ� ���̿� (b) ���򵵴ްŸ��� ���϶�.\n\n");
    printf("(a) �� ��ü�� �ö� �� �ִ� �ְ� ������ �ð��� ���϶�.\n");
    printf("(b) �� ��ü�� �ö� �� �ִ� �ְ� ���̸� ���϶�.\n");
    printf("(c) �� ��ü�� ������ ���򵵴ްŸ��� ���϶�.\n\n");

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) �� ��ü�� �ö� �� �ִ� �ְ� ������ �ð��� ���϶�.\n\n");
        printf("���ð��� t = (vy - v0y) / a\n");
        printf("vy : ���߳��̼ӷ�, v0y : ó�����̼ӷ�, t : �ð�, a : ���ӵ�\n\n");
        printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� %6.2lfm/s^2 �Դϴ�.\n\n", -g);
        printf("t = (vy - v0y) / -g\n");
        printf("  = (%6.2lfm/s - %6.2lfm/s) / %6.2lfm/s^2\n", vy, v0y, -g);
        printf("  = %6.2lfs\n\n", t);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("t = %6.2lfs\n\n", t);
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) �� ��ü�� �ö� �� �ִ� �ְ� ���̸� ���϶�.\n\n");
        printf("���ð��� y - y0 = v0y * t + 1/2 * a * t^2\n");
        printf("y : ����, y0 : ó������, v0y : ó������ �ӵ�, v0 : ó���ӵ�, t : �ð�, a : ���ӵ�\n\n");
        printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� -%6.2lfm/s^2 �Դϴ�.\n\n", g);
        printf("y -    y0   = v0y * t + 1/2 * a * t^2\n");
        printf("y - %6.2lfm = %6.2lfm/s * %6.2lfs - 1/2 * %6.2lf m/s^2 * (%6.2lfs)^2\n", y0, v0y, t, g, t);
        printf("            = %6.2lfm\n\n", y);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("y = %6.2lfm\n\n", y);
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(c) �� ��ü�� ������ ���򵵴ްŸ��� ���϶�.\n\n");
        printf("���� ���� ��x = v0x * t\n");
        printf("��x : �������Ÿ�, v0x : ó���Ÿ��ӷ�, t : �ð�\n\n");
        printf("��x = v0x * t\n");
        printf("    = %6.2lf m/s * %6.2lfs\n", v0x, t);
        printf("    = %6.2lfm\n\n", ��x);

    }
    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("��x = %6.2lfm\n\n\n", ��x);
    }
}

void Excersize_4_7(int solution, int answer)
{
    srand(time(NULL));
    double a1 = 8 + rand() % (10 + 1) - 5;
    double a2 = 24 + rand() % (30 + 1) - 15;
    double �� = 3 + rand() % (5 + 1) - 2;
    double n = 5 + rand() % (5 + 1) - 2;
    printf("\n");
    printf("4-7 \n");
    printf("%6.2lfN�� ���� ��ü M1�� �ۿ��Ű�� %6.2lf m/s^2�� ���ӵ��� �����\n", n, a1);
    printf("��ü M2�� �ۿ��Ű�� %6.2lf m/s^2�� ���ӵ��� �����.\n", a2);
    printf("�� �� ��ü�� �ϳ��� ������ �� �� ���� ���� ���ӵ��� ���ΰ�?\n\n");
    printf("(a) ��ü 1,2 �� ���Ͽ���.\n\n");
    printf("(b) �� ��ü�� �ϳ��� ������ �� ���� ���� ���ӵ��� ���Ͽ���.\n\n");

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) ��ü 1,2 �� ���Ͽ���.\n\n");
        printf("���� ������ ��F = m * a\n");
        printf("��F:��¥ ��, m:����, a:���ӵ�\n\n");
        printf(" ��ü1 :%6.2lf N = M1 * %6.2lf m/s^2\n", n, a1);
        printf("          M1     = %6.2lf kg\n", n / a1);
        printf(" ��ü2 :%6.2lf N = M2 * %6.2lf m/s^2\n", n, a2);
        printf("          M2     = %6.2lf kg\n\n", n / a2);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("          M1     = %6.2lf kg\n", n / a1);
        printf("          M2     = %6.2lf kg\n\n", n / a2);
        printf("\n\n");
    }
    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) �� ��ü�� �ϳ��� ������ �� ���� ���� ���ӵ��� ���Ͽ���.\n\n");
        printf("���� ������ ��F = m * a\n");
        printf("��F:��¥ ��, m:����, a:���ӵ�\n\n");
        printf("   ��F   = ( M1 + M2 ) * a\n");
        printf("%6.2lfN = (%6.2lf/%6.2lf + %6.2lf/%6.2lf )kg * a \n", n, n, a1, n, a2);
        printf("   a    = (%6.2lf/%6.2lf + %6.2lf/%6.2lf )m/s^2\n", n * 1 / n, a1, n * 1 / n, a2);
        printf("        =   %6.2lf m/s^2\n", (n * 1 / n, a1) + (n * 1 / n, a2));
        printf("\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf(" a = %6.2lf m/s^2\n\n", (n * 1 / n, a1) + (n * 1 / n, a2));
        printf("\n\n\n");
    }

}

void Excersize_4_14(int solution, int answer)
{
    srand(time(NULL));

    double N = 1000 + rand() % (100 + 1) - 50;
    double �� = 0.5 + (rand() % (10 + 1) - 1) * 0.08;
    double Ff = 0;
    double g = 9.80;
    Ff = N * ��;

    printf("\n\n");
    printf("4-14 \n");
    printf("������ ���� ���� ���� ���԰� %6.2lfN�� ���ڿ� �׸� P4-14�� ����\n ����������� 300N�� ���� ���ߴ�. ����� ���� ������ ��������\n����� %6.2lf�϶�, �� ���ڿ� �ۿ��ϴ� �������� ���ΰ�?", N, ��);


    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("���ڿ� �ۿ��ϴ� �������� ���ΰ�?\n\n");
        printf("���� ������ Ff = �� * N\n");
        printf("Ff :������, �� :���� ���, N :�����׷�\n\n");
        printf("�����׷� N = m * g = %6.2lfN �Դϴ�.\n\n", N);
        printf("Ff = �� * N\n");
        printf("   = %6.2lfN *%6.2lf\n", ��, N);
        printf("   = %6.2lfN\n\n", Ff);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
        printf("Ff = %6.2lfN\n\n", Ff);
    }
}



int main(void)
{

    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("========================= MSC Contest  ==========================\n");
    printf("=================================================================\n");
    printf("=================================================================\n");

    //Excersize_1_21(1 , 1);
    //Excersize_2_1 (1 , 1);
    //Excersize_2_10(1 , 1);
    //Excersize_2_14(1 , 1);
    //Excersize_2_26(1, 1);
    //Excersize_3_9 (1 , 1);
    //Excersize_3_13(1, 1);
    //Excersize_3_18(1 , 1);
    //Excersize_4_7 (1 , 1);
    //Excersize_4_14(1 , 1);
}