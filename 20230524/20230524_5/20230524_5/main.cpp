//미래모빌리티공학 202315022 한창희

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cash = 0;

void bank()
{
    printf("잔고는 %d 원입니다.\n", cash);
}

void user()
{
    int give;
    printf("입금할 금액을 입력하세요: ");
    scanf("%d", &give);

    if (give > 0)
    {
        cash += give;
        printf("%d 원이 입금되었습니다.\n", give);
        printf("잔고는 %d 원 입니다.", cash);
    }
    else
    {
        printf("다른걸 선택해주세요.\n");
    }
}

void withdrawal()
{
    int give;
    printf("출금할 금액을 입력하세요: ");
    scanf("%d", &give);

    if (give > 0 && give <= cash)
    {
        cash -= give;
        printf("출금 금액: %d.\n", give);
        printf("남은 금액: %d", cash);
    }
    else
    {
        printf("금액이 옳지 않습니다.\n");
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("Welcome to Express ATM\n");
        printf("<1> 잔액\n");
        printf("<2> 입금\n");
        printf("<3> 출금\n");
        printf("<4> 종료\n");
        printf("메뉴를 선택하시오: ");
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
            printf("감사합니다.\n");
            return 0;
        default:
            printf("다시 선택해주세요.\n");
        }
        printf("\n");
    }
}