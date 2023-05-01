#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    int a;
    int b;
    while (1) 
    {
        printf("막대의 높이(종료 -1): ");
        scanf("%d", &a);

        if (a == -1)
            break;

        for (b = 0; b < a; b++) 
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
