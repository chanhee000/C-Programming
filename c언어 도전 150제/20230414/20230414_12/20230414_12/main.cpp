#include<stdio.h>

int main(void) {

	int i;
	int j;
	i = 2000000000;
	j = 3000000000;
	printf("%d\n", i);
	printf("%d\n", j);
	printf("j가 3000000000이 안나오는 이유는 4바이트를 넘어가는 수치이기 때문이다.\n");
	printf("정수형 int로 4바이트는 	약 +-21억(-2147483648 ~ ..7)정도가 된다. ");
	return 0;
}