#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    if (num1 < num2)
        return -1;

    if (num1 > num2)
        return 1;

    return 0;
}

int main()
{
    FILE* fs;
    int numArr[10] = { 0 };
    int count = 0;

    fs = fopen("input.txt", "r");

    if (fs == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }


    while (fscanf(fs, "%d", &numArr[count]) != EOF && count < 10)
    {
        count++;
    }

    fclose(fs);


    qsort(numArr, count, sizeof(int), compare);

    for (int i = 0; i < count; i++)
    {
        printf("%d ", numArr[i]);
    }
    printf("\n");

    return 0;
}