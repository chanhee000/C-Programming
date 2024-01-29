#pragma warning(disable :4996)  //경고문 무시
#define MAX_LEN 100// 최대 길이를 100으로 설정
#include <stdio.h>

//fs   :  file stream의 줄임말로 fopen() 함수와 사용한다.그리고  파일을 열 때 마다 새로운 파일 포인트를 선언한 뒤 사용한다.
//fopen:  지정된 경로의 파일을 열때 사용한다.
//  "r":  파일을 읽는 모드로 설정함
//fgets:  문자열의 입력을 처리하거나 텍스트 파일에서 데이터를 읽어올 때 사용한다.

//while (feof(fs) == 0) :불로온 txt파일이 문단을 바꿀경우 출력이 안나오는데 그걸 나오도록 변경한다.


int main()                              //text_file.txt를 읽은 뒤 text_file.txt의 내용을 전부 출력시킴
{
    FILE* fs;                           // 파일 포인터 변수
    fs = fopen("text_file.txt", "r");   // "text_file.txt"파일을 읽는다.  

    while (feof(fs) == 0)                // 파일의 문장들이 끝이 아닐경우 계속 반복
    {
        char str[MAX_LEN];              // 최대 길이가 MAX_LEN인 문자열 저장
        fgets(str, MAX_LEN, fs);        // 파일에서 읽은 뒤 str에 저장
        printf("%s", str);              // 읽은 문자열을 출력
    }
    fclose(fs);                         // 파일 닫기
}