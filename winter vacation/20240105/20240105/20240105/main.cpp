#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define COLS 5
#define ROWS 20


void rank(float a[ROWS][COLS], float averages[ROWS], int ranks[ROWS])
{
    for (int i = 0; i < ROWS; i++)
    {
        averages[i] = a[i][0] * 0.3 + a[i][1] * 0.4 + a[i][2] * 0.2 + a[i][3] * 0.1;
        ranks[i] = 1;
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            if (averages[i] < averages[j])
            {
                ranks[i]++;
            }
        }
    }
}

void Midterm(float a[ROWS][COLS], float Midterm[ROWS])
{
    for (int i = 0; i < ROWS; i++)
    {
        Midterm[i] = a[i][0] * 0.3;
    }
}

void Final(float a[ROWS][COLS], float Final[ROWS])
{
    for (int i = 0; i < ROWS; i++)
    {
        Final[i] = a[i][1] * 0.4;
    }
}

void Assignment(float a[ROWS][COLS], float Assignment[ROWS])
{
    for (int i = 0; i < ROWS; i++)
    {
        Assignment[i] = a[i][2] * 0.2;
    }
}

int main()
{
    float a[ROWS][COLS];
    int i, j;
    srand(time(NULL));

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS - 1; j++)
        {
            a[i][j] = ((float)rand() / RAND_MAX) * 100.0;
        }
        a[i][4] = (3.0 * rand() / RAND_MAX) * 100.0;
    }

    float midterms[ROWS], final[ROWS], assignments[ROWS];
    float averages[ROWS];
    int ranks[ROWS];

    Midterm(a, midterms);
    Final(a, final);
    Assignment(a, assignments);

    rank(a, averages, ranks);

    for (i = 0; i < ROWS; i++)
    {
        printf("학생 %i\n", i + 1);
        printf("| 중간 점수 | 기말 점수 | 과제 점수 | 출석 점수 | 최종 성적 | 등수 |\n");
        printf("%8.2f %12.2f %11.2f% 12.2f% 12.2f% 8d",
            midterms[i], final[i], assignments[i], a[i][3], averages[i], ranks[i]);
        printf("\n\n");
    }

    return 0;
}



/*void rank(float a[ROWS][COLS], float averages[ROWS], int ranks[ROWS])
{
    for (int i = 0; i < ROWS; i++)
    {
        averages[i] = a[i][0] * 0.3 + a[i][1] * 0.4 + a[i][2] * 0.2 + a[i][3] * 0.1;
        ranks[i] = 1;
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            if (averages[i] < averages[j])
            {
                ranks[i]++;
            }
        }
    }
}

int main()
{
    float a[ROWS][COLS];
    int i, j;
    srand(time(NULL));

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS - 1; j++)
        {
            a[i][j] = ((float)rand() / RAND_MAX) * 100.0;
        }
        a[i][4] = (3.0 * rand() / RAND_MAX) * 100.0;
    }

    float averages[ROWS];
    int ranks[ROWS];

    rank(a, averages, ranks);

    for (i = 0; i < ROWS; i++)
    {
        printf("학생 %i\n", i + 1);
        printf("| 중간 점수 | 기말 점수 | 과제 점수 | 출석 점수 | 최종 성적 | 등수 |\n");
        printf("%8.2f %12.2f %11.2f% 12.2f% 12.2f% 8d", a[i][0] * 0.3, a[i][1] * 0.4, a[i][2] * 0.2, a[i][3] * 0.1, averages[i], ranks[i]);
        printf("\n\n");
    }

    return 0;
}
*/



/*int main()
{
    int i, j, tmp;
    int score[8];

    printf("8개의 숫자를 입력하세요: ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &score[i]);
    }


    for (i = 0; i <= 8; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            if (score[i] < score[j])
            {
                tmp = score[i];
                score[i] = score[j];
                score[j] = tmp;
            }
        }
    }

    printf("정렬된 배열: ");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", score[i]);
    }

    return 0;
}*/
