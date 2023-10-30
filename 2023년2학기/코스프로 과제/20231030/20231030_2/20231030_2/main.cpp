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
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    while (fscanf(fs, "%d", &numArr[count]) != EOF && count < 10)
    {
        count++;
    }

    fclose(fs);

    qsort(numArr, count, sizeof(int), compare);

    // ���ĵ� ���� ���
    for (int i = 0; i < count; i++)
    {
        printf("%d ", numArr[i]);
    }
    printf("\n");

    fs = fopen("sorted_output.txt", "w");

    if (fs == NULL)
    {
        printf("������ �����ϰų� �� �� �����ϴ�.\n");
        return 1;
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(fs, "%d ", numArr[i]);
    }

    fclose(fs);
    printf("\n");
    printf("sorted_output.txt�� ����߽��ϴ�.");
    printf("\n");

    return 0;
}