#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main()
{
    double voltage, resistance, inductance, capacitance, capacitanceF, frequency;

    printf("������ �Է��ϼ��� (V): ");
    scanf("%lf", &voltage);

    printf("������ �Է��ϼ��� (��): ");
    scanf("%lf", &resistance);

    printf("�δ��͸� �Է��ϼ��� (H): ");
    scanf("%lf", &inductance);

    printf("Ŀ�н��͸� �Է��ϼ��� (uF): ");
    scanf("%lf", &capacitance);



    printf("���ļ��� �Է��ϼ��� (Hz): ");
    scanf("%lf", &frequency);

    capacitanceF = capacitance * 1e-6;
    //printf("uF�� �Է¹޾ұ� ������ F�� ��ȯ�Ͽ� ����� ����");

    double voltageL = 2 * M_PI * frequency * inductance;
    double voltageC = 1 / (2 * M_PI * frequency * capacitanceF);
    double Z = sqrt((resistance * resistance) + (voltageL - voltageC) * (voltageL - voltageC));
    double Imax = (voltage / Z);
    double phaseAngle_rad = atan((voltageL - voltageC) / resistance);
    double phaseAngle_deg = phaseAngle_rad * (180.0 / M_PI);
    double VRmax = Imax * resistance;
    double VLmax = Imax * voltageL;
    double VCmax = Imax * voltageC;

    
    printf("\n���� �����Ͻ��� Ŀ�н��Ͻ� ����ϱ�\n\n");
    printf("XL = 2 * %.2lHf * %.2lf\n", M_PI, frequency, inductance);
    printf("XL = %.0lf��\n\n", voltageL);

    printf("Xc = 1 / (2 * %.2lf * %.2lfH * %5.2lfuF)\n", M_PI, frequency, capacitance);
    printf("Xc = %.0lf��\n\n\n", voltageC);

    printf("ȸ�ο� �帣�� �ִ� ���� ���ϱ�\n\n");
    printf("Z = ��R^2 + (XL - Xc)^2\n");
    printf("    ��(%.2f^2 + (%.2lf�� - %.2f��)^2)\n", resistance,voltageL, voltageC);
    printf("Z = %.0lf��\n\n", Z);

    printf("Imax = ��Vmax / Z\n");
    printf("Imax = %.2lf(10^%d)V / %.0lf��\n", voltage/100 , 2, Z);
    printf("Imax = %.3lfA\n\n\n", Imax);

    printf("������ ���� ������ ���� ����ϱ�\n\n");
    printf("�� = tan^-1((XL - Xc) / R)\n");
    printf("  = tan^-1((%.0lf�� - %.0lf��) / %.2lf��)\n", voltageL, voltageC, resistance);
    printf("�� = %.1lf��\n\n\n", phaseAngle_deg);

    printf("�� ��� ��� �� �ִ� ���� ���ϱ�\n\n");
    printf("VRmax = Imax * R\n");
    printf("      = (%.3lfA)(%.0lf��)\n", Imax, resistance);
    printf("VRmax = %.1lfV\n\n", VRmax);
    printf("VLmax = Imax * XL\n");
    printf("      = (%.3lfA)(%.0lf��)\n", Imax, voltageL);
    printf("VLmax = %.2lfV\n\n", VLmax);
    printf("VCmax = Imax * XC\n");
    printf("      = (%.3lfA)(%.0lf��)\n", Imax, voltageC);
    printf("VCmax = %.0lfV\n\n", VCmax);

    return 0;
}
/*
int main()
{
    double voltage = 15e2;       // ���� (V)
    double resistance = 2.5e2;     // ���� (ohm)
    double inductance = 0.6;    // �δ��� (H)
    double capacitance = 3.5; // Ŀ�н��� (uF)
    double capacitanceF = 3.5e-6; // Ŀ�н��� (F)
    double frequency = 60.0;   // ���ļ� (Hz)
    double voltageL = 2 * M_PI * frequency * inductance;
    double voltageC = 1 / ( 2 * M_PI * frequency * capacitanceF);
    double Z = sqrt((resistance * resistance) + (voltageL - voltageC) * (voltageL - voltageC));
    double Imax = (voltage / Z)/10;
    double phase_angle_rad = atan((voltageL - voltageC) / resistance);
    double phase_angle_deg = phase_angle_rad * (180.0 / M_PI);
    double VRmax = Imax * resistance;
    double VLmax = Imax * voltageL;
    double VCmax = Imax * voltageC;
    

    printf("���� �����Ͻ��� �뷮 �����Ͻ� ����ϱ�\n\n");
    printf("XL = 2 * %5.2lf * %5.2lf\n", M_PI, frequency, inductance);
    printf("XL = %5.2lf\n\n", voltageL);

    printf("Xc = 1 / 2(%5.2lf * %5.2lf * %5.2lf(10^%d))\n", M_PI, frequency, capacitance,-6);
    printf("Xc =%5.0lf��\n\n", voltageC);

   

    printf("ȸ�ο� �帣�� �ִ� ���� ���ϱ�\n\n");
    printf("Z = ��R^2 + (XL - Xc)^2\n");
    printf("    ��(%5.2lf(10^%d)^2 + (%5.2lf�� - %5.2lf��)^2\n",resistance/100,2,voltageL,voltageC);
    printf("Z = %5.0lf��\n\n",Z);


    printf("Imax = ��Vmax / Z\n");
    printf("Imax = %5.2lf(10^%d)V / %5.0lf��\n", voltage/100, 2, Z);
    printf("Imax = %5.3lf\n\n", Imax);

    printf("������ ���� ������ ���� ����ϱ�\n\n");
    printf("�� = tan^-1 * (XL - Xc) / R\n");
    printf("  = tan^-1 * ((%5.0lf�� - %5.0lf��) / %5.2lf��)\n", voltageL, voltageC, resistance);
    printf("�� = %5.1lf degrees\n\n", phase_angle_deg);


    printf("�� ��� ��ܰ� �ִ� �� �ִ� ���� ���ϱ�\n");
    printf("VRmax = Imax * R\n");
    printf("      =(%5.3lfA)(%5.0lf��)\n", Imax, resistance);
    printf("VLmax = %5.2lfV\n\n", VRmax);
    printf("VLmax = Imax * XL\n");
    printf("      =(%5.3lfA)(%5.0lf��)\n", Imax, voltageL);
    printf("VLmax = %5.2lfV\n\n", VLmax);
    printf("VCmax = Imax * XC\n");
    printf("      =(%5.3lfA)(%5.0lf��)\n", Imax, voltageC);
    printf("VCmax = %5.2lfV\n\n", VCmax);
    return 0;
}
*/