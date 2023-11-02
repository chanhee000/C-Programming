#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 

// 39.0 문자열 사용하기

int main()
{
    const char* s1 = "Hello";
    printf("%s", s1);

    return 0;
}

int main()
{
    char s1[30] = "A Garden Diary";
    char* ptr = strrchr(s1, 'a');

    printf("%s\n", ptr);

    return 0;
}

int main()
{
    char s1[30] = "A Garden Diary";
    char* ptr = strchr(s1, 'a');

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strchr(ptr + 1, 'a');
    }

    return 0;
}

// 40.1 입력 값을 배열 형태의 문자열에 저장하기

/*int main()
{
    char s1[10];

    printf("문자열을 입력하세요: ");
    scanf("%s", s1);
    printf("%s\n", s1);

    return 0;
}

int main()
{
    char s1[30];

    printf("문자열을 입력하세요: ");
    scanf("%[^\n]s", s1);
    printf("%s\n", s1);

    return 0;
}
int main()
{
    char s1[30] = "A Garden Diary";
    char* ptr = strrchr(s1, 'a');

    printf("%s\n", ptr);

    return 0;
}

int main()
{
    char s1[30] = "A Garden Diary";
    char* ptr = strstr(s1, "den");

    printf("%s\n", ptr);

    return 0;
}

int main()
{
    char s1[100] = "A Garden Diary A Garden Diary A Garden Diary";
    char* ptr = strstr(s1, "den");

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strstr(ptr + 1, "den");
    }
}

int main()
{
    char s1[30] = "Alice in Wonderland";
    char* ptr = strchr(s1, 'n');

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strchr(ptr + 1, 'n');
    }

    return 0;
}*/