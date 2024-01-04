#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define COLS 5
#define ROWS 20
#define ARRAY_SIZE 10

int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int num[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; ++i) 
    {
        num[i] = rand() % 100 + 1;
    }

    printf("배열 생성: ");
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    qsort(num, ARRAY_SIZE, sizeof(int), compare);

    printf("오름차순 정렬: ");
    for (int i = 0; i < ARRAY_SIZE; ++i) 
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}

/*
int main()
{
    int even_array[10];
    int odd_array[10];

    srand(time(NULL));

    int even_count = 0;
    int odd_count = 0;

    while (1) 
    {
        int random_number = rand() % 100 + 1;

        if (random_number % 2 == 0) 
        {
            if (even_count < 10) 
            {
                even_array[even_count] = random_number;
                even_count++;
            }
        }
        else
        {
            if (odd_count < 10)
            {
                odd_array[odd_count] = random_number;
                odd_count++;
            }
        }

        if (even_count == 10 || odd_count == 10) 
        {
            break;
        }
    }

    printf("짝수 배열: ");
    for (int i = 0; i < even_count; i++) 
    {
        printf("%d ", even_array[i]);
    }
    printf("\n짝수 배열 데이터 개수: %d\n", even_count);

    printf("홀수 배열: ");
    for (int i = 0; i < odd_count; i++) 
    {
        printf("%d ", odd_array[i]);
    }
    printf("\n홀수 배열 데이터 개수: %d\n", odd_count);

    return 0;
}
*/

/*
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
        a[i][4] = (3.0 * rand() / RAND_MAX);

    }

    for (i = 0; i < ROWS; i++)
    {
        float total = a[i][0] * 0.3 + a[i][1] * 0.4 + a[i][2] * 0.2 + a[i][3] * 0.3 - a[i][4];
        printf("학생%i의 최종성적 = %10.2f\n", i + 1, total);
    }

    return 0;
}
*/