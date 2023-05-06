//2. if문을 사용하여 영문자를 입력받아서 소문자인지 판별하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char h;
    
    printf("알파벳을 입력하세요.:");
    scanf("%c", &h);

    if (h >= 'a' && h <= 'z')
    {

        printf("%c는 소문자 알파벳입니다.\n", h);

    }
    else if (h >= 'A' && h <= 'Z')
    {
        printf("%c는 대문자 알파벳입니다.\n", h);
    }
    else 
    {

        printf("%c는 알파벳이 아닙니다.\n", h);

    }
}

