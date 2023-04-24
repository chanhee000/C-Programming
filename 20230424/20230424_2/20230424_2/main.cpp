//202315022 한창희 2와100사이에 있는 모든 소수를 찾는 프로그램
#include<stdio.h>

//202315022 한창희 2와100사이에 잇는 모든 소수 찾기
#include <stdio.h>
int main(void) {
	int x, y;
	for (x = 2; x <= 100; x++) {
		for (y = 2; y < x; y++) {
			if (x % y == 0) goto out;
		}
		printf("%d ", x);
	out:;
	}
	return 0;
}
