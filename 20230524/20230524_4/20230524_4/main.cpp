//미래모빌리티공학 202315022 한창희

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

    printf("사용자: %d\n", user);
    printf("컴퓨터: %d\n", computer);

    if (user > computer) 
    {
        printf("사용자의 승리입니다.\n");
    }
    else if (user < computer)
    {
        printf("컴퓨터의 승리입니다.\n");
    }
    else 
    {
        printf("비기셨습니다.\n");
    }

    return 0;
}