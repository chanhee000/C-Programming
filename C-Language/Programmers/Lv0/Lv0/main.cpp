//문자열 str이 주어질 때, str을 출력하는 코드를 작성해 보세요.


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


//정수 a와 b가 주어집니다. 각 수를 입력받아 입출력 예와 같은 형식으로 출력하는 코드를 작성해 보세요.


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


//문자열 str과 정수 n이 주어집니다. str이 n번 반복된 문자열을 만들어 출력하는 코드를 작성해 보세요.


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


//영어 알파벳으로 이루어진 문자열 str이 주어집니다. 각 알파벳을 대문자는 소문자로 소문자는 대문자로 변환해서 출력하는 코드를 작성해 보세요.

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

//다음과 같이 출력하도록 코드를 작성해 주세요.

/*
#include <stdio.h>

int main() 
{
    printf("!@#$%%^&*(\\'\"<>?:;");
    return 0;
}
*/