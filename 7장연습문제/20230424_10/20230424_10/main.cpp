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