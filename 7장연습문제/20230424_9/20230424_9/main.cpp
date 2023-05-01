#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

    int a;
    int b;
    int i;
    int c; 
    int d;
    printf("두 정수: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; ++i) {


        if (a % i == 0 && b % i == 0)
            c = i;

    }

    d = (a * b) / c;

    printf("%d 와 %d의 최소공배수: %d\n", a, b, d);

    return 0;
}
