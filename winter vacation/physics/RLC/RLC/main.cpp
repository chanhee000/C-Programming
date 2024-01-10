#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main()
{
    double voltage, resistance, inductance, capacitance, capacitanceF, frequency;

    printf("전압을 입력하세요 (V): ");
    scanf("%lf", &voltage);

    printf("저항을 입력하세요 (Ω): ");
    scanf("%lf", &resistance);

    printf("인덕터를 입력하세요 (H): ");
    scanf("%lf", &inductance);

    printf("커패시터를 입력하세요 (uF): ");
    scanf("%lf", &capacitance);



    printf("주파수를 입력하세요 (Hz): ");
    scanf("%lf", &frequency);

    capacitanceF = capacitance * 1e-6;
    //printf("uF를 입력받았기 때문에 F로 변환하여 계산을 진행");

    double voltageL = 2 * M_PI * frequency * inductance;
    double voltageC = 1 / (2 * M_PI * frequency * capacitanceF);
    double Z = sqrt((resistance * resistance) + (voltageL - voltageC) * (voltageL - voltageC));
    double Imax = (voltage / Z);
    double phaseAngle_rad = atan((voltageL - voltageC) / resistance);
    double phaseAngle_deg = phaseAngle_rad * (180.0 / M_PI);
    double VRmax = Imax * resistance;
    double VLmax = Imax * voltageL;
    double VCmax = Imax * voltageC;

    
    printf("\n유도 리액턴스와 커패시턴스 계산하기\n\n");
    printf("XL = 2 * %.2lHf * %.2lf\n", M_PI, frequency, inductance);
    printf("XL = %.0lfΩ\n\n", voltageL);

    printf("Xc = 1 / (2 * %.2lf * %.2lfH * %5.2lfuF)\n", M_PI, frequency, capacitance);
    printf("Xc = %.0lfΩ\n\n\n", voltageC);

    printf("회로에 흐르는 최대 전류 구하기\n\n");
    printf("Z = √R^2 + (XL - Xc)^2\n");
    printf("    √(%.2f^2 + (%.2lfΩ - %.2fΩ)^2)\n", resistance,voltageL, voltageC);
    printf("Z = %.0lfΩ\n\n", Z);

    printf("Imax = ΔVmax / Z\n");
    printf("Imax = %.2lf(10^%d)V / %.0lfΩ\n", voltage/100 , 2, Z);
    printf("Imax = %.3lfA\n\n\n", Imax);

    printf("전류와 전압 사이의 위상각 계산하기\n\n");
    printf("ф = tan^-1((XL - Xc) / R)\n");
    printf("  = tan^-1((%.0lfΩ - %.0lfΩ) / %.2lfΩ)\n", voltageL, voltageC, resistance);
    printf("ф = %.1lf°\n\n\n", phaseAngle_deg);

    printf("각 요소 양단 간 최대 전압 구하기\n\n");
    printf("VRmax = Imax * R\n");
    printf("      = (%.3lfA)(%.0lfΩ)\n", Imax, resistance);
    printf("VRmax = %.1lfV\n\n", VRmax);
    printf("VLmax = Imax * XL\n");
    printf("      = (%.3lfA)(%.0lfΩ)\n", Imax, voltageL);
    printf("VLmax = %.2lfV\n\n", VLmax);
    printf("VCmax = Imax * XC\n");
    printf("      = (%.3lfA)(%.0lfΩ)\n", Imax, voltageC);
    printf("VCmax = %.0lfV\n\n", VCmax);

    return 0;
}
/*
int main()
{
    double voltage = 15e2;       // 전압 (V)
    double resistance = 2.5e2;     // 저항 (ohm)
    double inductance = 0.6;    // 인덕터 (H)
    double capacitance = 3.5; // 커패시터 (uF)
    double capacitanceF = 3.5e-6; // 커패시터 (F)
    double frequency = 60.0;   // 주파수 (Hz)
    double voltageL = 2 * M_PI * frequency * inductance;
    double voltageC = 1 / ( 2 * M_PI * frequency * capacitanceF);
    double Z = sqrt((resistance * resistance) + (voltageL - voltageC) * (voltageL - voltageC));
    double Imax = (voltage / Z)/10;
    double phase_angle_rad = atan((voltageL - voltageC) / resistance);
    double phase_angle_deg = phase_angle_rad * (180.0 / M_PI);
    double VRmax = Imax * resistance;
    double VLmax = Imax * voltageL;
    double VCmax = Imax * voltageC;
    

    printf("유도 리액턴스와 용량 리액턴스 계산하기\n\n");
    printf("XL = 2 * %5.2lf * %5.2lf\n", M_PI, frequency, inductance);
    printf("XL = %5.2lf\n\n", voltageL);

    printf("Xc = 1 / 2(%5.2lf * %5.2lf * %5.2lf(10^%d))\n", M_PI, frequency, capacitance,-6);
    printf("Xc =%5.0lfΩ\n\n", voltageC);

   

    printf("회로에 흐르는 최대 전류 구하기\n\n");
    printf("Z = √R^2 + (XL - Xc)^2\n");
    printf("    √(%5.2lf(10^%d)^2 + (%5.2lfΩ - %5.2lfΩ)^2\n",resistance/100,2,voltageL,voltageC);
    printf("Z = %5.0lfΩ\n\n",Z);


    printf("Imax = ΔVmax / Z\n");
    printf("Imax = %5.2lf(10^%d)V / %5.0lfΩ\n", voltage/100, 2, Z);
    printf("Imax = %5.3lf\n\n", Imax);

    printf("전류와 전압 사이의 위상각 계산하기\n\n");
    printf("ф = tan^-1 * (XL - Xc) / R\n");
    printf("  = tan^-1 * ((%5.0lfΩ - %5.0lfΩ) / %5.2lfΩ)\n", voltageL, voltageC, resistance);
    printf("ф = %5.1lf degrees\n\n", phase_angle_deg);


    printf("각 요소 양단간 최대 간 최대 전압 구하기\n");
    printf("VRmax = Imax * R\n");
    printf("      =(%5.3lfA)(%5.0lfΩ)\n", Imax, resistance);
    printf("VLmax = %5.2lfV\n\n", VRmax);
    printf("VLmax = Imax * XL\n");
    printf("      =(%5.3lfA)(%5.0lfΩ)\n", Imax, voltageL);
    printf("VLmax = %5.2lfV\n\n", VLmax);
    printf("VCmax = Imax * XC\n");
    printf("      =(%5.3lfA)(%5.0lfΩ)\n", Imax, voltageC);
    printf("VCmax = %5.2lfV\n\n", VCmax);
    return 0;
}
*/