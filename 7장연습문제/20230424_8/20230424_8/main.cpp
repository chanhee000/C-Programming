#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &a);

    for (b = 1; b <= a; b++)
    {

        for (c = 1; c <= b; c++)
        {
            printf("%d ", c);

        }

        printf("\n");
    }

}