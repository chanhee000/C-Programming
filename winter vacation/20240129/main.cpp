#pragma warning(disable :4996)  //��� ����
#define MAX_LEN 100// �ִ� ���̸� 100���� ����
#include <stdio.h>

//fs   :  file stream�� ���Ӹ��� fopen() �Լ��� ����Ѵ�.�׸���  ������ �� �� ���� ���ο� ���� ����Ʈ�� ������ �� ����Ѵ�.
//fopen:  ������ ����� ������ ���� ����Ѵ�.
//  "r":  ������ �д� ���� ������
//fgets:  ���ڿ��� �Է��� ó���ϰų� �ؽ�Ʈ ���Ͽ��� �����͸� �о�� �� ����Ѵ�.

//while (feof(fs) == 0) :�ҷο� txt������ ������ �ٲܰ�� ����� �ȳ����µ� �װ� �������� �����Ѵ�.


int main()                              //text_file.txt�� ���� �� text_file.txt�� ������ ���� ��½�Ŵ
{
    FILE* fs;                           // ���� ������ ����
    fs = fopen("text_file.txt", "r");   // "text_file.txt"������ �д´�.  

    while (feof(fs) == 0)                // ������ ������� ���� �ƴҰ�� ��� �ݺ�
    {
        char str[MAX_LEN];              // �ִ� ���̰� MAX_LEN�� ���ڿ� ����
        fgets(str, MAX_LEN, fs);        // ���Ͽ��� ���� �� str�� ����
        printf("%s", str);              // ���� ���ڿ��� ���
    }
    fclose(fs);                         // ���� �ݱ�
}