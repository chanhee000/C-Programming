#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len) 
{
    int count = 0;                                      //�������� ������ ��Ÿ�� ���� ����

    for (int i = 0; i < height_len; i++)                // 4x4 �迭���� ���θ� for���� �Է�
    {
        for (int j = 0; j < 4; j++)                     // 4x4 �迭���� ���θ� for���� �Է�
        { 
            int current_height = height[i][j];
            if ((current_height > height[i - 1][j]) &&  //������   ��ġ�� �ִ� ���ڰ� ������ Ȯ��
                (current_height > height[i + 1][j]) &&  //�������� ��ġ�� �ִ� ���ڰ� ������ Ȯ��
                (current_height > height[i][j - 1]) &&  //������   ��ġ�� �ִ� ���ڰ� ������ Ȯ��
                (current_height > height[i][j + 1]))    //�Ʒ����� ��ġ�� �ִ� ���ڰ� ������ Ȯ��
            {
                count++;                               //���������� ������ ������ ������ �÷���
            }
        }
    }

    return count;
}

int main() {
    int height[4][4] = { {3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9} };  //������ �־����� ����
    int height_len = 4;                                                             //�迭�� ����
    int ret = solution(height, height_len);                                         //���豸���� ã������ solution�Լ� ����

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);                            //���豸���� ������ ǥ��

    return 0;
}


