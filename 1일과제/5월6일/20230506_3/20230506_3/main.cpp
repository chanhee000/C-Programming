//2. if���� ����Ͽ� �����ڸ� �Է¹޾Ƽ� �ҹ������� �Ǻ��ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char h;
    
    printf("���ĺ��� �Է��ϼ���.:");
    scanf("%c", &h);

    if (h >= 'a' && h <= 'z')
    {

        printf("%c�� �ҹ��� ���ĺ��Դϴ�.\n", h);

    }
    else if (h >= 'A' && h <= 'Z')
    {
        printf("%c�� �빮�� ���ĺ��Դϴ�.\n", h);
    }
    else 
    {

        printf("%c�� ���ĺ��� �ƴմϴ�.\n", h);

    }
}

