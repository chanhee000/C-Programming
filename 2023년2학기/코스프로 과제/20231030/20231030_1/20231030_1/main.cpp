#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void bubble_sort(int arr[], int count) 
{
    int temp;

    for (int i = 0; i < count; i++) 
    {
        for (int j = 0; j < count - 1; j++)
        {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
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
    bubble_sort(numArr, count);

    for (int i = 0; i < count; i++) 
    {
       printf("%d ", numArr[i]);
    }
    printf("\n");

    return 0;
}