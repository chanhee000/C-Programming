//�̷������Ƽ���� 202315022 ��â��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int random_dice() 
{
   return (rand() % 6) + 1;
}


int main(void)
{
    int user = 0;
    int computer = 0;

    srand(time(NULL));

    for (int i = 0; i < 3; i++)
    {
        user += random_dice();
        computer += random_dice();
    }

    printf("�����: %d\n", user);
    printf("��ǻ��: %d\n", computer);

    if (user > computer) 
    {
        printf("������� �¸��Դϴ�.\n");
    }
    else if (user < computer)
    {
        printf("��ǻ���� �¸��Դϴ�.\n");
    }
    else 
    {
        printf("���̽��ϴ�.\n");
    }

    return 0;
}