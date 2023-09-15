#include<stdio.h>


int main(void)
{
 int num1 = 3;
 int num2 = 6;

 int* num1Pointer = &num1;
 int* num2Pointer = &num2;

 printf("%d, %d\n", num1, *num1Pointer);
 printf("%d, %d\n", num2, *num2Pointer);

 return 0;
}