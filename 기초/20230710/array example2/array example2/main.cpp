#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    int score[6];
    int i, a,
        sum = 0;

    for (i = 0; i < 6; i++) {
        printf("�л� %d ������ �Է��Է��ϼ��� : ", i + 1);
        scanf("%d", &score[i]);
    }

    for (i = 0; i < 6; i++)
        sum += score[i];

    printf("�հ� : %d\n", sum);
    printf("��� : %.2lf\n", (double)sum / 6);
    printf("\n score[6]�� ����Ǿ��ִ� ����:\n");

    for (a = 0; a < 6; a++)
        printf(" %d", score[a]);

    return 0;
}