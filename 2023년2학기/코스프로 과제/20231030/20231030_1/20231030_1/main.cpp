#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

void bubble_sort(int arr[], int count) {
    int temp;

    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    FILE* file = fopen("input.txt", "r"); // ���� ����
    if (file == NULL) {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    int numArr[10]; // �迭�� ������ ���� ����

    for (int i = 0; i < 10; i++) {
        if (fscanf(file, "%d", &numArr[i]) != 1)
        {
            printf("���Ͽ��� ���ڸ� �д� ���� ������ �߻��߽��ϴ�.\n");
            return 1;
        }
    }

    fclose(file);
    bubble_sort(numArr, sizeof(numArr) / sizeof(int));

    for (int i = 0; i < 10; i++) {
        printf("%d ", numArr[i]);
    }

    printf("\n");

    // ���ĵ� ����� output.txt ���Ͽ� ����
    FILE* outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("������ ������ �� �����ϴ�.\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        fprintf(outputFile, "%d ", numArr[i]);
    }

    fclose(outputFile);

    printf("���ĵ� ����� output.txt ���Ͽ� �����߽��ϴ�.\n");

    return 0;
}