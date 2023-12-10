#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int score[], int score_len) //점수를 읽고 등수 나누기
{
    int* answer;
    answer = (int*)malloc(sizeof(int) * score_len);

    for (int i = 0; i < score_len; i++)
    {
      answer[i] = 1;//순위조정을 위해 1로 초기화해서 시작함

        for (int j = 0; j < score_len; j++)
        //점수 비교후 score[i]보다 큰 값이 나오면 answer[i]의 값 1증가
        {
            if (score[i] < score[j])
            {
                answer[i]++;
            }
        }
    }
    return answer;
    
}

int main() 
{
    int score1[] = { 90, 87, 87, 23, 35, 28, 12, 46 };
    int score_len1 = 8;
    int* ret1 = solution(score1, score_len1);

    printf("solution 함수의 반환 값은 [");

    for (int i = 0; i < score_len1; i++)
    //i부터 score_len1까지를 반복한다.
    {
        if (i != 0)
        {
            printf(", ");
            //i가 0이 될경우부터 시작하여 2번째 등수가 나올때부터 실행
        }
         printf("%d", ret1[i]);//등수 표시
         
    }
    printf("] 입니다.\n");
    
    int score2[] = { 10, 20, 20, 30 };
    int score_len2 = 4;
    int* ret2 = solution(score2, score_len2);
     
    printf("solution 함수의 반환 값은 [");

    for (int i = 0; i < score_len2; i++) 
    //i부터 score_len2까지를 반복한다.
    {
        if (i != 0)
        {
            printf(", ");
            //i가 0이 될경우부터 시작하여 2번째 등수가 나올때부터 실행
        }
         printf("%d", ret2[i]);//등수 표시
    }

    printf("] 입니다.\n");

}