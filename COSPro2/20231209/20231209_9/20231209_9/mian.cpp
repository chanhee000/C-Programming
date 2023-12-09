#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//score1 = 중간고사 성적, score2 = 기말고사 성적, score_len은 성적을 받은 학생 인원의 점수 표기
int func_a(int scores1[], int scores2[], int scores_len)            //기말고사 - 중간고사의 최대값 구하는 함수
{
    int answer = 0;
    for (int i = 0; i < scores_len; i++)
        if (answer < scores2[i] - scores1[i])                       //기말고사 점수 - 중간고사 점수                       
            answer = scores2[i] - scores1[i];

    return answer;

}

//score1 = 기말고사 성적, score2 = 중간고사 성적, score_len은 성적을 받은 학생 인원의 점수 표기
int func_b(int scores1[], int scores2[], int scores_len)            //기말고사 - 중간고사의 최소값을 구하는 함수
{
    int answer = 0;
    for (int i = 0; i < scores_len; i++)
        if (answer < scores2[i] - scores1[i])                       //중간고사 점수 - 기말고사 점수
            answer = scores2[i] - scores1[i];

    return answer;

}

int* solution(int mid_scores[], int mid_scores_len, int final_scores[], int final_scores_len)
{
    int* answer = (int*)malloc(sizeof(int) * 2);                    //실행하는 동안 사용할 변수 저장
    answer[0] = func_a(mid_scores, final_scores, mid_scores_len);   //최대값 구하기
    answer[1] = func_b(final_scores, mid_scores, mid_scores_len);   //최소값 구하기

    return answer;

}

int main() 
{
    int mid_scores[] = { 20, 50, 40 };                              //중간고사 성적 설정
    int final_scores[] = { 10, 50, 70 };                            //기말고사 성적 설정
    int* ret = solution(mid_scores, 3, final_scores, 3);            //3이 있는 이유는 배열의 길이를 정하는 것

        printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < 2; i++)                                    //최대값과 최소값을 나타내야하기 때문에 i의 함수가 2개를 나타내야함
    {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }

    printf("] 입니다.\n");

}