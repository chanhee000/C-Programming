/***********************************************
*파일 이름:main.c
*설명    :두수의 합을 구하는 프로그램입니다.
*작성자  : 한 창 희
*작성일자: 2023.03.08
************************************************/

#include <stdio.h> //전처리 header file

int main(void)  // 메인 함수
{
	int x;     // 변수(variable) 선언(define)
	int y;    // 변하지 않는 수는 상수
	int sum;
	int sum1;
	int sum2;
	int sum3;
	


	//int x, y, sum;
	x = 7;   // 연산
	y = 3;
	//////덧셈////////
	sum = x + y;
	printf("두수의 핪: %d \n", sum);  //출력
	//////뺄셈///////
	sum = x - y;
	printf("두수의 뺄셈: %d \n", sum);  //출력
	//////곱셈////////
	sum = x * y;
	printf("두수의 곱셈: %d \n", sum);  //출력
	//////나눗셈//////
	sum = x / y;
	printf("두수의 나누기: %f \n", sum);  //출력
	/////나머지//////
	sum = x % y;
	printf("x에y를 나눈 나머지: %d \n", sum);  //출력
	return 0;   // 함수 값 반환
}