#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int x = 20;			//x의 값을 20으로 지정한다.
	int y  = 0;
	printf("y의 값을 입력하시오:");
	scanf("%d", &y);

	if (x > y) {

		printf("x의 값이 y의 값보다 큽니다. \n");			//만약 x의 값이 y값보다 클 경우 x의 값이 y의 값보다 큽니다가 나오개한다.
		
	}
	else
	{

		printf("x의 값이 y의 값보다 작습니다. \n");			//만약 x의 ㄱ밧이 y의 값보다 작을 경우 x의 값이 y의 값보다 작습니다가 나오개한다.

	}

}