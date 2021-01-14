#include <stdio.h>

int main () {
	int mang[4] = {3, 5, 7, 2};
	int tong = 0;
	for (int i = 0; i < 4; i++) {
		tong += mang[i];
	}
	printf ("%d", tong);
	return 0;
}
