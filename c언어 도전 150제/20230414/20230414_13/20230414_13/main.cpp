#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>


int main(void) {


	double bd;
	bd = M_PI;
	printf("bd = %f", floor(bd*1000000)/1000000); //곱해줬다 나눠준 이유 floor 1000000/1000000을 하지 않으면 3.141592대신 3.141593이 나온다


}