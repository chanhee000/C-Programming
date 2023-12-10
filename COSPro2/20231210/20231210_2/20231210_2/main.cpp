#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_apple, int num_carrot, int k)
{
    int answer = 0;

    // 가능한 주스의 최대 양을 계산 
    //사과를 3으로 나눈 값이 당근의 개수보다 작은지를 확인한 뒤 만약 참이면 주스의 갯수가 1 오른다.
    int max_juices = (num_apple / 3 < num_carrot) ? num_apple / 3 : num_carrot;

    //위의 식에서 0보다 크면 값이 1 오르고 아닐경우 값이 0 오른다
    answer = (max_juices - k / 3 > 0) ? max_juices - k / 3 : 0;

    return answer; 
}

int main() 
{
    int num_apple1 = 5;             //사과 갯수
    int num_carrot1 = 1;            //당근 갯수
    int k1 = 2;                     //토끼 간식 갯수
    int ret1 = solution(num_apple1, num_carrot1, k1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int num_apple2 = 10;            //사과 갯수
    int num_carrot2 = 5;            //당근 갯수
    int k2 = 4;                     //토끼 간식 갯수
    int ret2 = solution(num_apple2, num_carrot2, k2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);

}