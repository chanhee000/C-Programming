//���ڿ� str�� �־��� ��, str�� ����ϴ� �ڵ带 �ۼ��� ������.


/*
#include <stdio.h>
#define LEN_INPUT 1000001

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    printf("%s",s1);

    return 0;
}
*/


//���� a�� b�� �־����ϴ�. �� ���� �Է¹޾� ����� ���� ���� �������� ����ϴ� �ڵ带 �ۼ��� ������.


/*
#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("a = %d\n", a);
    printf("b = %d",b);
    return 0;
}
*/


//���ڿ� str�� ���� n�� �־����ϴ�. str�� n�� �ݺ��� ���ڿ��� ����� ����ϴ� �ڵ带 �ۼ��� ������.


/*
#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a;
    scanf("%s %d", s1, &a);

  for(int b = 0; b < a; b++)
    {
        printf("%s", s1);
    }

    return 0;
}
*/


//���� ���ĺ����� �̷���� ���ڿ� str�� �־����ϴ�. �� ���ĺ��� �빮�ڴ� �ҹ��ڷ� �ҹ��ڴ� �빮�ڷ� ��ȯ�ؼ� ����ϴ� �ڵ带 �ۼ��� ������.

/*
#include <stdio.h>
#define LEN_INPUT 20

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", &s1);

    for (int i = 0; i < 20; i++) 
    {
        if ((s1[i] >= 'a') && (s1[i] <= 'z'))
        {
            s1[i] -= 32;
        }
        else if ((s1[i] >= 'A') && (s1[i] <= 'Z')) 
        {
            s1[i] += 32;
        }
    }
    printf("%s", s1);
    return 0;
}
*/

//������ ���� ����ϵ��� �ڵ带 �ۼ��� �ּ���.

/*
#include <stdio.h>

int main() 
{
    printf("!@#$%%^&*(\\'\"<>?:;");
    return 0;
}
*/