//�̷������Ƽ���� 202315022 ��â��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cash = 0;

void bank()
{
    printf("�ܰ�� %d ���Դϴ�.\n", cash);
}

void user()
{
    int give;
    printf("�Ա��� �ݾ��� �Է��ϼ���: ");
    scanf("%d", &give);

    if (give > 0)
    {
        cash += give;
        printf("%d ���� �ԱݵǾ����ϴ�.\n", give);
        printf("�ܰ�� %d �� �Դϴ�.", cash);
    }
    else
    {
        printf("�ٸ��� �������ּ���.\n");
    }
}

void withdrawal()
{
    int give;
    printf("����� �ݾ��� �Է��ϼ���: ");
    scanf("%d", &give);

    if (give > 0 && give <= cash)
    {
        cash -= give;
        printf("��� �ݾ�: %d.\n", give);
        printf("���� �ݾ�: %d", cash);
    }
    else
    {
        printf("�ݾ��� ���� �ʽ��ϴ�.\n");
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("Welcome to Express ATM\n");
        printf("<1> �ܾ�\n");
        printf("<2> �Ա�\n");
        printf("<3> ���\n");
        printf("<4> ����\n");
        printf("�޴��� �����Ͻÿ�: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            bank();
            break;
        case 2:
            user();
            break;
        case 3:
            withdrawal();
            break;
        case 4:
            printf("�����մϴ�.\n");
            return 0;
        default:
            printf("�ٽ� �������ּ���.\n");
        }
        printf("\n");
    }
}