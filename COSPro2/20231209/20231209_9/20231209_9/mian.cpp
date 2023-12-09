#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//score1 = �߰���� ����, score2 = �⸻��� ����, score_len�� ������ ���� �л� �ο��� ���� ǥ��
int func_a(int scores1[], int scores2[], int scores_len)            //�⸻��� - �߰������ �ִ밪 ���ϴ� �Լ�
{
    int answer = 0;
    for (int i = 0; i < scores_len; i++)
        if (answer < scores2[i] - scores1[i])                       //�⸻��� ���� - �߰���� ����                       
            answer = scores2[i] - scores1[i];

    return answer;

}

//score1 = �⸻��� ����, score2 = �߰���� ����, score_len�� ������ ���� �л� �ο��� ���� ǥ��
int func_b(int scores1[], int scores2[], int scores_len)            //�⸻��� - �߰������ �ּҰ��� ���ϴ� �Լ�
{
    int answer = 0;
    for (int i = 0; i < scores_len; i++)
        if (answer < scores2[i] - scores1[i])                       //�߰���� ���� - �⸻��� ����
            answer = scores2[i] - scores1[i];

    return answer;

}

int* solution(int mid_scores[], int mid_scores_len, int final_scores[], int final_scores_len)
{
    int* answer = (int*)malloc(sizeof(int) * 2);                    //�����ϴ� ���� ����� ���� ����
    answer[0] = func_a(mid_scores, final_scores, mid_scores_len);   //�ִ밪 ���ϱ�
    answer[1] = func_b(final_scores, mid_scores, mid_scores_len);   //�ּҰ� ���ϱ�

    return answer;

}

int main() 
{
    int mid_scores[] = { 20, 50, 40 };                              //�߰���� ���� ����
    int final_scores[] = { 10, 50, 70 };                            //�⸻��� ���� ����
    int* ret = solution(mid_scores, 3, final_scores, 3);            //3�� �ִ� ������ �迭�� ���̸� ���ϴ� ��

        printf("solution �Լ��� ��ȯ ���� [");
    for (int i = 0; i < 2; i++)                                    //�ִ밪�� �ּҰ��� ��Ÿ�����ϱ� ������ i�� �Լ��� 2���� ��Ÿ������
    {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }

    printf("] �Դϴ�.\n");

}